/*Create a function called sroot() that returns the square root of its argument. Overloadsroot() three ways: have it return the square
root of an integer, a long integer, and a double.To actually compute the square root, you can use the standard library function sqrt()*/
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>///
using namespace std;
//Overload sroot() for integers,a long integer and a double
//function prototype part
//return type function name(data type of arguments parameter)
int sroot(int i);//return type function name(data type parameter)
long sroot(long i);//return type function name(data type parameter)
double sroot(double i);//return type function name(data type parameter)
int main()
{
    cout<<setw(18)<<"Square of 90.34 is"<<sroot(90.34)<<"\n";
    cout<<setw(18)<<"Square of 90.36 is"<<sroot(90.36)<<"\n";
    cout<<setw(18)<<"Square of 90.56 is"<<sroot(90.56)<<"\n\n\n";
    cout<<setw(18)<<"Square of 80 is"<<sroot(80)<<"\n";
    cout<<setw(18)<<"Square of 50 is"<<sroot(50l)<<"\n";///l dara bujabo je ata long integer nibo amra amon bujabe fole function
    ///long parameter wala ta call hbe
    return 0;}
///define function body
///return square root of integer
double sroot(double i)///////////////////////////////////  1 no line
{   cout<<" Computing double root: ";
    return sqrt(i);
    cout<<"\n";
}
long sroot(long i)
{   cout<<" Computing long integer root: ";
    return sqrt(i);
    cout<<"\n";
}
int sroot(int i)
{   cout<<" Computing integer root: ";
    return sqrt(i);
    cout<<"\n";
}

