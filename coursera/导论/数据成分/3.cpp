#include<iostream>
#include<iomanip>
using namespace std; //年龄与疾病
int main(){
    int n,a[100];
    float count1 = 0,count2 = 0,count3 = 0,count4 = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if (a[i]>=1 && a[i]<=18)
        {
            count1 += 1;
        }
        if (a[i]>=19 && a[i]<=35)
        {
            count2 += 1;
        }
        if (a[i]>=36 && a[i]<=60)
        {
            count3 += 1;
        }
        if (a[i]>60)
        {
            count4 += 1;
        }
    }
    count1 = count1/n*100;
    count2 = count2/n*100;
    count3 = count3/n*100;
    count4 = count4/n*100;
    cout<<"1-18: "<<fixed<<setprecision(2)<<count1<<'%'<<endl;
    cout<<"19-35: "<<fixed<<setprecision(2)<<count2<<'%'<<endl;
    cout<<"36-60: "<<fixed<<setprecision(2)<<count3<<'%'<<endl;
    cout<<"60-: "<<fixed<<setprecision(2)<<count4<<'%'<<endl;
    return 0 ;
}
