#include <iostream>
#include<math.h>
using namespace std;
static int k=0;
static int count=1;
double f(double x)
{
return (x*x*x-x-1);
}
int main()
{
double x0,x1,x2;
double e=0.00001;
cout<<"请输入两个初值X0，X1"<<endl;
cin>>x0>>x1;
x2=x1-f(x1)*(x1-x0)/(f(x1)-f(x0));
while(x2-x1>e||x1-x2>e)
{
x0=x1;
x1=x2;
x2=x1-f(x1)*(x1-x0)/(f(x1)-f(x0));
count+=1;
}
cout<<"方程的根为："<<x2<<endl;
cout<<"迭代的次数为："<<count<<endl;
return 0;
}
