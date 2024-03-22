
#include<iostream>
#include<graphics.h>

int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm," ");


//sky
setcolor(BLUE);
setfillstyle(1,BLUE);
rectangle(0,0,635,479);
floodfill(1,1,BLUE);

//water
setcolor(LIGHTBLUE);
setfillstyle(3,LIGHTBLUE);
rectangle(0,220,635,479);
floodfill(1,221,LIGHTBLUE);

// sun
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
circle(400,50,30);
floodfill(401,51,LIGHTRED);


// flag
setcolor(GREEN);
setfillstyle(1,GREEN);
rectangle(160,100,330,200);
floodfill(161,101,GREEN);

//flag circle
setcolor(RED);
setfillstyle(1,RED);
circle(245,150,20);
floodfill(245,150,RED);

// flag stand
setcolor(BROWN);
setfillstyle(1,BROWN);
line(235,250,235,200);
line(255,250,255,200);
line(235,250,255,250);
line(235,200,255,200);
floodfill(236,202,BROWN);


// boat top part
setcolor(WHITE);
setfillstyle(1,YELLOW);
line(150,300,190,250);
line(330,300,290,250);
line(190,250,290,250);
line(150,300,330,300);
floodfill(320,298,WHITE);


// boat down part
setcolor(WHITE);
setfillstyle(1,LIGHTGRAY);
line(100,300,400,300);
line(100,300,160,380);
line(400,300,320,380);
line(160,380,320,380);
floodfill(201,308,WHITE);



getch();
closegraph();
}


