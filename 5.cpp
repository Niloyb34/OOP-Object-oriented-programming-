/*Write a program to print the area of two rectangles having sides (4, 5)
and (5, 8) respectively by creating a class named 'Rectangle'
with a function named 'Area' which returns the area. Length and
breadth are passed as parameters to its constructor.*/
#include <iostream>
using namespace std;
class Rect
{
private:
    int a, b,l,w;
public:
    Rect(int a, int b)
    {
        l = a;
        w= b;
    }
    int area()
    {
        return l * w;
    }
};
int main()
{
    Rect obj = Rect(4, 5);
    Rect obj1 = Rect(5, 8);
    cout <<"Area of 1st triangle ="<< obj.area() << "\n";
    cout <<"Area of 1st triangle ="<<obj1.area() <<"\n";

    return 0;
}
