#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Parent
{
public:
    char name[50]="Niloy Barua";
};
class child:public Parent///class keyword child class:public Parent class name
{
public:
    char name1[40]="Dhiman Barua";

};
int main()
{
    child obj1;///child class name child class object
    cout<<obj1.name<<endl;//child er object dia parent class public member gulake access kora possible
    cout<<obj1.name1<<endl;

}
