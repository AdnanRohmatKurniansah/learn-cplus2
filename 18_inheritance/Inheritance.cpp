#include <iostream>

using namespace std;

class Employee {
    protected:
        int salary;
};

class Programmer: public Employee {
    public: 
        int bonus;
        void setSalary(int s) {
            salary = s;  // can be accessed in the inherited class
        }
        int getSalary() {
            return salary;
        }
};

int main() {
    Programmer prgr;
    prgr.setSalary(100000);
    prgr.bonus = 10000;

    cout << "Salary: " << prgr.getSalary() << endl;
    cout << "Bonus: " << prgr.bonus << endl;
    cout << "Bonus: " << prgr.bonus << endl;

    return 0;
}