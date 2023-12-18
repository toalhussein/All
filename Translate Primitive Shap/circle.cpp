#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

void circleMidpoint()
{
	int gd = DETECT, gm;
	int r, xc, yc,p, x, y , tx , ty;
	
	void Plot(int , int , int  , int );
	void Translation(int x , int y , int xc , int yc , int tx , int ty);
	
    initgraph(&gd,&gm,NULL);
	cout<<"Circle MidPoint\n";
	cout<<"Enter the center co-ordinates\n";
	cin>>xc>>yc;
	cout<<"Enter the radius of circle\n";
	cin>>r;
	
	x = 0  ;
	y= r ;
	p= 1-r ;
    cout<<"P"<<"	"<<"X"<<"	"<<"Y\n";
   // x++;
     
	 


	while(x<y)
	{
	   
      cout<<p<<"	"<<x+1<<"	"<<y<<"\n";
		Plot(x , y ,  xc , yc);
		Translation( x ,  y ,  xc ,  yc , 150 , 0);
		if(p>=0)
		{
		y--;
		p = p+2*x+1-2*y;}
		else
		{
			p = p+2*x +1 ;
		
		
		}
	   
	
		x++;
	
	}
	  
	
	getch();
	closegraph();
}




void Plot(int x , int y , int xc , int yc)
{
	putpixel(x+xc , y+yc , GREEN);
	putpixel(-x+xc , y+yc , GREEN);
	putpixel(-x+xc , -y+yc , GREEN);
	putpixel(x+xc , -y+yc , GREEN);
	
	putpixel(y+xc , x+yc , GREEN);
	putpixel(-y+xc , x+yc , GREEN);
	putpixel(-y+xc , -x+yc , GREEN);
	putpixel(y+xc , -x+yc , GREEN);
	
	
}
void Translation(int x , int y , int xc , int yc , int tx , int ty)

{
	xc = xc+tx ;
	yc = yc+tx ; 
	
	putpixel(x+xc , y+yc , WHITE);
	putpixel(-x+xc , y+yc , WHITE);
	putpixel(-x+xc , -y+yc , WHITE);
	putpixel(x+xc , -y+yc , WHITE);
	
	putpixel(y+xc , x+yc , WHITE);
	putpixel(-y+xc , x+yc , WHITE);
	putpixel(-y+xc , -x+yc , WHITE);
	putpixel(y+xc , -x+yc , WHITE);
	
	
}

int main()
{
	 circleMidpoint();
}
