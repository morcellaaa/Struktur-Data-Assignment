# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Lailatur Rahmah</p>

## Dasar Teori

Tipe data adalah adalah sebuah pengklasifikasian data berdasarkan jenis data tersebut. Tipe data dibutuhkan agar kompiler dapat mengetahui bagaimana sebuah data akan digunakan.

## Guided 

### 1. Tipe Data Primitif
Tipe data ini merupakan tipe data built-in atau tipe data predefinisi dan digunakan secara langsung oleh user untuk mendeklarasikan suatu variabel. Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem, tipe data primitif ini disediakan oleh banyak bahasa pemrograman, perbedaannya terletak pada jumlah bit yang dialokasikan untuk setiap bit pada tipe data primitif tergantung pada bahasa pemrograman,compiler dan sistem operasinya. Contoh tipe data primitif adalah : 

a.	Integer : tipe data ini digunakan untuk menyimpan bilangan bulat seperti 1, 2, 3, dan seterusnya. Keyword yang digunakan untuk tipe data Integer adalah int. Berikut adalah contoh penggunaannya:

```C++
int x = 10;
```
b. Floating Point : tipe data ini digunakan untuk menyimpan bilangan pecahan seperti 2.5, 3.14, dan seterusnya. Keyword yang digunakan untuk tipe data floating point adalah float. Berikut adalah contoh penggunaannya:

```C++
float y = 3.14;
```
c. Character : tipe data ini digunakan untuk menyimpan karakter seperti ‘a’, ‘b’, ‘c’, dan seterusnya. Keyword yang digunakan untuk tipe data character adalah char. Berikut adalah contoh penggunaannya:

```C++
char z = 'a';
```
d. Boolean :  tipe data ini digunakan untuk menyimpan nilai boolean yang hanya memiliki dua nilai yaitu true dan false. Keyword yang digunakan untuk tipe data boolean adalah bool. Berikut adalah contoh penggunaannya:

```C++
bool is_true = true;
```
Contoh Program Tipe Data Primitif :
```C++
#include <iostream>
using namespace std;
// main program 
int main()
{
    char op;
    float num1, num2;
    // it allows user to enter operator i,e,+,-,*/
    cin >> op;
    // it allow user to enter the operands
    cin >> num1 >> num2;
    // switch statement begins
    switch (op){
        // if user enter +
    case '+':
        cout << num1 + num2;
        break;
        // if user enter -
    case '-':
        cout << num1 - num2;
        break;
        // if user enter *
    case '*':
        cout << num1 * num2;
        break;
        // if user enter /
    case '/':
        cout << num1 / num2;
        break;
        // if the operator is other than +,-,*,/
        // error message will display
    default:
    cout << "Error! operator is not correct";
    // switch statement ends
    }
    return 0;
}

```

### 2. Tipe Data Abstrak
Tipe data abstrak (ADT) dapat didefinisikan sebagai model matematika dari objek data yang menyempurnakan tipe data dengan cara mengaitkannya dengan fungsi-fungsi yang beroprasi pada data yang bersangkutan. ADT merupakan koleksi data dan operasi yang dapat digunakan untuk memanipulasi data tersebut

Dalam C++, ADT dapat dibuat dalam sebuah Class. Class dalam C++ merupakan pengembangan dari struct dalam bahasa pemrograman C. Class memiliki data dan fungsi. Data dan fungsi yang
dideklarasi private tidak dapat diakses secara langsung
oleh client, sementara data dan fungsi yang dideklarasi
public akan bersifat publik dan dapat diakses oleh client
secara langsung.

```C++
#include <stdio.h>

//Struct
struct Mahasiswa
{
    const char *name; 
    const char *address; 
    int ag
};

int main()
{

    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    // mengisi nilai ke struct mhs1.name = "Dian"; mhs1.address = "Mataram"; mhs1.age = 22;
    mhs2.name = "Bambang"; mhs2.address = "Surabaya";
    mhs2.age = 23;
    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}


```

