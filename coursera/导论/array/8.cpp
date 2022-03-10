#include<iostream>
using namespace std;
int main(){
    int l,m,a,b,count;
    cin>>l>>m;
    int tree[10001]={0};
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;
        for (int j = 0; j <= l; j++)
        {   
            if (j>=a && j<=b)
            {
                tree[j] = 1;
            }
            else continue;
        }
    }
    for (int p = 0; p <= l; p++)
    {
        if (tree[p] == 0)
        {
            count++;
        }
    }
cout<<count;

}