#include<iostream>
using namespace std;//字母个数
int main(){
    char s[80] ={1} ;
    cin.getline(s,80);
    int counta = 0,counte = 0 ,counti = 0,counto = 0,countu = 0;
    for (int i = 0; i < 80; i++)
    {   
        switch (s[i])
        {
        case 'a': counta++ ; break;
        case 'e': counte++ ; break;
        case 'i': counti++ ; break;
        case 'o': counto++ ; break;
        case 'u': countu++ ; break;
        default:break;
        }
    }
    cout<<counta<<' '<<counte<<' '<<counti<<' '<<counto<<' '<<countu<<' ';
    return 0 ;  

}