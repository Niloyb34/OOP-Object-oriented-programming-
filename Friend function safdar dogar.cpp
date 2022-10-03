/*Friend function ke mulotu class er bahire declare kora hoi tie kintu atar maddome class er private and protected member gulake access
kora jie*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Test//class is a keyword and Test is a class name creating a class name test
{
private:
    int num;
    string name="Niloy barua";
public://je function er name class er name er sathe mil thakba tie constructor
    Test():num(0)//making a constructor name Test() and initializes its value as 0
    {
       cout<<"Constructor is called......."<<endl;
    }
    //kono class er object make korar sathe sathe constructor called hoi automatically
///friend function take amra publically use korbo mane public keyword er vitore use korbo
 friend void show(Test obj1);//aikane friend keyword use na korle error dekabe

 ///using friend function
///friend keyword return type function name(class name object)
///je class er private member ke access korte cacci take () er vitore lekbo object er sathe
};
void show(Test obj1)//jehuto function define kortesi tie return type function name()
{
    obj1.num=10;//aikane akon arekta class er maddome jdi num take access korte cie tahole friend function use korbo
 ///cout<<"I am simple function"<<endl;
 cout<<"The value of num:"<<obj1.num<<endl;
 cout<<"The name is:"<<obj1.name;
}
int main()
{
    Test obj1;//Test is a class name and obj1 is the object of class
    show(obj1);

}

