#include <iostream>
using namespace std;
int main()
{
    //输入
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    //排序
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 10-i; j++)
        {
            if (a[j-1] > a[j])
            {
                int temp;
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    //分奇偶数输出
    for (int i = 0; i < 10; i++)
    {
        if (a[i]%2 == 1)
        {
            cout<<a[i]<<' ';
        }
        
    }
        for (int i = 0; i < 10; i++)
    {
        if (a[i]%2 == 0)
        {
            cout<<a[i]<<' ';
        }
        
    }
}