#include<iostream>
using namespace std;//数字求和
int main(){
    int a,b[5],sum = 0;
    cin>>a;
    for (int i = 0; i < 5; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (b[i] < a)
        {
            sum += b[i];
        }
    }
    cout<<sum<<endl;
    
    return 0;
}