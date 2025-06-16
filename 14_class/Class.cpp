#include <iostream>

using namespace std;

class Siswa {
    public: 
        string nisn;
        string name;
        int age;
        string gender;
};

int main() {
    Siswa swa;
    swa.nisn = "007102816";
    swa.name = "Adnan";
    swa.age = 19;
    swa.gender = "Male";

    cout << "Nama Siswa: " << swa.name << endl;
    return 0;
}