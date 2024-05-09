#include <iostream>
using namespace std;
int main() {

    int nilaiUjian1, nilaiUjian2, nilaiUjian3;
    float nilaiRataRata;
    char namaSiswa[10];
    bool lulus;

    cout << "Masukkan nama siswa: ";
    cin.getline(namaSiswa, 50);

    cout << "Masukkan nilai ujian pertama: ";
    cin >> nilaiUjian1;

    cout << "Masukkan nilai ujian kedua: ";
    cin >> nilaiUjian2;

    cout << "Masukkan nilai ujian ketiga: ";
    cin >> nilaiUjian3;

    nilaiRataRata = (nilaiUjian1 + nilaiUjian2 + nilaiUjian3) / 3.0;
    lulus = (nilaiRataRata >= 70);

    cout << "\nNama siswa: " << namaSiswa << endl;
    cout << "Nilai rata-rata: " << nilaiRataRata << endl;
    if (lulus) {
        cout << "Status: LULUS" << endl;
    } else {
        cout << "Status: TIDAK LULUS" << endl;
    }
    return 0;
}