/// LAILATUR RAHMAH
/// 2311102177

#include <iostream>
#include <string>

using namespace std;


string names[] = {"Sungjae", "Rdtya", "Jeno", "Ahyeon"};

// binary search untuk mencari huruf pada array yang sudah dideklarasikan
void binarySearch(string names[], int index, string target)
{
    int front = 0, end = index - 1, mid;
    bool isFound = false;

    while (isFound == false && front <= end)
    {
        mid = (front + end) / 2;

        // pengecekan apakah huruf pertama pada setiap data array sama dengan huruf dari input user
        if (names[mid][0] == target[0])
        {
            isFound = true;
            break;
        }
        else if (names[mid][0] < target[0])
        {
            front = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (isFound)
    {
        cout << endl
             << "Huruf ditemukan pada index ke-" << mid << " Pada data: " << names[mid] << endl;
    }
    else
    {
        cout << "Huruf tidak ditemukan" << endl;
    }
}

int main()
{
    string inputName;
    int indexArray = sizeof(names) / sizeof(*names);

    cout << "Masukkan huruf: ";
    cin >> inputName;

    binarySearch(names, indexArray, inputName);

    return 0;
}