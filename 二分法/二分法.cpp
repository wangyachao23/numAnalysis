#include<iostream>
#include<math.h>
using namespace std;


int main()                                       //二分法 解为0.25753 运算次数27
{
    double a=0,b=1;
    double x;
    double l;
    int k=0;
    while(fabs(a-b)>=0.00000001)
    {
        x=(a+b)/2;
        k++;
        cout<<k<<" "<<x<<endl;
        if((x*x-3*x+2-exp(x))<0)
           b=x;
        else if((x*x-3*x+2-exp(x))>0)
           a=x;
        else
           {
               l=x;
               break;
           }
    }
    l=x;
    cout<<"利用二分法求得的方程的解为："<<l<<endl;
    cout<<"利用二分法运算次数："<<k<<endl;
    return 0;
}
