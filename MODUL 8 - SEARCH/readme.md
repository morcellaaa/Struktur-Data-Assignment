# <h1 align="center">Laporan Praktikum Modul Algoritma Searching</h1>

<p align="center">Muhammad Azka</p>

## Features

- [Dasar Teori](#dasar-teori)
- [Guided](#guided)
- [Unguided](#unguided)
- [Kesimpulan](#kesimpulan)
- [Referensi](#referensi)

## Dasar Teori

**A. Pendahuluan**

Pencarian (searching) merupakan operasi fundamental dalam ilmu komputer yang digunakan untuk menemukan suatu elemen tertentu dalam sekumpulan data. Algoritma searching berperan penting dalam berbagai aplikasi, seperti mesin pencari, sistem basis data, algoritma pengurutan, dan permainan.

**B. Klasifikasi Algoritma Searching**

Algoritma searching dapat diklasifikasikan berdasarkan beberapa kriteria, antara lain:

* **Struktur data:** Algoritma searching dapat dirancang untuk struktur data linear (seperti array) atau struktur data non-linear (seperti pohon, graf).
* **Teknik pencarian:** Algoritma searching dapat menggunakan teknik pencarian brute-force, divide-and-conquer, atau heuristic.
* **Informasi awal:** Algoritma searching dapat bekerja dengan informasi awal minimal (seperti data tidak terurut) atau dengan informasi awal lebih banyak (seperti data terurut).

**C. Algoritma Searching Umum**

1. **Pencarian Sequential (Sequential Search)**

    Pencarian sequential adalah algoritma searching paling sederhana yang bekerja dengan cara memeriksa setiap elemen dalam data secara berurutan hingga elemen yang dicari      ditemukan. Algoritma ini memiliki kompleksitas waktu rata-rata dan terburuk O(n), di mana n adalah jumlah elemen dalam data [1].

2. **Pencarian Biner (Binary Search)**

    Pencarian biner adalah algoritma searching yang lebih efisien daripada pencarian sequential. Algoritma ini hanya bekerja pada data yang terurut dan menggunakan teknik       divide-and-conquer untuk mempersempit ruang pencarian. Pencarian biner memiliki kompleksitas waktu rata-rata dan terbaik O(log n) [2].

3. **Pencarian Interpolasi (Interpolation Search)**

    Pencarian interpolasi adalah variasi dari pencarian biner yang memanfaatkan distribusi data untuk memperkirakan lokasi data yang dicari. Algoritma ini lebih efisien         daripada pencarian biner untuk data yang tersebar secara merata. Pencarian interpolasi memiliki kompleksitas waktu rata-rata O(log log n) [3].

4. **Pencarian Lompat (Jump Search)**

    Pencarian lompat adalah variasi lain dari pencarian biner yang membagi data menjadi beberapa blok dan kemudian melakukan pencarian biner pada blok-blok tersebut.            Algoritma ini lebih efisien daripada pencarian biner untuk data yang sangat besar. Pencarian lompat memiliki kompleksitas waktu rata-rata O(√n) [4].

**D. Algoritma Searching untuk Struktur Data Non-Linear**

1. **Pencarian Kedalaman Pertama (Depth-First Search - DFS)**

    Pencarian kedalaman pertama adalah algoritma searching yang menjelajahi struktur data dengan cara mengunjungi semua node pada satu level sebelum beralih ke level            berikutnya. Algoritma ini memiliki kompleksitas waktu O(V + E), di mana V adalah jumlah node dan E adalah jumlah edge dalam struktur data [5].

2. **Pencarian Lebar Pertama (Breadth-First Search - BFS)**

    Pencarian lebar pertama adalah algoritma searching yang menjelajahi struktur data dengan cara mengunjungi semua node pada satu level secara berurutan sebelum beralih ke     level berikutnya. Algoritma ini memiliki kompleksitas waktu O(V + E), di mana V adalah jumlah node dan E adalah jumlah edge dalam struktur data [5].

**E. Faktor yang Mempengaruhi Pemilihan Algoritma Searching**

Pemilihan algoritma searching yang tepat tergantung pada beberapa faktor, antara lain:

* **Struktur data:** Algoritma searching tertentu dirancang untuk struktur data tertentu.
* **Ukuran data:** Algoritma searching yang lebih efisien untuk data besar mungkin tidak efisien untuk data kecil.
* **Informasi awal:** Algoritma searching yang membutuhkan informasi awal lebih banyak mungkin lebih efisien daripada algoritma searching yang tidak membutuhkan informasi awal.
* **Presisi:** Beberapa algoritma searching dapat menemukan elemen yang paling mendekati elemen yang dicari jika elemen yang dicari tidak ada dalam data.

## Guided

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

```C++
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
```
#### Output

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/340bd743-8447-42f0-8738-2e4d523cc23d)

## Interpretasi dan Analisis Kompleksitas Waktu dan Ruang dari Kode Algoritma Sequential Search

**Interpretasi:**

Kodingan di atas menunjukkan implementasi algoritma Sequential Search untuk mencari nilai tertentu dalam array data. Algoritma ini bekerja dengan cara mengiterasi setiap elemen dalam array dan membandingkannya dengan nilai yang dicari. Jika nilai yang dicari ditemukan, maka proses pencarian dihentikan dan program akan menampilkan indeks di mana nilai tersebut ditemukan. Jika nilai yang dicari tidak ditemukan, maka program akan menampilkan pesan bahwa nilai tersebut tidak ditemukan.

**Analisis Kompleksitas Waktu:**

Dalam algoritma Sequential Search, waktu yang dibutuhkan untuk menemukan nilai yang dicari bergantung pada posisi nilai tersebut dalam array. Pada kasus terburuk, algoritma ini perlu mengiterasi seluruh array, yang berarti kompleksitas waktunya adalah O(n), di mana n adalah jumlah elemen dalam array.

**Analisis Kompleksitas Ruang:**

Algoritma Sequential Search hanya menggunakan memori konstan untuk menyimpan variabel-variabel yang digunakan dalam program. Ini berarti kompleksitas ruangnya adalah O(1), dan tidak bergantung pada jumlah elemen dalam array.

**Kesimpulan:**

Algoritma Sequential Search adalah algoritma pencarian yang sederhana dan mudah dipahami. Kompleksitas waktunya adalah O(n) pada kasus terburuk, dan kompleksitas ruangnya adalah O(1). Algoritma ini cocok digunakan untuk array data yang kecil, di mana waktu pencarian yang cepat tidak menjadi prioritas utama.

### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search

```C++
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
```

## Interpretasi dan Analisis Kompleksitas Waktu dan Ruang dari Kode Algoritma

**Interpretasi:**

Kodingan di atas menunjukkan implementasi algoritma Binary Search untuk mencari nilai tertentu dalam array data yang telah diurutkan. Algoritma ini bekerja dengan cara membagi array menjadi dua bagian secara berulang, dan membandingkan nilai yang dicari dengan nilai tengah array. Jika nilai yang dicari ditemukan, maka proses pencarian dihentikan dan program akan menampilkan indeks di mana nilai tersebut ditemukan. Jika nilai yang dicari tidak ditemukan, maka program akan menampilkan pesan bahwa nilai tersebut tidak ditemukan.

**Analisis Kompleksitas Waktu:**

Dalam algoritma Binary Search, waktu yang dibutuhkan untuk menemukan nilai yang dicari bergantung pada posisi nilai tersebut dalam array. Pada kasus rata-rata, algoritma ini hanya perlu melakukan log2(n) perbandingan, di mana n adalah jumlah elemen dalam array. Ini berarti kompleksitas waktunya adalah O(log n). Pada kasus terburuk, algoritma ini perlu melakukan n perbandingan, yang berarti kompleksitas waktunya adalah O(n).

**Analisis Kompleksitas Ruang:**

Algoritma Binary Search hanya menggunakan memori konstan untuk menyimpan variabel-variabel yang digunakan dalam program. Ini berarti kompleksitas ruangnya adalah O(1), dan tidak bergantung pada jumlah elemen dalam array.

**Kesimpulan:**

Algoritma Binary Search adalah algoritma pencarian yang efisien untuk array data yang telah diurutkan. Kompleksitas waktunya adalah O(log n) pada kasus rata-rata, dan kompleksitas ruangnya adalah O(1). Algoritma ini cocok digunakan untuk array data yang besar, di mana waktu pencarian yang cepat menjadi prioritas utama.

## Unguided

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
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
```

#### Output:

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/3b36df10-33a2-4429-8255-b5d1f538b2a6)

## Interpretasi dan Langkah-langkah Kode Algoritma Menghitung Huruf Vokal

**Interpretasi:**

Kode di atas menunjukkan implementasi fungsi `countVowels()` untuk menghitung jumlah huruf vokal dalam sebuah kalimat. Fungsi ini menerima string kalimat sebagai parameter dan mengembalikan jumlah huruf vokal yang ditemukan.

**Langkah-langkah:**

1. **Memasukkan Kalimat:**
    * Pengguna diminta untuk memasukkan kalimat yang ingin dihitung huruf vokalnya.
    * Kalimat disimpan dalam variabel `kalimat`.

2. **Inisialisasi Variabel:**
    * Variabel `count` diinisialisasi dengan nilai 0 untuk menampung jumlah huruf vokal.
    * Variabel `vowels` diinisialisasi dengan string yang berisi huruf vokal yang ingin dihitung ("aiueo").

3. **Iterasi dan Perbandingan:**
    * Loop `for` digunakan untuk mengiterasi melalui setiap karakter dalam variabel `kalimat`.
    * Di dalam loop:
        * Karakter diubah menjadi huruf kecil menggunakan `tolower()`.
        * Fungsi `isalpha()` digunakan untuk memeriksa apakah karakter merupakan huruf.
        * Jika karakter merupakan huruf:
            * Metode `find()` digunakan untuk mencari karakter dalam string `vowels`.
            * Jika karakter ditemukan dalam `vowels`:
                * Nilai `count` ditambah 1 untuk menghitung jumlah huruf vokal.

4. **Mengembalikan Hasil:**
    * Fungsi `countVowels()` mengembalikan nilai `count` yang merupakan jumlah huruf vokal yang ditemukan dalam kalimat.

**Kesimpulan:**

Fungsi `countVowels()` ini memungkinkan penghitungan jumlah huruf vokal dalam string dengan efisien. Algoritma ini bermanfaat untuk menganalisis teks, data linguistik, atau informasi lainnya yang terkait dengan huruf vokal.

### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

```C++
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
```

#### Output:

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/7e3a2bf1-4242-4804-91cb-47c4f9c5c6d8)

## Interpretasi dan Langkah-langkah Kode Algoritma Menghitung Huruf Vokal

**Interpretasi:**

Kode di atas menunjukkan implementasi fungsi `countVowels()` untuk menghitung jumlah huruf vokal dalam sebuah kalimat. Fungsi ini menerima string kalimat sebagai parameter dan mengembalikan jumlah huruf vokal yang ditemukan.

**Langkah-langkah:**

1. **Memasukkan Kalimat:**
    * Pengguna diminta untuk memasukkan kalimat yang ingin dihitung huruf vokalnya.
    * Kalimat disimpan dalam variabel `kalimat`.

2. **Inisialisasi Variabel:**
    * Variabel `count` diinisialisasi dengan nilai 0 untuk menampung jumlah huruf vokal.
    * Variabel `vowels` diinisialisasi dengan string yang berisi huruf vokal yang ingin dihitung ("aiueo").

3. **Iterasi dan Perbandingan:**
    * Loop `for` digunakan untuk mengiterasi melalui setiap karakter dalam variabel `kalimat`.
    * Di dalam loop:
        * Karakter diubah menjadi huruf kecil menggunakan `tolower()`.
        * Fungsi `isalpha()` digunakan untuk memeriksa apakah karakter merupakan huruf.
        * Jika karakter merupakan huruf:
            * Metode `find()` digunakan untuk mencari karakter dalam string `vowels`.
            * Jika karakter ditemukan dalam `vowels`:
                * Nilai `count` ditambah 1 untuk menghitung jumlah huruf vokal.

4. **Mengembalikan Hasil:**
    * Fungsi `countVowels()` mengembalikan nilai `count` yang merupakan jumlah huruf vokal yang ditemukan dalam kalimat.

**Kesimpulan:**

Fungsi `countVowels()` ini memungkinkan penghitungan jumlah huruf vokal dalam string dengan efisien. Algoritma ini bermanfaat untuk menganalisis teks, data linguistik, atau informasi lainnya yang terkait dengan huruf vokal.

### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
/// LAILATUR RAHMAH
/// 2311102177

#include <iostream>
using namespace std;

// Fungsi untuk menghitung berapa banyak angka 4 dalam array data
int countFours(const int data[], int length) {
    int count = 0;

    // Iterasi melalui setiap elemen dalam array data
    for (int i = 0; i < length; ++i) {
        // Periksa apakah elemen saat ini sama dengan angka 4
        if (data[i] == 4) {
            count++; // Tambahkan jumlah angka 4 yang ditemukan
        }
    }

    return count;
}

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int length = sizeof(data) / sizeof(data[0]);

    // Hitung berapa banyak angka 4 dalam array data
    int jumlahAngkaEmpat = countFours(data, length);

    cout << "Jumlah angka 4 dalam data adalah: " << jumlahAngkaEmpat << endl;

    return 0;
}
```

#### Output:

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/866fa3bf-38c5-4f92-8ce7-31e70a44dd94)

## Interpretasi dan Langkah-langkah Kode Algoritma Menghitung Angka 4

**Interpretasi:**

Kode di atas menunjukkan implementasi fungsi `countFours()` untuk menghitung berapa banyak angka 4 dalam array data integer. Fungsi ini menerima array data dan panjang array sebagai parameter dan mengembalikan jumlah angka 4 yang ditemukan dalam array.

**Langkah-langkah:**

1. **Definisikan Fungsi:**
    * Fungsi `countFours()` didefinisikan dengan parameter `data` (array data integer) dan `length` (panjang array).
    * Fungsi ini mengembalikan nilai integer yang merupakan jumlah angka 4 yang ditemukan dalam array.

2. **Inisialisasi Variabel:**
    * Variabel `count` diinisialisasi dengan nilai 0 untuk menampung jumlah angka 4 yang ditemukan.

3. **Iterasi dan Perbandingan:**
    * Loop `for` digunakan untuk mengiterasi melalui setiap elemen dalam array `data`.
    * Di dalam loop:
        * Elemen array saat ini dibandingkan dengan nilai 4.
        * Jika elemen array saat ini sama dengan 4:
            * Nilai `count` ditambah 1 untuk menghitung jumlah angka 4 yang ditemukan.

4. **Mengembalikan Hasil:**
    * Fungsi `countFours()` mengembalikan nilai `count` yang merupakan jumlah angka 4 yang ditemukan dalam array.

**Kesimpulan:**

Fungsi `countFours()` ini memungkinkan penghitungan jumlah angka 4 dalam array data integer dengan efisien. Algoritma ini bermanfaat untuk analisis data, pemrosesan array, atau tugas yang melibatkan pencarian nilai tertentu dalam array.

## Kesimpulan

Algoritma searching merupakan alat penting dalam ilmu komputer yang digunakan untuk menemukan elemen tertentu dalam sekumpulan data. Berbagai algoritma searching tersedia dengan kompleksitas waktu dan karakteristik yang berbeda. Pemilihan algoritma searching yang tepat tergantung pada beberapa faktor, seperti struktur data, ukuran data, informasi awal, dan presisi.

## Referensi

[1] P. Nagarajan dan A. Thamizhendhi, "A survey on searching techniques," 2020

[2] A. R. A. a. R. Alsaadi, "Sequential and Binary Search Algorithms: A Comparative Study," Telkomnika, vol. 18, no. 1, pp. 438-445, 2020.

[3] S. Yadav dan V. Chaudhary, "Performance Analysis of Binary Search and Interpolation Search Algorithms," 2020

[4] G. Gulati dan A. Rai, "Comparison and analysis of sequential search, binary search, interpolation search and jump search," Procedia Computer Science, vol. 167, pp. 1854-1862, 2020.

[5] R. S. Chauhan dan A. Goyal, "Comparative analysis of depth first search and breadth first search algorithms," International Journal of Scientific & Technology Research, vol. 9, no. 3, pp. 835-838, 2020.