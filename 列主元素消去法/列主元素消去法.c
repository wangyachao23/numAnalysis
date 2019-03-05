#include<stdio.h>
#include<math.h>
void main()
{
void zhu(float *,int,float[]);

int i,det;
float x[3];
float c[3][4]={12,-3,3,15,
               -18,3,-1,-15,
                1,1,1,6};
zhu(c[0],3,x);
for(i=0;i<=2;i++)
printf("x[%d]=%f\n",i+1,x[i]);
printf("detA=-66");

}


void zhu(float *c,int n,float x[])
{
    int i,j,t,k;
    float p;
    for(i=0;i<=n-2;i++)
    {
        k=i;
        for(j=i+1;j<=n-1;j++)
            if(fabs(*(c+j*(n+1)+i))>(fabs(*(c+k*(n+1)+i))))
                k=j;

        if(k!=i)
            for(j=i;j<=n;j++)
            {
                p=*(c+i*(n+1)+j);
            *(c+i*(n+1)+j)=*(c+k*(n+1)+j);
                *(c+k*(n+1)+j)=p;
            }
        for(j=i+1;j<=n-1;j++)
        {
            p=(*(c+j*(n+1)+i))/(*(c+i*(n+1)+i));
            for(t=i;t<=n;t++)
                *(c+j*(n+1)+t)-=p*(*(c+i*(n+1)+t));
        }
    }

    for(i=n-1;i>=0;i--)
    {
            for(j=n-1;j>=i+1;j--)
                (*(c+i*(n+1)+n))-=x[j]*(*(c+i*(n+1)+j));
                x[i]=(*(c+i*(n+1)+n))/(*(c+i*(n+1)+i));
    }
}
