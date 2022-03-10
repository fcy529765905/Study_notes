#include<iostream>
using namespace std;//细菌实验分组
int main(){
    int n;
    cin>>n;
    int id[n];
    float st,ed,rate[n];
    for (int i = 0; i < n; i++)
    {
        cin>>id[i]>>st>>ed;
        rate[i] = ed/st;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (rate[j]>rate[j+1])
            {
                float temp = rate[j];
                rate[j] = rate[j+1];
                rate[j+1] = temp;
                int temp_id = id[j];
                id[j] = id[j+1];
                id[j+1] = temp_id;
            }
            
        }}
        float maxdiff = 0;
        int maxdiffindex = 0;
        for (int i = 0; i < n-1; i++)
        {
            double diff = rate[i+1] - rate[i];
            if (diff > maxdiff)
            {
                maxdiff = diff;
                maxdiffindex = i;
            }
            
        }

        cout<<n-maxdiffindex-1<<endl; 
        for (int i=maxdiffindex+1 ; i < n; i++)
        {
            cout<<id[i]<<endl;
        }
        cout<<maxdiffindex+1<<endl;
        for ( int i = 0; i <= maxdiffindex; i++)
        {
            cout<<id[i]<<endl;
        }

    return 0;
}