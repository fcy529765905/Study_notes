#include<iostream>
using namespace std;
int main(){
    int n,x,y,left;
    cin>>n>>x>>y;
    if (y>=n*x)
    {
        left = 0;
        cout<<left<<endl;
    }
    else if (y%x != 0 )
    {
        left = y/x;
        left = n-left-1;
        cout<<left<<endl;
    }
    else if (y%x == 0 )
    {
        left = y/x;
        left = n-left;
        cout<<left<<endl;
    }
    
    return 0;
}