// C++ program for Mid-point line generation
#include<bits/stdc++.h>
#include<stdio.h>  
#include<graphics.h>  
#include<bits/stdc++.h>
using namespace std;


void midPoint(int X1, int Y1, int X2, int Y2)
{
	// calculate dx & dy

	int dx = X2 - X1;
	int dy = Y2 - Y1;

	if(dy<=dx){
	// initial value of decision parameter d
	int d = dy - (dx/2);
	int x = X1, y = Y1;

	// Plot initial given point
	putpixel(x,y,5);

	// iterate through value of X
	while (x < X2)
	{
		x++;

		// E or East is chosen
		if (d < 0)
			d = d + dy;

		// NE or North East is chosen
		else
		{
			d += (dy - dx);
			y++;
		}

		// Plot intermediate points
		putpixel(x,y,5);
	
	}
	}

else if(dx<dy)
{
	// initial value of decision parameter d
	int d = dx - (dy/2);
	int x = X1, y = Y1;

	// Plot initial given point
	putpixel(x,y,5);
	
	

	// iterate through value of X
	while (y < Y2)
	{
		y++;

		// E or East is chosen
		if (d < 0)
			d = d + dx;

		// NE or North East is chosen
		// NE or North East is chosen
		else
		{
			d += (dx - dy);
			x++;
		}

		// Plot intermediate points
		putpixel(x,y,5);
		
	}
}
}

// Driver program
int main()
{
	
	int gd = DETECT, gm;

	
	initgraph (&gd, &gm,NULL);

	int X1,X2,Y1,Y2;
    cout<<"Enter co-ordinates of first point:"<<endl; 
    cin>>X1>>Y1;
    cout<<"Enter co-ordinates of second point:"<<endl; 
    cin>>X1>>X1; 
	midPoint(X1, Y1, X2, Y2);
    getch();
    closegraph();
	return 0;
}
