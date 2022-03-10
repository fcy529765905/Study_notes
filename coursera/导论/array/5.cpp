#include<iostream>
#include<iomanip>
using namespace std;//异常细胞检测
int main(){
    int n,count = 0;
    cin>>n;
    int pic[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>pic[i][j];
        }
    }
    for (int i = 1; i < n-1; i++) //与相邻数组比较
    {
        for (int j = 1; j < n-1; j++)
        {
            if(pic[i][j+1]-pic[i][j]>=50 && pic[i][j-1]-pic[i][j]>=50 && pic[i+1][j]-pic[i][j]>=50 && pic[i-1][j]-pic[i][j]>=50)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;

}