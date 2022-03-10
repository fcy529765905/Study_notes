#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int a , n;
float sum[7] = {0};
for (int i = 0; i < 3; i++)
{
    cin>>a>>n;
    for (int j = 0; j < n; j++)
    {
        char b;float c;
        cin>>b>>c;
        sum[a] += c;
        if (b=='A')
        {
            sum[4] += c;
        }
        else if (b=='B')
        {
            sum[5] += c;
        }
        else if (b=='C')
        {
            sum[6] += c;
        }
        
    }
    
}
    cout<<fixed<<setprecision(2)<<"1 "<<sum[1]<<endl;
    cout<<fixed<<setprecision(2)<<"2 "<<sum[2]<<endl;
    cout<<fixed<<setprecision(2)<<"3 "<<sum[3]<<endl;
    cout<<fixed<<setprecision(2)<<"A "<<sum[4]<<endl;
    cout<<fixed<<setprecision(2)<<"B "<<sum[5]<<endl;
    cout<<fixed<<setprecision(2)<<"C "<<sum[6]<<endl;
    return 0;

}