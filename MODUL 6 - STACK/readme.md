# <h1 align="center">Laporan Praktikum Modul Stack</h1>
<p align="center">Arvinanto Bahtiar</p>

## Dasar Teori

Tumpukan (Stack) adalah struktur data sederhana yang digunakan untuk menyimpan 
data (mirip dengan Daftar Tertaut). Dalam tumpukan, urutan kedatangan data adalah penting. 
Tumpukan piring di kafetaria adalah contoh tumpukan yang baik. Pelat ditambahkan ke 
tumpukan saat dibersihkan dan diletakkan di atas. Ketika piring, diperlukan itu diambil dari 
atas tumpukan. Piring pertama yang ditempatkan di tumpukan adalah yang terakhir 
digunakan.

Definisi: Tumpukan adalah daftar terurut di mana penyisipan dan penghapusan 
dilakukan di satu ujung, yang disebut atas. Elemen terakhir yang dimasukkan adalah yang 
pertama dihapus. Oleh karena itu, ini disebut daftar Last in First out (LIFO) atau First in Last 
out (FILO). 

Nama khusus diberikan untuk dua perubahan yang dapat dilakukan pada tumpukan. 
Ketika sebuah elemen dimasukkan ke dalam Tumpukan, konsepnya disebut push, dan ketika 
sebuah elemen dikeluarkan dari Tumpukan, konsepnya disebut pop. Mencoba mengeluarkan 
tumpukan kosong disebut underflow dan mencoba mendorong elemen dalam tumpukan 
penuh disebut overflow. Umumnya, Kita memperlakukan mereka sebagai pengecualian. 
Sebagai contoh, pertimbangkan snapshot dari tumpukan. 

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/4fc16dd7-aa73-4e39-9614-0cc620733e84)

Dapat terlihat bahwa meskipun elemen ke-3 adalah yang paling terakhir ditambahkan, namun elemen tersebut justru yang pertama dihapus. Operasi inilah yang kemudian disebut sebagai prinsip operasi LIFO (Last In First Out).

Operasi utama dari Stack adalah Push dan Pop, namun terdapat pula operasi tambahan dari Stack yang juga penting. Adapun beberapa jenis operasi Stack adalah sebagai berikut.

1. Push: Operasi Push merupakan proses operasi ketika kita ingin memasukkan sebuah elemen atau item ke dalam Stack. 

2. Pop: Operasi Pop dilakukan untuk menghapus sebuah elemen atau item dalam Stack.

3. Peek: Operasi Peek dilakukan untuk memungkinkan pengguna dapat melihat elemen di atas Stack dengan catatan tidak ada modifikasi apa pun dalam operasi ini.

4. int isFull: Operasi ini dilakukan untuk mengetahui apakah Stack sedang penuh atau tidak.

5. int isEmpty: Operasi ini dilakukan untuk mengetahui apakah Stack sedang kosong atau tidak.

6. int size: Operasi ini dilakukan untuk mengembalikan ukuran Stack atau jumlah total elemen yang ada dalam Stack tersebut.

7. int top: Operasi ini dilakukan untuk mengembalikan elemen terakhir yang dimasukkan di atas elemen lain tanpa menghapusnya.

## Guided 

### 1. Guided 1

```C++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);        
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index --;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index --;
        }
        arrayBuku[index] = data;
    }
}

void destroyArrayBuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main () {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();

    cout << "\n";

    destroyArrayBuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;\

    cetakArrayBuku();
    
    return 0;
}
```
Program ini merupakan implementasi stack (tumpukan) dalam bahasa C++ menggunakan array untuk menyimpan data. Stack diimplementasikan dengan array arrayBuku dan variabel top untuk menunjuk ke elemen teratas. Program menyediakan fungsi-fungsi seperti pushArrayBuku, popArrayBuku, peekArrayBuku, dan cetakArrayBuku untuk memanipulasi data dalam stack. Fungsi main() menunjukkan contoh penggunaan fungsi-fungsi tersebut dengan menambahkan beberapa data buku ke dalam stack, mencetak data-stack, memeriksa status stack (penuh atau kosong), dan melakukan operasi lain seperti penghapusan dan pengubahan data dalam stack.

## Unguided 

### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan
dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari
depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

#### Source Code
```C++
//Lailatur Rahmah
//2311102177

#include <iostream>
#include <stack>
#include <string>
#include <locale>

using namespace std;

// Fungsi untuk menghapus karakter non-alphanumeric dari sebuah string
string removeNonAlphanumeric(string str) {
    string result = "";
    for (char c : str) {
        if (isalnum(c)) { // isalnum() memeriksa apakah karakter adalah alfanumerik
            result += tolower(c); // Mengubah karakter menjadi huruf kecil
        }
    }
    return result;
}

// Fungsi untuk menentukan apakah sebuah string adalah palindrom
bool isPalindrome(string str) {
    stack<char> charStack;
    int length = str.length();

    // Menambahkan setengah karakter pertama ke stack
    for (int i = 0; i < length / 2; i++) {
        charStack.push(str[i]);
    }

    // Memeriksa setengah karakter kedua dengan stack
    for (int i = (length + 1) / 2; i < length; i++) {
        if (charStack.top() != str[i]) {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main() {
    string input;
    cout << "Masukkan kalimat: ";
    getline(cin, input);

    // Menghapus karakter non-alphanumeric dan mengubah menjadi huruf kecil
    string cleanedInput = removeNonAlphanumeric(input);

    if (isPalindrome(cleanedInput)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}
```
#### Output:

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/0a82fbdd-87d7-4509-9898-64df7b730a67)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/099716b3-9645-40a4-9cb2-92161adfd000)

