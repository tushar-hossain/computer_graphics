#include<iostream>
#include<graphics.h>

int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm," ");

//head
setcolor(WHITE);
setfillstyle(1,YELLOW);
circle(200,200,100);
floodfill(200,200,WHITE);

//eyes
setfillstyle(1,RED);
circle(230,170,20);
floodfill(230,170,WHITE);

//eyes
setfillstyle(1,RED);
circle(170,170,20);
floodfill(170,170,WHITE);

setcolor(BLACK);
ellipse(200,220,180,360,30,20);

getch();
closegraph();
}
