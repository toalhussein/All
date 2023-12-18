#include <iostream>
#include <graphics.h>
#include <math.h>
#include <cguid.h>
#include <windows.h>

using namespace std;


void Elipse_Mid_point()
{
    int Xc , Yc , rx , ry , theta;
    void plot(int  , int  , int  , int  );
    void Rotate(int  , int  , int  , int , int );
    
    
    
    cout<<"{rx , ry}: ";
    cin>>rx>>ry;
    cout<<"{Xc , Yc}: ";
    cin>>Xc>>Yc;
    cin>>theta;
 
    int x=0 , y=ry;
    int rxp=pow(rx,2) , ryp=pow(ry,2);

    int Po = round(ryp+0.25*rxp-rxp*ry);

    int fx=2*rxp*y , fy=0;


    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    //Regoin_1
    while(fx > fy){
    	
        plot(Xc , Yc , x , y);
        Rotate(Xc , Yc , x , y,theta);
        

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
        Rotate(Xc , Yc , x , y,theta);
        

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
void plot(int Xc , int Yc , int x , int y ) 
{
	
      	
    	putpixel(Xc+x,Yc+y,WHITE);
        putpixel(Xc-x,Yc+y,WHITE);
        putpixel(Xc-x,Yc-y,WHITE);
        putpixel(Xc+x,Yc-y,WHITE);
}

void Rotate(int Xc , int Yc , int x , int y , int theta)
{
		Xc = Xc*cos(theta)-Yc*sin(theta);
      	Yc = Xc*sin(theta) +Yc*cos(theta);
      	
    	putpixel(Xc+x,Yc+y,GREEN);
        putpixel(Xc-x,Yc+y,GREEN);
        putpixel(Xc-x,Yc-y,GREEN);
        putpixel(Xc+x,Yc-y,GREEN);
	
}
int main()
{
    Elipse_Mid_point();
}


