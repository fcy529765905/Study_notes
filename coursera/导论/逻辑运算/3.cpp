#include<iostream>
using namespace std;//骑车与走路
int main(){
    int n,walktime,biketime;
    cin>>n;
    int dis[n];
    for (int i = 0; i < n; i++)
    {
        cin>>dis[i];
    }
    for (int i = 0; i < n; i++)
    {
        walktime = dis[i]/1.2;
        biketime = dis[i]/3+50;
        if (walktime < biketime)
        {
            cout<<"Walk"<<endl;
        }
        else if (walktime > biketime)
        {
            cout<<"Bike"<<endl;
        }
        else cout<<"All"<<endl;
    }
    
    return 0;
}