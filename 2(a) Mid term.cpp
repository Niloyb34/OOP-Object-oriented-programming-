#include <iostream>
using namespace std;
class Line//creating a class named Line
{
public:
    void setLength( double len );
    double getLength( void );
    string name="Ninja Niloy";
    Line();
    ~Line();
private:
    double length;///ja kicui kori na keno destructor er je function ta ase ta always last e kaj korbe and tar cout er print ta sbar
    ///last e dekabe...............
};
Line::Line(void)///No return type class name::function name()
{
    cout << "Object created" << endl;
}
Line::~Line(void)///no return type class name::~function name()
{
    cout << "Object is being deleted" << endl;
}
void Line::setLength( double len )///class er bahire body define er jnno
///return type class name::function name()
{
    length = len;
}
double Line::getLength( void )
///return type class name::function name()
{
    return length;
}
int main()
{
    Line line;///Line is a class and line is object ata make korar sathe sathe constructor call hbe automatically
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() <<endl;
    cout<<"THe name:"<<line.name<<endl;
    return 0;
}
