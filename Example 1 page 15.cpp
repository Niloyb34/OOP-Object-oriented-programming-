#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class myclass//class is a keyword and myclass is a class name
{
    int a;//by default private hbe
public://public is a keyword
    void set_a(int num);//declare er jnno semicolon diba
    //aikane only function take amra declare korci tie ;dite hbe
    //function declare er smoy return type function name(parameters)
    int get_a();//declare only tie ; disi
};
void myclass::set_a(int num)//class er bahoire function er body making er smoy
{//amara class er bahire function er body ke define korci tie scope resolution operator use korci
    //return type class name::
    a=num;
}
int myclass::get_a()
{//class er bahire function define er jnno return type class name::function name dibo jehuto define tie no semicolon
    //define er jnno no semicolon only declare er jnno semicolon
    return a;
}
int main()
{
    myclass ob1,ob2,ob3;//myclass er duita object akti ob1 and ob2
    ob1.set_a(10);//ob1.set_a(10) mane amra ob1 dot operator er maddome set_a(10) ba seta function ke call krci
    ob2.set_a(99);
    ob3.set_a(100);

    cout<<ob1.get_a()<<"\n";
    cout<<ob2.get_a()<<"\n";
    cout<<ob3.get_a()<<"\n";
}
