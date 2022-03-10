#include<iostream>
using namespace std;//寻找下标
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if (a[i] == i)
        {
            cout<<a[i];return 0;
        }
    }
    cout<<"N";
    return 0;
}