Kode tersebut merupakan program untuk menentukan apakah sebuah kalimat adalah palindrom atau bukan. Program akan meminta pengguna memasukkan sebuah kalimat, lalu kalimat yang dimasukkan oleh pengguna akan dibersihkan dari karakter non-alphanumeric (seperti spasi, tanda baca, dll.). Setelah itu, kalimat akan diubah menjadi huruf kecil untuk mempermudah pemrosesan. Program kemudian akan memeriksa apakah kalimat yang telah diberihkan tersebut merupakan palindrom atau bukan. Hasil dari pemeriksaan palindrom akan ditampilkan kepada pengguna. 

### 2. Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan
stack dengan minimal 3 kata. Jelaskan output program dan source codenya
beserta operasi/fungsi yang dibuat?

#### Source Code
```C++
//Lailatur Rahmah
//2311102177

#include <iostream>
#include <cstring>

using namespace std;

struct Tumpukan {
    char nama[50];
    int top;
} T;

void push(char x) {
    if (T.top == 49) { // Memeriksa apakah tumpukan sudah penuh
        cout << "Tumpukan sudah penuh";
    } else {
        T.top = T.top + 1;
        T.nama[T.top] = x; // Memasukkan karakter ke dalam tumpukan
    }
}

char pop() {
    char hasil;
    if (T.top == 0) { // Memeriksa apakah tumpukan sudah kosong
        cout << "Tumpukan sudah kosong";
        hasil = ' ';
    } else {
        hasil = T.nama[T.top]; // Mengambil karakter dari tumpukan
        T.top = T.top - 1; // Mengurangi indeks top untuk menunjuk ke elemen berikutnya
    }
    return hasil; // Mengembalikan karakter yang diambil dari tumpukan
}

int main() {
    int len;
    char kalimat[25];
    T.top = 0;

    cout << "Masukkan Kalimat: ";
    cin.getline(kalimat, 25); // Menerima masukan kalimat dari pengguna

    len = strlen(kalimat); // Menghitung panjang kalimat

    cout << "Kalimat Asli: " << kalimat; // Menampilkan kalimat asli yang dimasukkan pengguna

    for (int i = 0; i < len; i++) {
        push(kalimat[i]); // Memasukkan setiap karakter kalimat ke dalam tumpukan
    }

    cout << "\nKalimat Setelah dibalik: ";
    for (int i = 0; i < len; i++) {
        cout << pop(); // Mengambil dan menampilkan karakter dari tumpukan untuk membalikkan kalimat
    }
    cout << endl;

    return 0;
}
```

#### Output:

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/0b4d1b35-15cf-4ff6-8c51-df68824ebda6)

Program tersebut akan meminta pengguna memasukkan sebuah kalimat. Kalimat yang dimasukkan oleh pengguna akan dipecah menjadi karakter-karakter individu. Setiap karakter tersebut akan dimasukkan ke dalam tumpukan menggunakan konsep LIFO (Last In, First Out). Setelah semua karakter dimasukkan ke dalam tumpukan, tumpukan akan dibalik sehingga karakter yang pertama dimasukkan akan menjadi yang terakhir dikeluarkan. Karakter-karakter yang dikeluarkan dari tumpukan akan dicetak, sehingga menghasilkan kalimat yang dibalik. 

## Kesimpulan
Praktikum Modul Stack memberikan pemahaman yang lebih mendalam tentang struktur data stack dan penggunaannya dalam pemrograman. Melalui latihan-latihan yang diberikan, saya dapat memahami konsep stack, seperti LIFO (Last In, First Out), operasi dasar stack (push, pop, peek), dan berbagai aplikasi stack dalam menyelesaikan permasalahan pemrograman.

Saya memahami bahwa stack adalah struktur data linear yang menyimpan elemen dengan urutan LIFO. Elemen yang terakhir dimasukkan adalah yang pertama dikeluarkan. daei operasi dasar stack saya dapat menerapkan operasi dasar stack, seperti push (memasukkan elemen), pop (menghapus elemen), peek (melihat elemen teratas), dan isEmpty (memeriksa apakah stack kosong). Dan juga saya dapat menggunakan stack untuk menyelesaikan berbagai permasalahan pemrograman, seperti pembalikan kalimat dan mengecek palindrom.

## Referensi
[1] Santoso, J. T. Struktur data dan algoritma. Semarang: Yayasan Prima Agus Teknik; 2021.
