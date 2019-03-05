#include<stdio.h>
#include<math.h>
#define N 3
#define E 1e-4
int main()
{
    double x[N]={0},y[3],b[N]={-12,20,3},sum,error;
    double a[N][N]={5,2,1,-1,4,2,2,-3,10};
    int i,k=0,j;
    do
    {
        error=0;
        k=k+1;
        for(i=0;i<N;i++)
        {
            sum=0;
            for(j=0;j<N;j++)
            {
                if(i==j) continue;
                sum+=a[i][j]*x[j];
            }
            y[i]=(b[i]-sum)/a[i][i];
            error+=fabs(x[i]-y[i]);
        }
        if(k>50)
        {
            printf("不收敛"); exit(0);
        }
        for(i=0;i<N;i++)
            x[i]=y[i];
    }while(error>E);
    for(i=0;i<N;i++)
        printf("x%d=%lf\n",i+1,x[i]);
    return 0;
}
