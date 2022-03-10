#include<iostream>
#include<iomanip>
using namespace std;//矩阵交换行
int main(){
    int a[5][5],b[5];
    for (int i = 0; i < 5; i++)//读取矩阵
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>a[i][j];
        }
    }
    int n,m;
    cin>>n>>m;
    if (m>=0&&m<=4&&n>=0&&n<=4)//矩阵行交换位置
    {
        
        for (int i = 0; i < 5; i++)
        {
            b[i] = a[m][i];
            a[m][i] = a[n][i];
            a[n][i] = b[i];
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout<<setw(4)<<a[i][j];
            }
            cout<<endl;
        }
        
    }
    else cout<<"error"<<endl;
    
}