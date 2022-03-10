#include<iostream>
using namespace std;//找和为K的两个元素
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]+a[j] == k)
            {cout<<"yes";goto end;}
        }
    }
    cout<<"no";
    end:
    return 0;
}
