#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class myclass
{
private:
    int a;//a ta private kora tie class er bahirer karo dara directly access kora possible noi kintu aikane indirectly access kora hoice
public://tie aikane kono error show korbe na
    //int a;
    void set_a(int num);//only declare tie no semicolon dibo

    int get_a();//only declare tie semicolon dibo

};
void myclass::set_a(int num)
{
    a=num;
}
int myclass::get_a()
{
    return a;
}

int main()
{
    myclass ob1,ob2;
    ob1.set_a(30);//ob1 er moddome . operator dia a er modde 10 enter kortesi
    ob2.set_a(40);//ob2 dia . operator er maddome 20 enter korsi
    //class er bahirer non member dara access possible na
    cout<<ob1.get_a()<<"\n";
    cout<<ob2.get_a()<<"\n";
    return 0;

}
