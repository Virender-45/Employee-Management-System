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
	int	minId = 101;
	int maxId;
	Employee();

	void displayMenu();
	void addEmployee();
	void displayDetails();
	void countEmployees();
	void searchEmployee();
	void updateSalary();
	void deleteEmployee();
};
void Employee::deleteEmployee() {
	int id;
	cout << "Enter the ID of the Employee you want to delete : ";
	cin >> id;
}
void Employee::updateSalary() {	//Making
	int id;
	float newSalary;
	cout << "\nEnter employee ID to update salary : ";
	cin >> id;
	

	if (id >= minId && id <= maxId) {
		cout << "Enter new Salary : ";
		cin >> newSalary;
		for (int i = 0; i < totalEmp; i++) {
			if (id == empHave[i].empId) {
				empHave[i].salary = newSalary;
			}
		}
		cout << "Salary Updated Sucessfully." << endl;
	}
	else {
		cout << "Invaild id!!!" << endl;
	}
}
void Employee::searchEmployee() {
	int id;
	cout << "Enter the ID of the employee : ";
	cin >> id;

	if (id >= minId && id <= maxId) {
		for (int i = 0; i < totalEmp; i++) {
			if (id == empHave[i].empId) {
				cout << "Employee id : " << id << endl;
				cout << "Employee Name : " << empHave[i].fname << " " << empHave[i].lname << endl;
				cout << "Employee Role : " << empHave[i].role << endl;
				cout << "Employee Salary : " << empHave[i].salary << endl;
			}
		}
	}
	else {
		cout << "Employee with ID : " << id << " not found." << endl;
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
		cout << "Enter deatils of " << i + 1 << " employee " << endl;
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
		maxId = empHave[i].empId;
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
	maxId = 108;
}
void Employee::displayMenu() {
	cout << "--------------Welcome--------------" << endl;
	cout << "\nSelect an option" << endl;
	cout << "(1) Add a new employee" << endl;
	cout << "(2) Display details of all employees" << endl;
	cout << "(3) Display the total number of employees" << endl;
	cout << "(4) Search an employee by empID" << endl;
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
			wowz.deleteEmployee();
			break;
		case 7:
			cout << "Exiting the program..." << endl;
			break;
		default:
			cout << "Invaild input!!" << endl;
			break;
		}
	} while (choice != 7);


	return 0;
}
