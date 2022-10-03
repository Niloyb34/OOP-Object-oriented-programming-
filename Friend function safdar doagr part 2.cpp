#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class B;//arokom class declare korar smoy ; use korte hbe
//4 number line er kajtake bola hoi forward declaration
class A
{
private:
    int num1;
public:
    friend void getValue(A &obj1,B &obj2);
    friend void Add(A &obj1,B &obj2);
    friend void sub(A &obj1,B &obj2);
};
class B
{
private:
    int num2;
public:
    friend void getValue(A &obj1,B &obj2);
    friend void Add(A &obj1,B &obj2);
    friend void sub(A &obj1,B &obj2);
};
void getValue(A &obj1,B &obj2)
{
    cout<<"Enter First number:";
    cin>>obj1.num1;
    cout<<"Enter 2nd number:";
    cin>>obj2.num2;
}
void Add(A &obj1,B &obj2)
{
    int res=obj1.num1+obj2.num2;
    cout<<"The result is:"<<res<<endl;
}
void sub(A &obj1,B &obj2)
{
    cout<<"The substraction is:"<<((obj1.num1)-(obj2.num2))<<endl;
}
int main()
{
    A obj1;//A class er object holo obj1
    B obj2;//B class er object holo obj2
    getValue(obj1,obj2);//calling getValue function and passing
    Add(obj1,obj2);//arokom main function teke access korte ciele tkon
    sub(obj1,obj2);
}
