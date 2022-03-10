#include<iostream>
using namespace std;//找出第k大的数
int main(){
    int N,K;
    cin>>N>>K;
    int a[N],b[N];//a[n]存放数列,b[n]存放数列中比对应a[n]数字大的个数
    for (int i = 0; i < N; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < N; i++)
    {   
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if (a[j]>a[i])
        {
            count ++ ; 
            b[i] = count;
        }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (b[i] == K-1)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}