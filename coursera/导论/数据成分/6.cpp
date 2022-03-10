//人民币支付
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
        if (a/100 != 0 )//100
    {
        cout<<a/100<<endl;
    }
        else cout<<0<<endl;
        if (a%100/50 != 0 )//50
    {
        cout<<a%100/50<<endl;
    }   
        else cout<<0<<endl;a = a%100%50;
        if (a/20 != 0 )//20
    {
        cout<<a/20<<endl;
    }
        else cout<<0<<endl;a = a%20;
        if (a/10 != 0 )//10
    {
        cout<<a/10<<endl;
    }
        else cout<<0<<endl;a=a%10;
        if (a/5 != 0 )//5
    {
        cout<<a/5<<endl;
    }
        else cout<<0<<endl;a=a%5;
        if (a/1 != 0 )//1
    {
        cout<<a/1<<endl;
    }
        else cout<<0<<endl;
}