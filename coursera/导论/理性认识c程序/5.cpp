#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a[6],maxji = 0,minou = 1000;
    for(int i = 0; i < 6; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < 6; i++)
    {
        if (a[i]%2==0&&a[i]<minou)
        {
            minou = a[i];
        }
        if (a[i]%2==1&&a[i]>maxji)
        {
            maxji = a[i];
        }
    }
    cout<<abs(maxji-minou)<<endl;
    return 0 ;
}