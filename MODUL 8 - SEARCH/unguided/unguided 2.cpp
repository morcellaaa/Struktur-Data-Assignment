/// LAILATUR RAHMAH
/// 2311102177

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int amount;

// fungsi untuk mengubah seluruh string menjadi lower case
string toLowerCase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }

    return str;
}

void vocalLetterSearch(string word)
{
    string lowerCaseWord = toLowerCase(word);

    for (int i = 0; i < lowerCaseWord.length(); i++)
    {
        // pengecekan setiap huruf pada input apakah mengandung huruf vokal menggunakan OR
        if (lowerCaseWord[i] == 'a' || lowerCaseWord[i] == 'i' || lowerCaseWord[i] == 'u' || lowerCaseWord[i] == 'e' || lowerCaseWord[i] == 'o')
        {
            amount++;
        }
    }

    cout << endl
         << "Huruf vokal pada kalimat tersebut berjumlah " << amount << " huruf" << endl;
}

int main()
{
    string sentence;

    cout << "Masukkan Kalimat: ";
    getline(cin, sentence);

    vocalLetterSearch(sentence);

    return 0;
}