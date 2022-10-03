#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Test//taking a class named Test and class is a keyword
{
private:
    string name="Niloy Barua";
    string id="C221023";
///friend keyword return type function name(class name object)
///je class er private member ke access er name () er vitore
///friend keyword return type function name(class name object oi class er)
///friend function ke public keyword er vitore use korte hoi je class er name () er vitore oi class er vitore publically
    public:
    friend void show(Test obj1);//aikane must be semicolon dite hbe karon declare
    void show1();//only declare tie ; dite hbe
//always parameter hisebe class er name and object er name...
};
//define function outside the class define er jnno no semicolon but declare er jnno semicolon dite hoi
void Test::show1()
{
cout<<"Student name is:"<<name<<endl;
cout<<"Student id is:"<<id<<endl;
}
void show(Test obj1)//class er bahirer function show dia amra Test class er private member gulake access korbo
{
    cout<<"Student name is:"<<obj1.name<<endl;
    cout<<"Student id is:"<<obj1.id<<endl;
}
//class take bahire define korte hole kon akta function ke tkon return type class name::function name
//jehoto define tie no semicolon kintu atake declare korte hbe class er vitore publicallly tkon semicolon dite hbe;
int main()
{
    Test obj1;//Test is a class name and obj1 is the object of that class
    show(obj1);//show function ke call korlam and parameter hisebe obj1 ke pass korlam
    obj1.show1();
}
