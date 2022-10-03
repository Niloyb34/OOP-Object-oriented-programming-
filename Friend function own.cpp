#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class A///creating a class name A
{
private:
    int id=101,id1=102,id2=103;
    char Name[50]="Niloy";
public:///using friend class
///friend class make korte hole friend keyword use korte hbe,erpor class keyword ta use korte hbe and then class name use korbo
    friend class B;///friend keyword class keyword Class name
};
///akon directly class B teke kintu class A er private member gulake access korte hole tkon amra moluto B ke A er friend class hisebe
///use korbo...
class B///friend class B make korlam
{
public:
    void display(A ob1)//A class likbo and tar parameter likbo ob1
    {
        cout<<ob1.id<<endl<<ob1.id1<<endl<<ob1.id2<<endl;
        cout<<ob1.Name<<endl;
    }

};
int main()
{
    A ob1;//A main class And B tar friend class and A class  er akta object nilam ob1 name
    B ob2;//B holo friend class and B class er akta object nilam ob2 name
///Akon B class er dot operator er help nia tar display function ke call korbo and tathe A class er object ke parameter hisebe pass krbo
    ob2.display(ob1);//ob2.diplay(ob1)...
}


