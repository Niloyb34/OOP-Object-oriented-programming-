#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//class B;//Ata use na korle tkon error hisebe undeclared typer kicu dekabe
class A
{
private:
    int num1;
    string name;
public:
    void getValueA();//getValue name akta function make korlam only declare tie ; use korlam
    friend void Add(A,B);//common friend function
};
//class er bahire function ke access ba use korte hole tkon return type class name::function name()
void A::getValueA()
{
    cout<<"Enter you name:";
    getline(cin,name);
    cout<<"Enter your number:";
    cin>>num1;
    cin.ignore();
}
class B
{
private:
    string name1;
    int num2;
public:
    void getValueB();//declare korlam getvalueB name
    friend void Add(A,B);//common friend function
};
void B::getValueB()
{
    cout<<"Enter your name:";
    getline(cin,name1);
    cout<<"Enter your number:";
    cin>>num2;
}
void Add(A obj1,B obj2)
{
   cout<<"The result is:"<<obj1.num1+obj2.num2;
}
int main()
{
    A obj1;//A is a class name and obj1 is a object name and it is a object of class A
    B obj2;//B is a class name and obj2 is a object
    obj1.getValueA();
    obj2.getValueB();
    Add(obj1 , obj2);
}
