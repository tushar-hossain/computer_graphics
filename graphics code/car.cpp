#include<iostream>
#include<graphics.h>

int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm," ");

rectangle(80,250,450,280);

//top part
line(200,200,300,200);
line(200,200,165,250);
line(300,200,335,250);
line(250,250,250,200);

//state line
line(50,310,470,310);

//chaka one
setcolor(RED);
setfillstyle(1,RED);
circle(180,290,20);
floodfill(181,291,RED);

//chaka two
setcolor(RED);
setfillstyle(1,RED);
circle(350,290,20);
floodfill(350,291,RED);

getch();
closegraph();
}


