#include<iostream>
#include<cmath>
using namespace std;//买房子
int main(){
    double N,K;
    while (cin>>N>>K)
    {
        for (int i = 1; i <= 21; i++)
        {
            if( N*i >= 200*pow(1+K/100,i-1) )
            {cout<<i<<endl;break;}
            if (i>20)
            {cout<<"Impossible"<<endl;}
            
        }
    }
    return 0;
}
