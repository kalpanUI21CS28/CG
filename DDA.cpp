#include <graphics.h>
#include <iostream>
#include <math.h>
#include <dos.h>
 using namespace std;
int  main()
{
float x,y,x1,y1,x2,y2,dx,dy,step;
int i,gd=DETECT,gm;
 
initgraph(&gd,&gm,NULL);
 
cout<<"Enter the value of x1 and y1 : ";
cin>>x1>>y1;
cout<<"Enter the value of x2 and y2: ";
cin>>x2>>y2;
 
dx=abs(x2-x1);
dy=abs(y2-y1);
 

if(dx>=dy)
step=dx;
else
step=dy;
 
dx=dx/step;
dy=dy/step;
 
x=x1;
y=y1;
 
i=1;
while(i<=step)
{
putpixel(x,y,5);
x=x+dx;
y=y+dy;
i=i+1;
delay(100);
}
 
closegraph();
}





// #include<graphics.h>  
// #include<conio.h>  
// #include<stdio.h>  
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {  
//     int gd = DETECT ,gm, i;  
//     float x, y,dx,dy,steps,m;  
//     int x0, x1, y0, y1;  

//     initgraph(&gd, &gm, NULL);  
//     setbkcolor(WHITE);  
//     // x0 = 100 , y0 = 200, x1 = 500, y1 = 300;  
//     cin>>x0>>y0>>x1>>y1;
//     dx = (float)(x1 - x0);  
//     dy = (float)(y1 - y0);  
//     if(dx>=dy)  
//            {  
//         steps = dx;  
//     }  
//     else  
//            {  
//         steps = dy;  
//     }  
//     dx = dx/steps;  
//     dy = dy/steps;  

//     // m = dy/dx;


//     x = x0;  
//     y = y0;  
//     i = 1;  
//     while(i<= steps)  
//     {  
//         putpixel(x, y, WHITE);  
//         x += dx;  
//         y += dy;  
//         if(m>1){}
//         i=i+1;  
//     }  
//     getch();  
//     closegraph();  
// }  