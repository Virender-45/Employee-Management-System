#include<iostream>
#include<string>
				  
using namespace std;

class Employee {
public:
	struct emp{
		int empId;
		string fname;
		string lname;
		string role;
		float salary;
	};
	emp empHave[100];
	int totalEmp;
	Employee();

	void displayMenu();
	void addEmployee();
	void displayDetails();
	void countEmployees();
	void searchEmployee();
	void updateSalary();
};
void Employee::updateSalary() {	//Making
	for (int i = 0; i < totalEmp; i++){
		cout << "Name : " << empHave[i].fname << " , ID : " << empHave[i].empId << endl;
	}
	int id;
	cout << "\nEnter the employee ID : ";
	cin >> id;
	cout << "You select " << id;
}
void Employee::searchEmployee() {
	int id;
	cout << "Enter the ID of the employee : ";
	cin >> id;

	for (int i = 0; i < totalEmp; i++){
		if (id == empHave[i].empId) {
			cout << "Employee id : " << id << endl;
			cout << "Employee Name : " << empHave[i].fname << " " << empHave[i].lname << endl;
			cout << "Employee Role : " << empHave[i].role << endl;
			cout << "Employee Salary : " << empHave[i].salary << endl;
		}
	}
}
void Employee::countEmployees() {
	cout << "\n\nWe have total '" << totalEmp << "' employees.\n\n";
}
void Employee::displayDetails() {
	for (int i = 0; i < totalEmp; i++){
		cout << "\nEmployee " << i + 1 << endl;
		cout << "ID : " << empHave[i].empId << endl;
		cout << "Name : " << empHave[i].fname << " " << empHave[i].lname << endl;
		cout << "Role : " << empHave[i].role << endl;
		cout << "Salary : " << empHave[i].salary << endl;
	}
}
void Employee::addEmployee() {
	int n;
	cout << "How many Employees you want to add : ";
	cin >> n;

	for (int i = 0; i < n; i++){
		cout << "Enter first name : ";
		cin >> empHave[i].fname;
		cout << "Enter the last name : ";
		cin >> empHave[i].lname;
		cout << "Enter role : ";
		cin >> empHave[i].role;
		cout << "Enter salary : ";
		cin >> empHave[i].salary;
		totalEmp += 1;
		empHave[i].empId = totalEmp + 100;
		cout << "Employee with name '" << empHave[i].fname << " " << empHave[i].lname << "' added and gets '" << empHave[i].empId << "' id." << endl;
	}
}
Employee::Employee() {
	empHave[0] = { 101, "Virender", "Singh", "Developer", 1000 };
	empHave[1] = { 102, "Aman", "Dhiman", "Developer", 10000 };
	empHave[2] = { 103, "Abhay", "Chandel", "Developer", 100000 };
	empHave[3] = { 104, "Sahil", "Yadav", "Developer", 1000000 };
	empHave[4] = { 105, "Pankaj", "Guleria", "Designer", 1000 };
	empHave[5] = { 106, "Shubham", "Verma", "Designer", 10000 };
	empHave[6] = { 107, "Nikhil", "Thakur", "SEO", 20000 };
	empHave[7] = { 108, "Atul", "Rana", "SEO", 30000 };
	totalEmp = 8;
}

void Employee::displayMenu() {
	cout << "--------------Welcome--------------" << endl;
	cout << "\nSelect an option" << endl;
	cout << "(1) Add a new employee" << endl;
	cout << "(2) Display details of all employees" << endl;
	cout << "(3) Display the total number of employees" << endl;
	cout << "(4) Search an employee's salary by empID" << endl;
	cout << "(5) Update an employee salary " << endl;
	cout << "(6) Exit the program" << endl;
	cout << "Enter your choice : ";
}
int main() {

	int choice;
	Employee wowz;
	do{
		wowz.displayMenu();
		cin >> choice;
		switch (choice){
		case 1:
			wowz.addEmployee();
			break;
		case 2:
			wowz.displayDetails();
			break;
		case 3:
			wowz.countEmployees();
			break;
		case 4:
			wowz.searchEmployee();
			break;
		case 5:
			wowz.updateSalary();
			break;
		case 6:
			cout << "Exiting the program..." << endl;
		default:
			cout << "Invaild input!!" << endl;
			break;
		}
	} while (choice != 5);


	return 0;
}
