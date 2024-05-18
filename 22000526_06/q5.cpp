#include <iostream>
using namespace std;
class Employee {
private:
    double salary;
    int hours_worked_per_day;

public:
    void getInfo(double sal, int hours_worked) {
        salary = sal;
        hours_worked_per_day = hours_worked;
    }

    void addSal() {
        if (salary < 500) {
            salary += 10;
        }
    }

    void addWork() {
        if (hours_worked_per_day > 6) {
            salary += 5;
        }
    }

    void displaySalary() {
        cout << "Final Salary: $" << salary << endl;
    }
};

int main() {
    double salary;
    int hours_worked;

    cout << "Enter the salary of the employee: $";
    cin >> salary;
    cout << "Enter the number of hours worked per day: ";
    cin >> hours_worked;

    Employee emp;

    emp.getInfo(salary, hours_worked);

    emp.addSal();
    emp.addWork();

    emp.displaySalary();

    return 0;
}
