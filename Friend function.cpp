///USing friend class anisul islam
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class A
{
private:
    int id1=101,id2=20,id3=30;
    string name="Niloy barua";
   //private er odine taka mane only ei class er oidine amra setake access korte parbo otherwise onno class teke parbo na
//class A er odine id and name gula ase...
public:
    friend class B;//friend keyword,class keyword,Class name

};
//Suppose B namer akta class make korlam tkon kintu ata dia amra directly A class er private member gulake access korte parbo na
//tie access korte hle B teke A er member gulake amra friend class use korbo
class B//friend class B take aikane make korlam
{
public:
    void display(A ob1)//A class er akta object make kortesi tar maddome amra access korbo private variable gulake
 //A is a class name ob is a object
{
  cout<<ob1.id1<<endl<<ob1.id2<<endl<<ob1.id3<<endl;
  cout<<ob1.name<<endl;
/*orthat jdi amader ke bahirer akta class teke arekti class er vitorer private member gulake access korte hoi tahole jar member
 gulake access korte cacci jar member gulake access korte cacci se class er vitore public vabe akta friend class make korbo erpor
 friend class er vitore A class er object make korbo and se object dia amra A class er private member gulake access korbo B friend class
 er maddome */
}
};
int main()
{
    A ob1;//A class dilam tar ob1 name akta object nilam
    B ob2;//B class er akta object nilam ob2 name akta
    ob2.display(ob1);

}
