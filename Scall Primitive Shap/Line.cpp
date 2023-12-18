#include <iostream>
#include<math.h>
#include<graphics.h>
#include<conio.h>
#include<windows.h>

using namespace std;

void Bresenham_Line()
{
    int x1,y1,x2,y2;
    ///////////////////


    cout<<"\n\t\t\t\t+=========================+"<<endl;
    cout<<"\t\t\t\t     +_BRESENHAM_Line_+"<<endl;
    cout<<"\t\t\t\t+=========================+"<<endl;
    cout<<"\n\n\t\t\t\t+-------------------+"<<endl;
    cout<<"\t\t\t\t|number(x1)= ";
    cin>>x1;
    cout<<"\t\t\t\t|-------------------+"<<endl;
    cout<<"\t\t\t\t|number(y1)= ";
    cin>>y1;
    cout<<"\t\t\t\t|-------------------+"<<endl;

    cout<<"\t\t\t\t|number(x2)= ";
    cin>>x2;
    cout<<"\t\t\t\t|-------------------+"<<endl;

    cout<<"\t\t\t\t|number(y2)= ";
    cin>>y2;
    cout<<"\t\t\t\t+-------------------+"<<endl;
    //////////////////////////////
    int Dx=x2-x1 , Dy=y2-y1 , p0;
    /////////////////////////////
    int X=x1 ,Y=y1 , k=0;
    ////////////////////////////
    p0=2*Dy-Dx;


    int gd=DETECT , gm;
    initgraph(&gd,&gm,"C:\TurboC++\Disk\TurboC3\BGI");

    cout<<"\n\t\t\t\t+=========================+"<<endl;
    cout<<"\t\t\t\t     +_BRESENHAM_Line_+"<<endl;
    cout<<"\t\t\t\t+=========================+"<<endl;


    putpixel(round(X),round(Y),GREEN);
    cout<<"\n\t\t\t\t============================\n";
    cout<<"\t\t\t\t|K|\t|PK|\t|X|\t|Y|"<<endl;
    cout<<"\t\t\t\t============================\n";

    putpixel(X,Y,GREEN);
    putpixel(X+100,Y,RED);
    while(X<=x2){
            cout<<"\t\t\t\t|"<<k<<"|\t|"<<p0<<"|\t|"<<X<<"|\t|"<<Y<<"|"<<endl;
        if(x1==x2 && y1==y2){
            break;
        }
        else if(p0>=0){
            p0=p0+2*Dy-2*Dx;
            Y++;
            putpixel(X,Y,GREEN);
            putpixel(X+100,Y,RED);
        }
        else{
            p0=p0+2*Dy;
            putpixel(X,Y,GREEN);
            putpixel(X+100,Y,RED);
        }
        k++;
        X++;
    }
     cout<<"\t\t\t\t===========================\n";

    getch();
    closegraph();

}


int main()
{
    Bresenham_Line();
}

