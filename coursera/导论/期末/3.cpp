#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;//坐标间的最大距离
int main(){
    int n;
    cin>>n;
    double a[n][2],dis = 0 ;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {   
            if (pow( (a[i][0]-a[j][0]) ,2) + pow( (a[i][1]-a[j][1]) ,2) > dis)
            dis = pow( (a[i][0]-a[j][0]) ,2) + pow( (a[i][1]-a[j][1]) ,2) ;
        }
        
    }
    cout<<fixed<<setprecision(4)<<sqrt(dis)<<endl;
}