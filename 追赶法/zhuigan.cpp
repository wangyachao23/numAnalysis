#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
const int MAXN = 1000;
double a[MAXN];
double d[MAXN];
double c[MAXN];
double b[MAXN];
double A[MAXN];
double B[MAXN];
double x[MAXN];
double y[MAXN];
int main()
{
    int n;
    freopen("in.txt","r",stdin);
    while(cin >> n){
        for(int i = 0;i<n;i++)cin >> b[i];
        for(int i = 0;i<n;i++)cin >> a[i];///���������Խ���
        for(int i = 0;i<n-1;i++)cin >> c[i];///�������϶Խ���---Ϲ�������
        for(int i = 1;i<n;i++)cin >> d[i];///�¶Խ���---Ϲ������ƣ�ע���½Ǳ��1��ʼ
        ///Crout�ֽ�
        A[0] = a[0];B[0] = c[0]/A[0];
        for(int i = 1;i<n;i++){
            A[i] = a[i] - d[i]*B[i-1];
            if(i<n-1)B[i] = c[i]/A[i];
        }

        ///�ش���y
        y[0] = b[0]/A[0];
        for(int i = 1;i<n;i++){
            y[i] = (b[i] - y[i-1]*d[i])/A[i];
        }
        ///�ش���x
        x[n-1] = y[n-1];
        for(int i = n-2;i>=0;i--){
            x[i] = y[i] - x[i+1]*B[i];
        }
        ///���
        /*for(int i = 0;i<n;i++){
            if(!i)cout << y[i];
            else cout << " " << y[i];
        }
        cout << endl;*/
        for(int i = 0;i<n;i++){
            if(!i)cout << x[i];
            else cout << " " << x[i];
        }
        cout << endl;
    }
    return 0;
}
