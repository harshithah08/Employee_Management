#include<iostream>
#include "headers/Operations.h"
#include<list>
using namespace std;
 
 int main()
 {
 	list<Employee> EmpList;
 	Employee *emp;
 	int ch,key;
 	do
 	{
 		cout<<"\n 1 Create \n 2 Update \n 3 Search";
 		cout<<"\n 4 Delete \n 5 Display  6 Exit";
 		cout<<"\nEnter the choice=";
 		cin>>ch;
 		switch(ch)
 		{
 			case 1:cout<<"\nCREATING AN OBJECT......\n";
 			       createEmployee(EmpList);
 			       break;
 			case 2:cout<<"\n ENTER EMPID TO UPDATE = ";
 			       cin>>key;
 		           updateEmployee(EmpList,key);
 		           break;
 			case 3:cout<<"\n ENTER EMPID TO SEARCH = ";
 			       cin>>key;
 		           emp = searchEmployee(EmpList,key);
 		           if(emp==NULL)
 		             cout<<"\nEMPLOYEE DOESNT EXIST = ";
 		           else
 		             emp->display();
 		            break;
 		    case 4 :cout<<"\n ENTER EMPID TO DELETE = ";
 			       cin>>key;
 		           emp = searchEmployee(EmpList,key);
					break;       
 			case 5:displayEmployee(EmpList);
 			       break;
 			case 6:break;
		 }
	 }while(ch!=7);
 }
