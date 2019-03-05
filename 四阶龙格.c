#include<stdio.h>
#include<math.h>

double f(double x,double y)
{
if(x==0)
{
    return 1;
}
else return x+y;
}
double folk(){
double x0=0,y0=1,x1,y1,h=0.2,k1,k2,k3,k4;
while(x0<1)
{
    x1=x0+h;
    k1=f(x0,y0);
    k2=f(x0+h/2,y0+h*k1/2);
    k3=f(x0=h/2,y0+h*k2/2);
    k4=f(x0+h,y0+h*k3);
    y1=y0+h*(k1+2*k2+2*k3+k4)/6;
    printf("x=%1f,y=%1f\n",x1,y1);
    x0=x1;y0=y1;
}
}
int main()
{
    folk();
    return 0;
}
