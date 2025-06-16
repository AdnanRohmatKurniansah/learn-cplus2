#include <iostream>
#include <array>

using namespace std;

int main() {
    struct Pegawai {
        int id;
        string name;
        string email;
        string no_telp;
        string address;
    };

    Pegawai pgw;
    pgw.id = 1;
    pgw.name = "Adnan";
    pgw.email = "example@gmail.com";
    pgw.no_telp = "08615781901";
    pgw.address = "Pundong";

    cout << "Nama Pegawai: " << pgw.name << endl;

    return 0;
}