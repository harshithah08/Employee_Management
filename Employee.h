#include<iostream>
#include<stdlib.h>
using namespace std;
//Employee header
class Employee
{
	public:
		int empId;
		string empName;
		float sal;
	    void setData();
	    void display();
	    void writeDataToFile();
};
void Employee::setData()
{
	cout<<"\n ENTER EMPID = ";
	cin>>empId;
	cin.ignore();
	cout<<"\n ENTER EMPNAME =";
	getline(cin,empName);
	cout<<"\n ENTER EMPSAL = ";
	cin>>sal;
}
void Employee::display()
{
	cout<<"\n EMPID       ="<<empId;
	cout<<"\n EMPNAME     ="<<empName;
	cout<<"\n EMPSAL      ="<<sal<<endl;
}
void writeDataToFile()
{
	
}
