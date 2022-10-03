#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//declaration of function that means here function prototypes
void f1(int a);//declaration tie semicolon
void f1(int a,int b);//declaration tie semicolon
void f1(int a,int b,int c);
int main()
{
    f1(10);
    f1(10,20);//function overloading hbe aikane
    f1(10,20,30);

    return 0;
}
void f1(int a)
{
    cout<<"In f1(int a) diso 1 ta parameter \n";
}
void f1(int a,int b)
{
    cout<<"In f1(int a,int b) diso 2 ta parameter \n";
}
void f1(int a,int b,int c)
{
    cout<<"In f1(int a,int b,int c) diso 3 ta parameter\n";
}
