#include <iostream>
using namespace std;
int main(){
    //读入数据
    int k,n1[100],n2[100],id[100];
    double rate[100];
    cin>>k;
    for (int i = 0; i < k; i++)//读入数据计算增长率
    {
        cin>>id[i]>>n1[i]>>n2[i];
        rate[i]=n2[i]/n1[i];
    }
    for (int i = 0; i < k; i++)//排序id和rate
    {
        for (int j = 0; j < k-i-1; j++)
        {
            if (rate[j]<rate[j+1])
            {
                double ratetemp = rate[j];
                rate[j] = rate[j+1];
                rate[j+1] = ratetemp;
                int idtemp = id[j];
                id[j] = id[j+1];
                id[j+1] = idtemp;
            }
            
        }
        
    }
    double maxdiff = 0;//找出最大rate差值和id
    int maxid = 0;
    for (int i = 1; i < k; i++)
    {

        if (rate[i-1]-rate[i] > maxdiff)
        {
            maxdiff = rate[i-1]-rate[i];
            maxid = i-1;
        }
        
    }
    cout<<maxid+1<<endl;//a类的输出
    for (int i = maxid; i >= 0 ; i--)
    {
        cout<<id[i]<<endl;
    }
    cout<<k-maxid-1<<endl;//b类输出
    for (int i = k; i > maxid+1 ; i--)
    {
        cout<<id[i-1]<<endl;
    }
    return 0;
}