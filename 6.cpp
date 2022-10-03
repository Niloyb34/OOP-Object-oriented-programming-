/*Write a program to print the area of a rectangle by creating a class named
'Area' having two functions. First function named as 'setDim' takes
 the length and breadth of the rectangle as parameters and the
 second function named as 'getArea' returns the area of
the rectangle. Length and breadth of the rectangle are entered
through keyboard.*/
#include<iostream>
using namespace std;
int main()
{
	Area a;
	a.Setdim();
	cout << "The area of a rectangle is " << a.getArea();
}


class Area
{
	float length;
	float width;
public:
	Area(){}
	void Setdim()
	{
		cout << "Please, enter a length: ";
		cin >> length;
		cout << "Please, enter a width: ";
		cin >> width;
	}
	float getArea()
	{
		return length*width;
	}
};
