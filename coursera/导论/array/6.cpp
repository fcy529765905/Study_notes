#include<iostream>
using namespace std;//循环移动
int main(){
    int n,m;
    cin>>n>>m;
    int mov[n+m];
    for (int i = m; i < n+m; i++)
    {
        cin>>mov[i];
    }
    for (int i = 0; i < m; i++)//移动
    {   

        mov[i] = mov[n+i];
        /*int a;
        a = mov[i];
        mov[i+m] = mov[n+m-i-1];
        mov[n+m-i-1] = a;*/
    }
    for (int i = 0; i < n; i++)
    {
        cout<<mov[i]<<' ';
    }
    cout<<endl;
    return 0;
}