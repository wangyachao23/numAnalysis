#include <stdio.h>
#include <math.h>

const double eps = 1e-6; //�������Ǽ���ľ���
double a,b,c,d;        //�ٶ���������ĺ�����һԪ���η����飬a*x*x*x+b*x*x+c*x+d=0
double f(double x) //�������ǵĺ���
{
return a*x*x*x+b*x*x+c*x+d;
}

int main()
{
    double m,n;//�������[m,n]
    double i,j,sum;
    printf("������һԪ���η������ϵ����a,b,c,d:");
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    printf("\n�������������[m,n]:");
    scanf("%lf%lf",&m,&n);
    if(f(m)*f(n)<0)
    {
        while(fabs(m-n)>eps)
        {
          i=(m+n)/2.0;
          sum=f(i);
          printf("[%lf  %lf]\n",m,n);
          if(fabs(sum)<eps)
           {
               break;
            //printf("\n�÷�����Ľ��Ƹ�Ϊ:x2*=%lf\n",i);
            //return 1;
           }
          else if(f(i)*f(m)<0)
          {
              n=i; //�������䣬��[m,n]����[m,i],�����i���е�
          }
          else if(f(i)*f(n)<0)
          {
              m=i;//�������䣬��[m,n]����[i,n],�����i���е�
          }
        }
    }
    else ; //��������������������Լ���
    printf("%lf  %lf",m,n);
    j=(m+n)/2;
    printf("\n�÷�����Ľ��Ƹ�Ϊ:x*=%lf\n",j);
}
