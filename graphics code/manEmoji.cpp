#include<iostream>
#include<graphics.h>

int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm," ");

//circle
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
circle(200,150,100);
floodfill(201,151,LIGHTRED);

//eye left
setcolor(WHITE);
setfillstyle(1,WHITE);
ellipse(180,120,360,360,15,30);
floodfill(180,120,WHITE);

//small eye
setcolor(BLACK);
setfillstyle(1,BLACK);
ellipse(186,130,360,360,8,15);
floodfill(186,130,BLACK);

//eye right
setcolor(WHITE);
setfillstyle(1,WHITE);
ellipse(230,120,360,360,15,30);
floodfill(230,120,WHITE);

//small eye
setcolor(BLACK);
setfillstyle(1,BLACK);
ellipse(236,130,360,360,8,15);
floodfill(236,130,BLACK);

//line mouth
setcolor(RED);
setfillstyle(1,RED);
line(170,178,230,178);
ellipse(200,178,180,360,30,30);
floodfill(171,180,RED);

//rectangle
setcolor(GREEN);
setfillstyle(1,GREEN);
rectangle(100,250,300,453);
floodfill(102,251,GREEN);


//left hand
setcolor(YELLOW);
setfillstyle(1,YELLOW);
line(100,252,40,310);
line(40,310,100,370);
line(100,252,100,271);
//second angle
line(100,271,60,310);
line(60,310,100,350);
line(100,350,100,370);
floodfill(41,310,YELLOW);


//right hand
setcolor(YELLOW);
setfillstyle(1,YELLOW);
line(300,250,400,200);
line(400,200,300,150);
line(300,250,300,280);
//// second angle
line(300,280,440,200);
line(440,200,292,120);
line(300,150,292,120);
floodfill(401,200,YELLOW);


getch();
closegraph();
}