### 3. Tipe Data Koleksi
Tipe data koleksi (Collection Data Type) adalah jenis tipe data dalam pemrograman yang dirancang khusus untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan. Tipe data koleksi memungkinkan kita untuk menyimpan, mengelola, dan mengakses data dengan cara yang terstruktur dan efisien. Berikut beberapa tipe data koleksi yang umum digunakan dalam pemrograman, antara lain:

a. Array : Array merupakan struktur data yang digunakan untuk menyimpan sekumpulan data dalam satu tempat. Setiap data dalam Array memiliki indeks, sehingga kita akan mudah memprosesnya. Indeks array selalu dimulai dari angka nol (0). Pada teori struktur data ukuran array akan bergantung dari banyaknya data yang disimpan di dalamnya.

```C++
// membuat array kosong dengan tipe data integer dan panjang 10
int nama_array[10];

// membuat array dengan langsung diisi
int nama_arr[3] = {0, 3, 2}
```
b. Vector : Vector merupakan bagian dari Standard Template Library (STL). Vector adalah Array dinamis, yakni array yang proses memungkinkan proses insert dan delete element pada bagian tengah array dan “seakan-akan” mengubah ukuran array tersebut.vector juga menyimpan elemen-elemen secara bersebelahan dan elemen tesebut dapat diakses sesuai subscript/index. Vector umumnya digunakan pemrogram karena alasan fleksibilitas (dalam hal ukuran) dan kecepatannya. Vector pada C/C++ juga dilengkapi dengan fitur-fitur pelengkap seperti element access, iterators, capacity, modifiers

c. Map : Map terasa mirip dengan array namun dengan index yang memungkinkan untuk berupa tipe data selain integer. Pada map, indeks tersebut diberi nama “key”. Pada std::map digunakan Self-Balancing Tree khususnya Red-Black Tree.

Contoh Program Tipe Data Koleksi
```C++
#include <iostream> 
using namespace std; 
int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5]; 
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    //mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl; 
    cout << "Isi array kedua :" << nilai[1] << endl; 
    cout << "Isi array ketiga :" << nilai[2] << endl; 
    cout << "Isi array keempat :" << nilai[3] << endl; 
    cout << "Isi array kelima :" << nilai[4] << endl; 
    return 0;
}

```

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream>
using namespace std;
int main() {

    int nilaiUjian1, nilaiUjian2, nilaiUjian3;
    float nilaiRataRata;
    char namaSiswa[10];
    bool lulus;

    cout << "Masukkan nama siswa: ";
    cin.getline(namaSiswa, 50);

    cout << "Masukkan nilai ujian pertama: ";
    cin >> nilaiUjian1;

    cout << "Masukkan nilai ujian kedua: ";
    cin >> nilaiUjian2;

    cout << "Masukkan nilai ujian ketiga: ";
    cin >> nilaiUjian3;

    nilaiRataRata = (nilaiUjian1 + nilaiUjian2 + nilaiUjian3) / 3.0;
    lulus = (nilaiRataRata >= 70);

    cout << "\nNama siswa: " << namaSiswa << endl;
    cout << "Nilai rata-rata: " << nilaiRataRata << endl;
    if (lulus) {
        cout << "Status: LULUS" << endl;
    } else {
        cout << "Status: TIDAK LULUS" << endl;
    }
    return 0;
}
```

Program tersebut adalah sebulah program C++ yang dibuat untuk menentukan kelulusan seorang siswa dari nilai ujian yang didapatnya. Tipe data ‘int’ digunakan untuk menyimoan nilai-nilai ujian. Ini adalah tipe bilangan bulat yang digunakan untuk angka-angka bulat sepeti nilai ujian. Tipe data ‘float’ digunakan untuk menyimpan nilai rata-rata. Tipe data ‘char’ (array of characters) digunakan untuk menyimpan nama siswa. Array digunakan untuk menyimpan kumpulan karakter yang membentuk nama siswa. Dan ‘bool’ digunakan untuk menyimpan status lulus atau tidak lulus. Tipe data ini memiliki dua nilai, yaitu ‘true’ atau ‘false’.

Dalam bahasa pemrograman C++, terdapat dua jenis tipe data yang umum digunakan yaitu tipe data primitif dan bukan primitif. Tipe data primitif digunakan untuk menyimpan data yang sederhana dan tidak kompleks seperti bilangan bulat, bilangan pecahan, karakter, dan nilai boolean. Oleh karena itu, pemahaman yang kuat tentang tipe data primitif adalah kunci untuk mengembangkan perangkat lunak yang efisien, aman, dan mudah dipahami.

#### Output:
![240302_00h00m06s_screenshot](2020-11-01 (05).png)

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)


### 2.	Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya.
a.  class adalah struktur data yang defaultnya itu private, jika objek anggota dari class ingin dipublikasikan, maka harus menggunakan (public. Class pada Swift merupakan reference type. Selama sebuah class tidak dinisialisasikan ulang, walaupun variabelnya berbeda, isi dari class tersebut saling berhubungan. Berikut adalah contoh programnya:
```C++
#include <iostream>
#include <string>
using namespace std;
class Pegawai {
public:
    string nama;
    int umur;
    double gaji;
    Pegawai(string nameR, int age, double salary) {
        nama = nameR;
        umur = age;
        gaji = salary;
    }

