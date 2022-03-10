#include <iostream>
using namespace std;
int main()
{
    int k;
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        int n,count = 0;
        cin>>n;
        while (n > 0)
        {
            count += n%2;
            n /= 2;
        }
        cout<<count<<endl;
    }
    
    return 0;
}