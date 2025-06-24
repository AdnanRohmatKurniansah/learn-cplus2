#include <iostream>

using namespace std;

class Employee {
    private:
        int salary;
    public:
        Employee(int number) {
            salary = number;
        }

        friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp) {
    cout << "Salary: " << emp.salary << endl; 
}

int main() {
    Employee myEmp(200000);
    displaySalary(myEmp);
    return 0;
}