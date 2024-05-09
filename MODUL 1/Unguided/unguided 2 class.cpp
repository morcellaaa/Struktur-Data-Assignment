#include <iostream>
#include <string>
using namespace std;
class Pegawai {
public:
    string nama;
    int umur;
    double gaji;
    Pegawai(string nameR, int age, double salary) {
        nama = nameR;
        umur = age;
        gaji = salary;
    }

    void display() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Gaji: Rp" << gaji << endl;
    }
};

int main() {

    Pegawai pegawai1("Jaewook", 30, 250000.0);

    pegawai1.display();

    return 0;
}