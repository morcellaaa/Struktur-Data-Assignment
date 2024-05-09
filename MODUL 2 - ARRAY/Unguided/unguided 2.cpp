#include <iostream>

using namespace std;

int main() {
    int x_ukuran, y_ukuran, z_ukuran;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan ukuran array (x y z): ";
    cin >> x_ukuran >> y_ukuran >> z_ukuran;

    // Deklarasi array dengan ukuran yang dimasukkan pengguna
    int arr[x_ukuran][y_ukuran][z_ukuran];

    // Input elemen array
    for (int x = 0; x < x_ukuran; ++x) {
        for (int y = 0; y < y_ukuran; ++y) {
            for (int z = 0; z < z_ukuran; ++z) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "]: ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Output array
    cout << "Elemen-elemen array:" << endl;
    for (int x = 0; x < x_ukuran; ++x) {
        for (int y = 0; y < y_ukuran; ++y) {
            for (int z = 0; z < z_ukuran; ++z) {
                cout << "Array[" << x << "][" << y << "][" << z << "]: " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
// tampilan array
    for (int x = 0; x < x_ukuran; x++)
    {
        for (int y = 0; y < y_ukuran; y++)
        {
            for (int z = 0; z < z_ukuran; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }


    return 0;
}
