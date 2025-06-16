#include <iostream>

using namespace std;

class Siswa {
    public: 
        string nisn;
        string name;
        int age;
        string gender;

        void berbicara() {
            cout << "Hello world" << endl;
        }
};

int main() {
    Siswa swa;
    swa.nisn = "007102816";
    swa.name = "Adnan";
    swa.age = 19;
    swa.gender = "Male";

    cout << "Nama Siswa: " << swa.name << endl;
    swa.berbicara();

    return 0;
}