/*Write a program to print the area and perimeter of a triangle
having sides of 3, 4 and 5 units by creating a class named
'Triangle' with the constructor having the three sides as
its parameters.*/
#include <iostream>
#include<math.h>
using namespace std;
class Triangle {
private:
	double a, b, c,x,y,z;
public:
	Triangle(double a,double b,double c){
		x=a;
		y=b;
		z=c;
	}
	double area(){
		double s = (x+y+z)/2;
		return sqrt(s*(s-x)*(s-y)*(s-z));
	}
	double perimeter(){
		return x+y+z;
	}
};
//The start point of the program
int main(){
	double a, b, c;
	cout<<"Ente a: ";
	cin>>a;
	cout<<"Ente b: ";
	cin>>b;
	cout<<"Ente c: ";
	cin>>c;
	Triangle triangle(a,b,c);
	cout<<"Area: "<<triangle.area()<<"\n";
	cout<<"Perimeter: "<<triangle.perimeter()<<"\n";
	system("pause");
	return 0;
}
