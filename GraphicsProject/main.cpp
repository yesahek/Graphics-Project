#include <iostream>
#include "conio.h"
#include <graphics.h>
#include <dos.h>

/*
Group members
Full Name                     |   IDNo         Sec

YESAHEK HAILE    -------------  14,251/19      | 2
BIRTUKAN AWRARIS -------------  13,109/19      | 1
ESKINDER BEKELE  -------------  13,119/19      | 1
NIGAT W/HANA -----------------  14,267/19      | 1
AYNALEM ABEBE ----------------  13,990/19      | 2
FEKADU MESELE ----------------  14,055/19      | 1
*/

using namespace std;

void radiatingcircle()
{
    int gd =DETECT,gm;
    int x,y,i,j;
    initgraph(&gd,&gm,(char*) "");
    x = getmaxx()/2;
    y = getmaxy()/2;
    for(i= 10,j=1; j<15,i<=200;j++,i=i+10)
    {
        delay(100);
        if(j>=15)
        {
            j=1;
        }
        setcolor(j);
       circle(x,y,i);

       delay(10);

    }
    getch();
    closegraph();

}
void olympic() {
int gd = DETECT,gm;
    initgraph(&gd,&gm,(char*) "");

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    rectangle(0,0,640,480);
    floodfill(320,240,WHITE);


    circle(190,215,50);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BLUE);
    circle(190,215,45);
    floodfill(238,215,WHITE);

    circle(240,265,50);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(240,265,45);
    floodfill(288,265,WHITE);
    floodfill(193,258,WHITE);

    circle(300,215,50);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BLACK);
    circle(300,215,45);
    floodfill(348,215,WHITE);
    floodfill(282,258,WHITE);

    circle(350,265,50);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    circle(350,265,45);
    floodfill(398,265,WHITE);
    floodfill(302,258,WHITE);

    circle(410,215,50);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    circle(410,215,45);
    floodfill(458,215,WHITE);
    floodfill(392,258,WHITE);
    getch();
    closegraph();

}

void inscribedcircle(){
      int gd =DETECT,gm;
    initgraph(&gd,&gm,(char*) "");
    bgiout<<"Circle inside a Rectangle"<<endl;
    outstreamxy(220,120);
    bgiout<<"Press any key to continue..."<<endl;
    outstreamxy(220,360);

    rectangle(220,165,420,315);
    ellipse(320,240,0,360,100,75);

    getch();
    closegraph();

    }

void radiosignal() {
 int gd =DETECT,gm;
    int x,y,i,j;
    initgraph(&gd,&gm,(char*) "");
    x = getmaxx()/2;
    y = getmaxy()/2;
    for(i= 10,j=1; j<15,i<=200;j++,i=i+10)
    {
        delay(100);
        if(j>=15)
        {
            j=1;
        }
        setcolor(j);
       arc(x,y,40,140,i);

       delay(10);

    }
    getch();
    closegraph();
}

void spectrum(){
  int gd =DETECT,gm;
    initgraph(&gd,&gm,(char*) "");

    int j,i;
    for(i = 0,j=1; j<15,i <= 640; j++,i=i+5)
    {
    if(j >= 15)
        j=1;
    setcolor(j);
    line(340,240,0+i,0);

    delay(10);

    }

    getch();
    closegraph();
}

int main()
{
    cout<<"===================================================== \n";
cout<<" \t\tGroup Members \t \n ";
cout<<"===================================================== \n";
cout<<"Full Name                     |   IDNo    \n";

cout<<"YESAHEK HAILE   -------------  14,251/19 \n";
cout<<"BIRTUKAN AWRARIS -------------  13,109/19 \n";
cout<<"ESKINDER BEKELE  -------------  13,119/19 \n";
cout<<"NIGAT W/HANA -----------------  14,267/19 \n";
cout<<"AYNALEM ABEBE ----------------  13,990/19 \n";
cout<<"FEKADU MESELE ----------------  14,055/19 \n\n\n";
cout << endl;
cout<<"===================================================== \n";
cout<<" \t\tMENU \t \n ";
cout<<"===================================================== \n";
cout<<" 1.Radiating Circle\n";
cout<<" 2.Radio Signal\n";
cout<<" 3.Spectrum\n";
cout<<" 4.Inscribed Circle\n";
cout<<" 5.Olympic\n";
cout<< " Enter your choice and press return: ";
cout << endl;

int choice;
cin >> choice;

switch (choice)
{
case 1:

    radiatingcircle();
    main();
break;
case 2:
    radiosignal();
    main();
break;
case 3:
    spectrum();
    main();
break;
case 4:
    inscribedcircle();
    main();
break;
case 5:
    olympic();
    main();
break;
default:
cout << "Not a Valid Choice. \n"
<< "Choose again.\n";
break;
}
main();
}

