
#include<iostream>
using namespace std;
class Demo
{
public:
    int i;
    Demo(int i)
    {
        this->i = i;
    }
};
main()
{
    Demo m(5);
    cout<<m.i;
}
