
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Global variables
string employeeName;
double basicSalary, overtimeHours;
double overtimeRate, overtimePay, netSalary;

// Function to get employee details
void getEmployeeDetails() {
    cout << "Enter employee name: "<<endl;
    getline(cin, employeeName);

    cout << "Enter basic salary: "<<endl;
    cin >> basicSalary;

    cout << "Enter overtime hours: "<<endl;
    cin >> overtimeHours;

    cout << "Enter overtime rate per hour: "<<endl;
    cin >> overtimeRate;
}

// Function to calculate overtime pay
double calculateOvertimePay() {
    overtimePay = overtimeHours * overtimeRate;
    return overtimePay;
}

// Function to calculate net salary
double calculateNetSalary() {
    netSalary = basicSalary + overtimePay;
    return netSalary;
}

// Function to display payslip
void displayPayslip() {
    cout << "\n====================================\n";
    cout << "   EMPLOYEE PAYSLIP  \n";
    cout << fixed << setprecision(2);

    cout << "Employee Name:   " << employeeName << endl;
    cout << "Basic Salary:    KSh " << basicSalary << endl;
    cout << "Overtime Hours:  " << overtimeHours << endl;
    cout << "Overtime Rate:   KSh " << overtimeRate << endl;
    cout << "Overtime Pay:    KSh " << overtimePay << endl;

    cout << "Net Salary:      KSh " << netSalary << endl;
    cout << "====================================\n";
}

// Main function
int main() {
    getEmployeeDetails();

    calculateOvertimePay();
    calculateNetSalary();

    displayPayslip();

    return 0;
}
