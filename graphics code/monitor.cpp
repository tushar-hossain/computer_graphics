
#include<iostream>
#include<graphics.h>

int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm," ");
//upper
rectangle(100,100,350,350);

circle(235,170,20);

// down
ellipse(230,410,360,360,25,25);


//line
line(205,415,205,350);
line(255,415,255,350);


// down
ellipse(230,410,360,360,25,25);


//line
line(205,415,205,350);
line(255,415,255,350);



//traffic
rectangle(200,140,270,320);

setcolor(GREEN);
setfillstyle(1,GREEN);
circle(235,170,20);
floodfill(236,171,GREEN);

setcolor(YELLOW);
setfillstyle(1,YELLOW);
circle(235,225,20);
floodfill(236,226,YELLOW);

setcolor(BLACK);
setfillstyle(1,BLACK);
circle(235,170,20);
floodfill(236,281,BLACK);

setcolor(RED);
setfillstyle(1,RED);
circle(235,280,20);
floodfill(236,281,RED);

//middle
setcolor(WHITE);
setfillstyle(1,WHITE);
rectangle(110,110,340,340);
floodfill(111,111,WHITE);

getch();
closegraph();

}
