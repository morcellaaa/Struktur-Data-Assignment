#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Masukkan panjang array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    int maksimum = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }

    int minimum = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    double total = 0;
    for (int i = 0; i < n; ++i) {
        total += arr[i];
    }
    double rata_rata = total / n;

    cout << "Nilai maksimum: " << maksimum << endl;
    cout << "Nilai minimum: " << minimum << endl;
    cout << "Nilai rata-rata: " << rata_rata << endl;

    return 0;
}
