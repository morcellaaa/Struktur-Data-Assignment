#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> data_array;
    int num;
    
    cout << "Masukkan 10 angka dalam array:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> num;
        data_array.push_back(num);
    }

    cout << "Data array: ";
    for (int i = 0; i < data_array.size(); ++i) {
        cout << data_array[i];
        if (i != data_array.size() - 1)
            cout << " ";
    }
    cout << "\n";

    cout << "Nomor genap: ";
    for (int i = 0; i < data_array.size(); ++i) {
        if (data_array[i] % 2 == 0) {
            cout << data_array[i];
            if (i != data_array.size() - 1)
                cout << ", ";
        }
    }
    cout << "\n";

    cout << "Nomor ganjil: ";
    for (int i = 0; i < data_array.size(); ++i) {
        if (data_array[i] % 2 != 0) {
            cout << data_array[i];
            if (i != data_array.size() - 1)
                cout << ", ";
        }
    }
    cout << "\n";

    return 0;
}
