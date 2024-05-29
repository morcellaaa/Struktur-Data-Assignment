/// LAILATUR RAHMAH
/// 2311102177

#include <iostream>
#include <iomanip>

using namespace std;

// Penamaan variabel global unutk index array dan data cin
int vertexAmount_2311102177;
int vertexWeight_2311102177;
string vertexName_2311102177;

// Fungsi untuk mengisi simpul
void fillVertex(string vertex[])
{
    cout << "Silahkan masukkan nama simpul" << endl;
    for (int i = 0; i < vertexAmount_2311102177; i++)
    {
        cout << "Simpul " << i + 1 << " : ";
        cin >> vertexName_2311102177;

        vertex[i] = vertexName_2311102177;
    }

    cout << endl;
}

int main()
{
    // Penginputan index oleh user
    cout << "Masukkan jumlah simpul : ";
    cin >> vertexAmount_2311102177;

    //  Deklarasi array sesuai index
    string vertex_2311102177[vertexAmount_2311102177];
    int matrix_2311102177[vertexAmount_2311102177][vertexAmount_2311102177];

    // Pemanggilan fungsi
    fillVertex(vertex_2311102177);

    cout << "Silahkan masukkan bobot antar simpul" << endl;

    // Pengisian bobot simpul
    for (int i = 0; i < vertexAmount_2311102177; i++)
    {
        for (int j = 0; j < vertexAmount_2311102177; j++)
        {
            cout << vertex_2311102177[i] << " ------> " << vertex_2311102177[j] << " = ";
            cin >> vertexWeight_2311102177;

            matrix_2311102177[i][j] = vertexWeight_2311102177;
        }

        cout << endl;
    }

    cout << endl;

    cout << "Matriks bobot antar simpul" << endl;
    cout << setw(12) << "";

    // Mencetak header untuk nama simpul
    for (int i = 0; i < vertexAmount_2311102177; i++)
    {
        cout << setw(12) << vertex_2311102177[i];
    }

    cout << endl;

    //  Mencetak bobot setiap simpul
    for (int i = 0; i < vertexAmount_2311102177; i++)
    {
        // Mencetak kolom untuk nama simpul
        cout << setw(12) << vertex_2311102177[i];

        for (int j = 0; j < vertexAmount_2311102177; j++)
        {
            cout << setw(12) << matrix_2311102177[i][j];
        }

        cout << endl;
    }
}