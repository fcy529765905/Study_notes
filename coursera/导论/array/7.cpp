#include<iostream>
#include<iomanip>
using namespace std;  //中位数
int main(){
    int num[15000] , n , i;

    while(cin>>n)
    if(n != 0)
    {
        for (i = 0; i < n; i++)
        {   
        cin>>num[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int  j = 1; j < n-i; j++)
            {
                if (num[j-1] > num[j])
                {
                    int temp;
                    temp = num[j-1];
                    num[j-1] = num[j];
                    num[j] = temp;
                }
            }
        }
        if (n%2 == 1)
        {
            cout<<num[n/2]<<endl;
        }
        if (n%2 == 0)
        {
            cout<<(num[n/2]+num[n/2-1])/2<<endl;
        }
    }
    else break;
    
return 0;
}