#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;//字符串插入
int main(){
    char str[20] = {0},substr[3];
    int num = 0,st = 0;
    while (cin.get(str,10,' ').get() , cin.get(substr,4).get())
    {   
        for (int i = 0; i < 10; i++)
        {
        if (str[i]>num){
            num = str[i];
            st = i;}
        }
        num = strlen(str);
        for (int i = st; i <= num; i++)
        {
            str[i+4] = str[i+1];
            str[i+1] = substr[i-st];
        }
        num = strlen(str);
        for (int i = 0; i < num; i++)
        {   
            cout<<str[i];
        }
        
    cout<<endl;
    }
return 0;
}