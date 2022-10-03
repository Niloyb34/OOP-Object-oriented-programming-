/*Assign and print the roll number, phone number and
address of two students having names "Shofi" and
"Jamshed" respectively by creating two objects of
the class 'Student'.*/
#include<bits/stdc++.h>
///#include<iostream>
using namespace std;
class Student
{
    public:
string name1="Shofi";
string name2="Jamshed";
char add1[50]="Agrabad";
char add2[50]="Navy gate";
char num1[50]="01712500556";
char num2[40]="01956321459";
};
int main()
{
   Student obj1,obj2;
   cout<<setw(20);
   cout<<obj1.name1<<" "<<" address is "<<obj1.add1<<" and number is "<<obj1.num1<<endl;
    cout<<setw(20);
   cout<<obj2.name2<<" "<<" address is "<<obj2.add2<<" and number is "<<obj2.num2<<endl;
}

