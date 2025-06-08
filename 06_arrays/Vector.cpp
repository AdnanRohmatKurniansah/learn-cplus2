#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<string> cars = {"Ferrari", "BMW", "Ford"};

    cars.push_back("Ford");

    for (string car: cars)
    {
        cout << car << endl;
    }
    
}