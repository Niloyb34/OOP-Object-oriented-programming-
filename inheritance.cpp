#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Animal//class is a keyword and Animal is a base/parent/super
{
 public:
     int leg=4;
};//main class er bahire tou arekta class make korbo jeta hbe inherited class
class Dog:public Animal
{
    //class is a keyword and Dog is a inherited class name:public base/parent/main/super
   //inheritance class
   //class keyword Inheritance class name:public Animal
   public:
       int tail=1;
};
main()
{
    Dog d;//Dog is the inheritate class and d is the object
    cout<<"Leg are:"<<d.leg<<endl;
    cout<<"Tail are "<<d.tail;
}

