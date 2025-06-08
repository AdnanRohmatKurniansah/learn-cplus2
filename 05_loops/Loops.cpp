#include <iostream>

using namespace std;

int main () {
    // While
    int countdown = 3;
    while (countdown > 0) {
        cout << countdown << endl;
        countdown--;
    }

    cout << "Happy New Year" << endl;

    // Do while
    int i = 0;
    do {
        cout << i << endl;
        i++;
    }
    while (i < 5);

    // // for
    int sum = 0;    
    for (int i = 1; i <= 5; i++)
    {
        sum = sum + 1;
        cout << "Sum is " << sum << endl;
    }


    // foreach
    int numbers[3] = {1, 2, 3};
    for (int i: numbers)
    {
        cout << i << endl;
    }
    
    
}   