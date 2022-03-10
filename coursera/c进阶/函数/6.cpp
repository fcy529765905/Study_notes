#include<iostream>
using namespace std;//流感传染
int main(){
int n,m;
cin>>n;
    char peo[n][n];
    for (int i = 0; i < n; i++)//循环读数据
    {
        for (int j = 0; j < n; j++)
        {
            cin>>peo[i][j];                  
        }
        
    }

    cin>>m;
    int index_x[n] ,index_y[n];//记录当前 感染人位置
    
    for (int daypass = 0; daypass <= m; daypass++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (peo[i][j] == '@')
                {
                    int b = 0; 
                    index_x[b] = i ; index_y[b] = j;
                    b++;
                }
                
            }
        
        }   
        for (int a = 0; a < n; a++)
        {
            if (index_x[a] != 0 )//修改记录位置周边人的感染情况
            {
                if (peo[index_x[a]-1][index_y[a]]!='#') peo[index_x[a]-1][index_y[a]]='@';
                if (peo[index_x[a]+1][index_y[a]]!='#') peo[index_x[a]+1][index_y[a]]='@';
                if (peo[index_x[a]][index_y[a]-1]!='#') peo[index_x[a]][index_y[a]-1]='@';
                if (peo[index_x[a]][index_y[a]+1]!='#') peo[index_x[a]][index_y[a]+1]='@';
            }

        } 
    }
    int count = 0;//记录总数 输出
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (peo[i][j] == '@')
            {
                count += 1;
            }
            
        }
        
    }
    cout<<count;
    return 0;
}