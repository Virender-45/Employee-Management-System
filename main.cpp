#include<iostream>
#include<string>
				  
using namespace std;

class Employee {
public:
	struct emp
	{
	int empId;
	string fname;
	string lname;
	string department;
	float salary;
	};
	emp empHave[100];
	int totalEmp;
	Employee();

	void displayMenu();
	void addEmployee();
	void displayDetails();
	void countEmployees();
	void updateSalary(float newSalary);
};
Employee::Employee() {
	empHave[0] = { 1, "Virender", "Singh", "Developer", 1000 };
	empHave[1] = { 2, "Aman", "Dhiman", "Developer", 10000 };
	empHave[2] = { 3, "Abhay", "Chandel", "Developer", 100000 };
	empHave[3] = { 4, "Sahil", "Yadav", "Developer", 1000000 };
	empHave[4] = { 5, "Pankaj", "Guleria", "Designer", 1000 };
	empHave[5] = { 6, "Shubham", "Verma", "Designer", 10000 };
	empHave[6] = { 7, "Nikhil", "Thakur", "SEO", 20000 };
	empHave[7] = { 8, "Atul", "Rana", "SEO", 30000 };
	totalEmp = 8;
}
void Employee::displayMenu() {
	cout << "--------------Welcome--------------" << endl;
	cout << "\nSelect an option" << endl;
	cout << "(1) Add a new employee" << endl;
	cout << "(2) Display details of all employees" << endl;
	cout << "(3) Search and update an employee's salary by empID" << endl;
	cout << "(4) Display the total number of employees" << endl;
	cout << "(5) Exit the program" << endl;
}

int main() {

	int choice;
	Employee wowz;
	do
	{
		wowz.displayMenu();
		cin >> choice;
		switch (choice)
		{

		default:
			break;
		}
	} while (choice != 5);


	return 0;
}
