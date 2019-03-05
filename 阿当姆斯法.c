#include<stdio.h>
#include<math.h>
double f(double x,double y)
{
    if(x==0) return 0;
    else return 1-y;
}
void rk(float y0,float yy[])
{
    float x=0.2,y=0.181,k1,k2,k3,k4;
    float h=0.2;
    int i;
    yy[0]=0.181;
    for(i=2;i<=3;i++)
    {
        k1=f(x,y);
        k2=f(x+h/2,y+h*k1/2);
        k3=f(x+h/2,y+h*k2/2);
        k4=f(x+h,y+h*k3);
        y=y+h*(k1+2*k2+2*k3+k4)/6;
        x=i*h;
        yy[i-1]=y;
    }
}
void adams(float y0)
{
    int i;
    float y1,y2,y,yp,yc,yy[3],h,x;
    printf("x[0]=0.000000 y[0]=%f\n",y0);
    rk(y0,yy);
    y1=yy[0];
    y2=yy[1];
    y=yy[2];
    h=0.2;
    for(i=1;i<=3;i++)
    {
            printf("x[%d]=%f y[%d]=%f\n",i,i*h,i,yy[i-1]);
            for(i=3;x+h<1;i++)
            {
                x=i*h;
                yp=y+h*(55*f(x,y)-59*f(x-h,y2)+37*f(x-2*h,y1)-9*f(x-3*h,y0))/24;
                yc=y+h*(9*f(x+h,yp)+19*f(x,y)-5*f(x-h,y2)+f(x-2*h,y1))/24;
                printf("x[%d]=%f  ",i+1,x+h);
                printf("ÒþÊ½: y[%d]=%f ",i+1,yc);
                printf("ÏÔÊ½£ºy[%d]=%f\n",i+1,yp);
                y0=y1;
                y1=y2;
                y2=y;
                y=yc;
            }
    }
}
int main()
{
    float y0=0;
    adams(y0);
}
