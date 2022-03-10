#include<iostream>
using namespace std;

int main()
{
    //输入n和数组
    int n,a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //排序
    for (int i = 0; i < n; i++)
    {
        for (int  j = 1; j < n-i; j++)
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
    //输出结果
    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<endl;
    }
    
}