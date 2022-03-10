#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    a = n/100;//1
    cout<<a<<endl;
    a = (n-a*100)/10;//2
    cout<<a<<endl;
    b = n/100;//1
    a = n-a*10-b*100;//3
    cout<<a<<endl;
}