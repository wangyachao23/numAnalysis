# include<stdio.h>
# include<math.h>
# define N 6


int main(){
	float NF2(float *x,float *y);
	float A[N][N],b[N],sum=0;
	float x[N],y[N]={0},x0[N];
	int i,j,n=0;


	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%f",&A[i][j]);
		}
	}


	for(i=0;i<N;i++){
 		scanf("%f",&b[i]);
	}

	 for(i=0;i<N;i++){
 		scanf("%f",&x0[i]);
 	}


	 for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%3.1f    ",A[i][j]);
		}
		printf("\n");
	}

	//�����������
	//printf("����÷�����ĳ�������\n");
	for(i=0;i<N;i++){
		printf("%3.1f\n",b[i]);
	}

	//�����ĵ�����ֵ
	//printf("��÷�����ĵĵ�����ֵ�ǣ�\n");
	for(i=0;i<N;i++)
	{
				printf("%3.1f\n",x0[i]);
	}

	for(i=0;i<N;i++)
	{
		x[i]=x0[i];
	}
	for(n=0;;n++){
	for(i=0;i<N;i++){
		sum=0;
		for(j=0;j<N;j++){
			if(j!=i){
				sum=sum+A[i][j]*x[j];
			}
		}
		y[i]=(1/A[i][i])*(b[i]-sum);
		//sum=0;
	}
	//�ж�����С
		if(NF2(x,y)>0.01){
				for(i=0;i<N;i++){
		x[i]=y[i];
	}
	}
			else
			break;
	}
	//printf("����%d���ſɱȵ������������Ľ⣺\n",n+1);
	for(i=0;i<N;i++){
		printf("%f      ",y[i]);
	}


}
