/*11. Write a program that would print the information (name, year of joining, salary,
address) of three employees by creating a class named 'Employee'. The output should
be as follows:
Name     Year of Joining      Address
Shamsu   1992              Chittagong
Soleman  1994             Chittagong
Kalam    1990               Dhaka*/
#include<bits/stdc++.h>
using namespace std;
class Employee
{
    public:
        string name="Shamsu";
        string name2="Soleman";
        string name3="Kalam";
        int y=1992,y1=1994,y2=1990;
        string add="Chittagong";
        string add1="Chittagong";
        string add2="Dhaka";
    info()
    {
       cout<<"Name \t"<<"Year of joining\t"<<"Address"<<endl;
       cout<<name<<"\t"<<y<<"\t\t"<<add<<endl;
       cout<<name2<<"\t"<<y1<<"\t\t"<<add1<<endl;
       cout<<name3<<"\t"<<y2<<"\t\t"<<add2<<endl;
    }
};
int main()
{
  Employee data;
  data.info();
}
