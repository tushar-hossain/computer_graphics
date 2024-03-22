#include<iostream>
#include<graphics.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
//
//setcolor(WHITE);
//setfillstyle(1,BLUE);
//circle(260,160,130);
//floodfill(260,160,WHITE);
//
//setcolor(WHITE);
//setfillstyle(1,WHITE);
//circle(260,200,90);
//floodfill(260,200,WHITE);
//
//setcolor(WHITE);
//setfillstyle(1,WHITE);
//circle(220,89,30);
//floodfill(220,89,WHITE);
//
//setcolor(WHITE);
//setfillstyle(1,WHITE);
//circle(280,83,30);
//floodfill(280,83,WHITE);
//
//setcolor(BLACK);
//setfillstyle(1,BLACK);
//circle(230,95,10);
//floodfill(230,95,BLACK);
//
//setcolor(BLACK);
//setfillstyle(1,BLACK);
//circle(270,93,10);
//floodfill(270,93,BLACK);
//
//setcolor(RED);
//setfillstyle(1,RED);
//circle(255,125,10);
//floodfill(255,125,RED);
//
//setcolor(BLACK);
//setfillstyle(1,BLACK);
//line(255,135,255,200);
//ellipse(255,174,180,360,30,30);
//floodfill(125,125,WHITE);
//
//setcolor(YELLOW);
//setfillstyle(1,YELLOW);
//line(210,180,130,180);
//line(210,200,150,200);
//line(220,220,160,240);
//
//line(300,160,380,130);
//line(320,180,390,150);
//line(330,200,390,170);
//setcolor(RED);
//setfillstyle(1,RED);
//rectangle(100,285,450,310);
//floodfill(110,290,RED);
//setcolor(YELLOW);
//setfillstyle(1,YELLOW);
//circle(255,320,10);
//floodfill(255,320,YELLOW);

//setcolor(RED);
//    setfillstyle(1,WHITE);
//    line(200,200,240,150);
//    line(240,150,350,150);
//    line(350,150,390,200);
//    line(200,200,390,200);
//    //putpixel(375,190,YELLOW);
//    floodfill(375,190,RED);

    setcolor(BLACK);
    setfillstyle(1,WHITE);
    rectangle(20,20,70,70);
    floodfill(21,21,BLACK);

getch();
closegraph();
}
