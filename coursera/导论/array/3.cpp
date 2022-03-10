#include<iostream>
using namespace std;//最长单词2
int main(){
    char s[500];
    cin.getline(s,500,'.');
    int n = 0, max = 0,p = 0 ;       
    //n记录每个单词长度,max记录最长单词长度，p记录最长单词结束位置
    for (int i = 0; s[i] != '\0';i++)
    {
        if (s[i] == ' ')
        {
            n = 0;
        }
        else if ((s[i] >='A' && s[i] <='Z' )||( s[i] >= 'a' && s[i] <='z'))
        {
            n++;
        }
        if (n > max)
        {
            max = n;
            p = i;
        }
    }
    for (int i = p-max+1; i <= p ; i++)
    {
        cout<<s[i];
    }
return 0 ;
}
