#include<iostream>
using namespace std ;//角谷猜想 

int cal(int n){
    if (n == 1)
    {
        cout<<"End"<<endl;
    }
    else if (n %2 == 0)
    {
        cout<<n<<"/2="<<n/2<<endl;
        cal(n/2);
    }
    else
    {
        cout<<n<<"*3+1="<<n*3+1<<endl;
        cal(n*3+1);
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    cal(n);
    return 0;

}
