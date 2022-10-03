#include<bits/stdc++.h>
#include<iostream>
using namespace std;
                                                 ///Function declaration
void date(char*date);///declare tie ; use korbo and main funtion er niche amra function ke likbo tie prototype dilam
                                                 ///date hocce function name
                                                   ///date take akta string hisebe nibo amra
void date(int month,int day,int year);///aikane date as number nilam
int main()
{
    date("8/23/99");//string pass korlam
    date(8,23,99);//tinta number pass korlam
    return 0;
}
//Date as string
void date(char *date)
{
    cout<<"Date: "<<date<<"\n";
}
//Date as integers
void date(int month,int day,int year)
{
    cout<<"Date: "<<month<<"/";
    cout<<day<<"/"<<year<<"\n";
}



