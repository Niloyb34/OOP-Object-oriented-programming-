#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void date(char*date);//Date as a string jehoto declare tie semicolon
void date(int day,char*name,int year);//function prototype korci aigula
int main()
{
    date("8th september,2022");
    date(8,"september",2022);
    return 0;
}
//function define korar pala
//date as a string
void date(char*date)//function overloading hoice jehoto akoi name er duita function kintu parameter different
{
    cout<<"Date: "<<date<<"\n";
}
//Date as integers
void date(int day,char*name,int year)
{
   cout<<"Date: "<<day<<"th "<<name<<","<<year<<"\n";
}


