# Employee Management System

A simple C++ program to manage employee details, including adding, updating, deleting, and searching for employees, as well as viewing their details. This program demonstrates the use of classes, structures, arrays, and basic C++ functionalities.

## Features

- **Add Employee**: Add new employees to the system with details like first name, last name, role, and salary.
- **Display Details**: View details of all employees in the system.
- **Count Employees**: Get the total number of employees.
- **Search Employee**: Search for an employee using their unique Employee ID.
- **Update Salary**: Modify the salary of an existing employee.
- **Delete Employee**: Remove an employee from the system using their Employee ID.

## How It Works

1. **Initialization**:
   - The program initializes with a set of predefined employees for demonstration purposes.

2. **Menu-Driven Interface**:
   - Users interact with the program through a menu, where they can select the desired action by entering the corresponding option number.

3. **Unique Employee IDs**:
   - Each employee is assigned a unique Employee ID starting from 101, which increments automatically as new employees are added.

## Code Structure

- **Class `Employee`**:
  - Contains a structure `emp` to represent employee details.
  - Methods for performing various employee management operations:
    - `addEmployee()`
    - `displayDetails()`
    - `countEmployees()`
    - `searchEmployee()`
    - `updateSalary()`
    - `deleteEmployee()`
    - `displayMenu()`

- **Main Function**:
  - Implements a menu-driven loop for user interaction.
  - Calls the appropriate method based on user input.

## How to Run

1. **Prerequisites**:
   - A C++ compiler (e.g., `g++`).
   - Basic understanding of command-line operations.

2. **Steps**:
   - Save the code into a file named `EmployeeManagementSystem.cpp`.
   - Compile the program:
     ```bash
     g++ -o EmployeeManagementSystem EmployeeManagementSystem.cpp
     ```
   - Run the executable:
     ```bash
     ./EmployeeManagementSystem
     ```

3. **Usage**:
   - Follow the on-screen instructions to interact with the program.

## Example

