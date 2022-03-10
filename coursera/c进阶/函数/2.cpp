#include<iostream>
using namespace std;//四大湖  逻辑推理运算
int main(){
    int b,d,t,h;
    for (b = 1; b < 5; b++)
    {
            for (d = 1; d < 5; d++)
    {
                for (t = 1; t < 5; t++)
    {
                    for (h = 1; h < 5; h++)
    {
        if (b+d+t+h == 10 && b*d*t*h == 24)
        {
            if ((d==1)+(h==4)+(b==3) == 1 && (h==1)+(d==4)+(b==2)+(t==3) == 1 && (h==4)+(d==3)==1 && (b==1)+(t==4)+(h==2)+(d==3) ==1 )
            {
                cout<<b<<endl;
                cout<<d<<endl;
                cout<<t<<endl;
                cout<<h<<endl;
            }
            
        }
        
    }
    }
    }
    }
    return 0;
}