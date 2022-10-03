/*12.Write a program by creating an 'Employee' class having the following functions and
print the final salary.
1 - ‘getInfo ()' which takes the salary, number of hours of work per day of employee
as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - ‘AddWork ()' which adds $5 to the salary of the employee if the number of hours
of work per day is more than 6 hours.*/
#include <iostream>
using namespace std;
class Employee{
private:
	float salary;
	float numberHours;
public:
	///'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
	void getInfo(){
		cout<<"Enter the salary: ";
		cin>>salary;
		cout<<"Enter the number of hours of work per day: ";
		cin>>numberHours;
	}
	/// 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
	void AddSal(){
		if(salary<500){
			salary+=10.0;
		}
	}
	/// 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
	void AddWork(){
		if(numberHours>6){
			salary+=5.0;
		}
		cout<<"The final salary of the employee: "<<salary<<"\n\n";
	}
};
int main()
{
	Employee employee;
	employee.getInfo();
	employee.AddSal();
	employee.AddWork();
	system("pause");
	return 0;
}
