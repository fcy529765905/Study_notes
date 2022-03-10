#include<iostream>
using namespace std;//成绩判断
int main(){
    int n,m;
    cin>>n;
    if (n<60)
        {
            m = 7;
            cout<<m<<endl;
        }
    if (n>=60 && n<70)
        {
            m = 6;
            cout<<m<<endl;
        }
    if (n>=70 && n<80)
        {
            m = 5;
            cout<<m<<endl;
        }
    if (n>=80 && n<85)
        {
            m = 4;
            cout<<m<<endl;
        }
    if (n>=85 && n<90)
        {
            m = 3;
            cout<<m<<endl;
        }
    if (n>=90 && n<95)
        {
            m = 2;
            cout<<m<<endl;
        }
    if (n>=95 && n<=100)
        {
            m = 1;
            cout<<m<<endl;
        }
}
