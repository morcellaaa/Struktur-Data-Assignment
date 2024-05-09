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

int main() {
    cout << "ini adalah file code guided praktikan" << endl;
    return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Unguided 

### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan
dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari
depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/0a82fbdd-87d7-4509-9898-64df7b730a67)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/099716b3-9645-40a4-9cb2-92161adfd000)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 2. Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan
stack dengan minimal 3 kata. Jelaskan output program dan source codenya
beserta operasi/fungsi yang dibuat?

## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.