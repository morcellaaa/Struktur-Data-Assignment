#include <iostream>
#include <string>
using namespace std;

struct Pegawai {
    string nama;
    int umur;
    double gaji;
};

void display(const Pegawai& pegawai) {
    cout << "Nama: " << pegawai.nama << endl;
    cout << "Umur: " << pegawai.umur << endl;
    cout << "Gaji: Rp" << pegawai.gaji << endl;
}

int main() {
    Pegawai pegawai1 = {"Jaewook", 30, 250000.0};

    display(pegawai1);

    return 0;
}