#include<iostream>
#include<iomanip>
using namespace std;//Tomorrow never knows？
int year_run(int a);
int main(){
int year,month,day;
char r;
cin>>year>>r>>month>>r>>day;
if (year_run(year))
{
    if (day==31)
    {
        if (month == 12)
        {
            day = 1;
            month =1;
            year++;
        }
       else {
       day=1;
       month++;}
    }
    else if (day==30)
    {
        if (month==4||month==6||month==9||month==11)
        {
            month++;
            day = 1;
        }  
    }
    else if (day==29){
        if (month == 2)
        {
            month++;
            day=1;
        }
        
    }
    else{
        day++;
    }
}
else{
    if (day==31)
    {
        if (month == 12)
        {
            day = 1;
            month =1;
            year++;
        }
       else {
       day=1;
       month++;}
    }
    else if (day==30)
    {
        if (month==4||month==6||month==9||month==11)
        {
            month++;
            day = 1;
        }  
    }
    else if (day==28){
        if (month == 2)
        {
            month++;
            day=1;
        }
        
    }
    else{
        day++;
    }

}
cout<<year<<'-'<<setfill('0')<<setw(2)<<month<<'-'<<setfill('0')<<setw(2)<<day;
}
int year_run(int a)
{
    if (a%4 == 0 && a%100 != 0 || a%400 == 0)
    {
        return 1;
    }
    else return 0;
}