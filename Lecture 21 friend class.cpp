/*Friend class
 A class can also be declared as friend of another class*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class A
{
private:
    int num1;
    string a;
protected:
    int num2;
    string b;
public:
    friend class B;
};
class B
{
public:
    void input(A obj1)
    {
        cout<<"Enter first name:";
        getline(cin,obj1.a);
        cout<<"Enter second name:";
        getline(cin,obj1.b);
        cout<<"Enter 1st number:";
        cin>>obj1.num1;
        cout<<"Enter 2nd number:";
        cin>>obj1.num2;
        sum(obj1);
    }
    void sum(A obj1)
    {
        int res;
        res=obj1.num1+obj1.num2;
        cout<<"The sum is:"<<res;
    }
};
int main()
{
    A obj1;
    B obj2;
    obj2.input(obj1);
}
