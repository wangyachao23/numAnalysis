#include<stdio.h>
#include<math.h>
void main()
{
    int k;
    double a,b,n,h,x;
    double f,f1,f2,T,F=0.0;

    printf("input a,b,n:");
    scanf("%1f%1f%1f",&a,&b,&n);
    h=(b-a)/n;
    for(k=1;k<n;k++)
    {
        x=a+k*h;
        f=sin(x)/x;
        printf("\nf=%1f",f);
        F+=f;
        printf("\nF=%1f",F);
    }
    if(a!=0.0)
        f1=sin(a)/a;
    else f1=1.0;
    printf("\nf1=%1f",f1);
    f2=sin(b)/b;
    printf("\nf2=%1f",f2);
    T=0.5*h*(f1+2*F+f2);
    printf("\nT=%1f0",T);
}
