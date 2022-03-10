#include<iostream>
using namespace std;//自除整数
int main(){
    int n;
    cin>>n;
    int a[n-10+1];
    for (int i = 0; i < n-9 ; i++)
    {
        a[i]=i+10;
    }
    //取十和个位数
    for (int i = 0; i < n-9; i++)
    {
        int ten = 0,num = 0;
        ten = a[i]/10;
        num = a[i]%10;
        if (a[i]%(ten+num) == 0 )
        {
            cout<<a[i]<<endl; //判断输出
        }
    }
    return 0;
}