
#include <iostream>
#include<graphics.h>
using namespace std;

int main(int argc, char *argv[])
{
    int choice, gd,gm;

    do{
    cout << "Main Menu\n";
    cout << "Please Choose any Option: \n";
    cout << "1 - Boat\n";
    cout << "2 - Car\n";
    cout << "3 - House \n";
    cout << "4 - Man Emoji \n";
    cout << "5 - Monitor \n";
    cout << "6 - Emoji \n";
    cout << "Selection: ";
    cin >> choice;

         switch(choice) {
           case 1:
               gd=DETECT,gm;
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
                break;
            case 2:
                gd=DETECT,gm;
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
             break;

           case 3:
               gd=DETECT,gm;
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
                break;

             case 4:
                 gd=DETECT,gm;
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
             break;


             case 5:
                 gd=DETECT,gm;
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
             break;


            case 6:
                gd=DETECT,gm;
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

           default:
                cout << "Main Menu\n";
                cout << "Please Choose any Option: \n";
                cout << "1 - Boat\n";
                cout << "2 - Car\n";
                cout << "3 - House \n";
                cout << "4 - Man Emoji \n";
                cout << "5 - Monitor \n";
                cout << "6 - Emoji \n";
                cout << "Selection: ";
         }
      } while(choice !=6);
    system("PAUSE");
    return EXIT_SUCCESS;

    getch();
             closegraph();
}
