
#include <iostream>
#include <string>
using namespace std;
void demo()
{
///static data type use korar fole count tar ager value ta lose korbe na mane everytime je change hbe oi change mantake save kore rakbe

     int count = 0;///static use na kora obostie
    cout << count << " ";
    count++;///1,2,3,4,5
}
int main()
{
    for (int i=0; i<5; i++)
    {
        demo();///0,1,2
    }
    return 0;
}
