#include <iostream>

using namespace std;

class Employee {
    private:
        int salary; //only trusted methods can access or modify it.
    public:
        void setSalary(int s) {
            salary = s;
        }
        int getSalary()  {
            return salary;
        }
};

int main() {
    Employee emp;
    emp.setSalary(1000000);
    
    cout << emp.getSalary() << endl;

    return 0;
}