#include<iostream>
using namespace std;
int main(){
    double water,pi=3.14159;
    int h,r,couple,drink=20;
    cin>>h>>r;
    water = pi*r*r*h;
    couple = 20000/water;
    couple = int(couple);
    cout<<couple+1<<endl;
    return 0;
}