    void display() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Gaji: Rp" << gaji << endl;
    }
};

int main() {

    Pegawai pegawai1("Jaewook", 30, 250000.0);

    pegawai1.display();

    return 0;
}
```
#### Output:
![240302_00h00m06s_screenshot](2020-11-01 (05).png)

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)

b. Struct atau structure merupakan tipe data yang menyimpan beberapa data dengan default public, struct bermanfaat untuk mengelompokkan sejumlah data dengan tipe yang berlainan. Struct pada Swift adalah value type. Setiap data pada struct apabila dipindahkan ke variabel lain, maka setiap data yang tersimpan bisa berbeda dengan variabel lain.

```C++
#include <iostream>
#include <string>
using namespace std;

struct Pegawai {
    string nama;
    int umur;
    double gaji;
};

void display(const Pegawai& pegawai) {
    cout << "Nama: " << pegawai.nama << endl;
    cout << "Umur: " << pegawai.umur << endl;
    cout << "Gaji: Rp" << pegawai.gaji << endl;
}

int main() {
    Pegawai pegawai1 = {"Jaewook", 30, 250000.0};

    display(pegawai1);

    return 0;
}

```
#### Output:
![240302_00h00m06s_screenshot](2020-11-01 (05).png)

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)

### 3.	Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.
Perintah map mempermudah kita menjalankan sebuah fungsi terhadap banyak nilai masukan sekaligus. Perintah map menerima argumen berupa sebuah fungsi dan iterable (list,tuple,dst) . Perintah map memproses seluruh isi dari iterable yang diberikan satu demi satu dan meletakkan hasilnya pada sebuah map object. Map object dimaksud kemudian akan menjadi keluaran perintah map bersangkutan, yang selanjutnya dapat dikonversi kedalam bentuk list dengan perintah list(), set dengan perintah set(), dan seterusnya. Berikut adalah contoh program yang menggunakan fungsi map untuk menghitung frekuensi kemunculan setiap karakter dalam sebuah string:

```C++
#include <iostream>
#include <string>
#include <map>

std::map<char, int> hitung_frekuensi_karakter(const std::string& str) {
    std::map<char, int> frekuensi;
    for (char ela : str) { 
        frekuensi[ela]++;
    }
    return frekuensi;
}

int main() {
    std::string kalimat;
    std::cout << "Masukkan sebuah kalimat: ";
    std::getline(std::cin, kalimat);

    std::map<char, int> frekuensi_karakter = hitung_frekuensi_karakter(kalimat);

    std::cout << "Frekuensi kemunculan setiap karakter dalam kalimat:" << std::endl;
    for (const auto& pair : frekuensi_karakter) {
        std::cout << "'" << pair.first << "': " << pair.second << std::endl;
    }

    return 0;
}

```
#### Output:
![240302_00h00m06s_screenshot](2020-11-01 (05).png)

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)

## Kesimpulan

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
