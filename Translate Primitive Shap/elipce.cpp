#include <iostream>
#include <graphics.h>
#include <math.h>
#include <cguid.h>
#include <windows.h>

using namespace std;


void Elipse_Mid_point()
{
    int Xc , Yc , rx , ry , tx , ty;
    void plot(int  , int  , int  , int );
    void Translate (int x , int y , int xc , int yc , int tx , int ty);
    cout<<"{rx , ry}: ";
    cin>>rx>>ry;
    cout<<"{Xc , Yc}: ";
    cin>>Xc>>Yc;
    cout<<"{TX , Ty}: ";
    cin>>tx>>ty;

    int x=0 , y=ry;
    int rxp=pow(rx,2) , ryp=pow(ry,2);

    int Po = round(ryp+0.25*rxp-rxp*ry);

    int fx=2*rxp*y , fy=0;


    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    //Regoin_1
    while(fx > fy){
    	
        plot(Xc , Yc , x , y);
        Translate ( Xc , Yc , x , y ,  tx ,  ty);

        x++;
        fy = 2*ryp*x;
        if(Po >= 0){
            y--;
            fx = 2*rxp*y;
            Po = Po+fy-fx+ryp;
        }
        else{
            Po = Po+fy+ryp;
        }
    }

    //Regoin_2
    while(y >= 0){
        plot(Xc , Yc , x , y);
        Translate (Xc , Yc , x , y,  tx ,  ty);

        y--;
        fx = 2*rxp*y;
        if(Po <= 0){
            x++;
            fy = 2*ryp*x;
            Po = Po+fy-fx+rxp;
        }
        else{
            Po = Po-fx+rxp;
        }
    }
    
    getch();
    closegraph();
}
void plot(int Xc , int Yc , int x , int y)
{
    	putpixel(Xc+x,Yc+y,WHITE);
        putpixel(Xc-x,Yc+y,WHITE);
        putpixel(Xc-x,Yc-y,WHITE);
        putpixel(Xc+x,Yc-y,WHITE);
}

void Translate (int Xc , int Yc , int x , int y , int tx , int ty)
{
	Xc = Xc = tx ;
	Yc = Yc +ty ;
    putpixel(Xc+x,Yc+y,GREEN);
    putpixel(Xc-x,Yc+y,GREEN);
    putpixel(Xc-x,Yc-y,GREEN);
    putpixel(Xc+x,Yc-y,GREEN);
}

int main()
{
    Elipse_Mid_point();
}


