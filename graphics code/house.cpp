#include<iostream>
#include<graphics.h>

int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm," ");


// Big Rectangle
setcolor(WHITE);
setfillstyle(1,YELLOW);
rectangle(50,200,250,400);
floodfill(52,205,WHITE);

//small Rectangle
setcolor(LIGHTGRAY);
setfillstyle(2,LIGHTGRAY);
rectangle(110,300,180,399);
floodfill(111,305,LIGHTGRAY);


//line
setcolor(RED);
setfillstyle(1,RED);
line(50,200,250,200);
line(50,200,150,150);
line(250,200,150,150);
floodfill(102,190,RED);

getch();
closegraph();
}
