#include <iostream>

using namespace std;

int arr[] = {1, 4, 2, 5, 6, 7, 8, 9, 10, 15, 14};
int cari = 15;
int panjangArray = sizeof(arr) / sizeof(*arr);
int i;
bool ketemu = false;

int main()
{
    for (i = 0; i < panjangArray; i++)
    {
        if (arr[i] == cari)
        {
            ketemu = true;
            break;
        }
        else
        {
            continue;
        }
    }

    cout << "Panjang array: " << panjangArray << endl;
    cout << "Nilai" << cari << " terdapat pada indeks ke-" << i << endl << endl;
}