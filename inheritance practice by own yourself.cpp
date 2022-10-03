#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class smartphone//class is a keyword and smartphone is the class name
{
private:
    int pass=12365;
public:
    char Name[50];
    int IME;
    char Owner[50];
    void ninja_p()
    {
        cout<<"NInja"<<endl;
    }
};
///inherited class
class redmi:public smartphone//class is a keyword and redmi is a class name
{
    ///IME and Name asob member gula smartphone namok class er onso tie redmi namok sub class ke dia amra er public member gulake access
///korte parbo..
public:
    char model[25];
    char color[50];
    void name()
    {
        cout<<"Enter name:";
        cin.getline(Name,50);///cin.getline(array name,array size)
        cout<<"Enter IME:";
        cin>>IME;
        cout<<"Enter model:";
        fflush(stdin);
        cin.getline(model,25);
        cout<<"Enter color:";
        cin.getline(color,50);
    } void display()
    {
        cout<<Name<<"\t"<<IME<<"\t"<<model<<"\t"<<color<<endl;
        cin.getline(Owner,50);
        cout<<"Owner name is:"<<Owner<<endl;
        ninja_p();
        cout<<pass;//aikane password ta chilo main/base/Super/Parent class er private tie inherit possible na tie error dekabe
    }
};
int main()
{
    redmi obj1;//redmi inherited class tar object obj1
    obj1.name();
    obj1.display();
}
