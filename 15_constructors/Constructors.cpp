#include <iostream>

using namespace std;

class Car {
    public: 
        string brand;
        string model;
        int year;
        Car(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
        }
};

int main() {
    Car cr("BMW", "XS", 1999);
    Car cr2("Ford", "Mustang", 1969);

    cout << cr.brand << " " << cr.model << " " << cr.year << "\n"; 
    cout << cr2.brand << " " << cr.model << " " << cr.year << "\n";

    return 0;
}