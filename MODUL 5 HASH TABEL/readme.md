# <h1 align="center">Laporan Praktikum Modul Hash Table</h1>
<p align="center">Lailatur Rahmah</p>

## Dasar Teori

### Pengertian Hash Table

Hash Table  adalah  generalisasi  dari  array.  Dengan  sebuah  array,  kita  menyimpan elemen yang kuncinya adalah k pada posisi k dari array. Artinya, dengan diberikan kunci k, kita menemukan elemen yang kuncinya adalah k hanya dengan melihat posisi ke-k dari array. Ini disebut pengalamatan langsung[1].

Pengalamatan  langsung  dapat  diterapkan  ketika  kita  mampu  mengalokasikan  array dengan satu posisi untuk setiap kunci yang mungkin. Tetapi jika kita tidak memiliki cukup ruang untuk   mengalokasikan  lokasi   untuk   setiap   kemungkinan   kunci,   maka   kita   memerlukan mekanisme untuk menangani kasus ini. Cara lain untuk mendefinisikan skenario adalah: jika kita  memiliki  lebih  sedikit  lokasi  dan  lebih  banyak  kemungkinan  kunci,  maka implementasi array sederhana tidak cukup.

Dalam kasus ini, satu opsi adalah menggunakan tabel hash. Tabel hash atau peta hash adalah struktur data yang menyimpan kunci dan nilai terkaitnya, dan tabel hash menggunakan fungsi  hash  untuk  memetakan  kunci  ke  nilai  terkaitnya.  Konvensi  umum  adalah  bahwa  kita menggunakan   tabel   hash   ketika   jumlah   kunci   yang   sebenarnya   disimpan   relatif   kecil dibandingkan dengan jumlah kunci yang mungkin.

### Fungsi Hash

Fungsi  hash  digunakan  untuk  mengubah  kunci  menjadi  indeks.  Idealnya,  fungsi  hash harus  memetakan  setiap  kunci  yang  mungkin  ke  indeks  slot  yang  unik,  tetapi  sulit  untuk dicapai dalam praktiknya.

Diberikan  kumpulan  elemen,  fungsi  hash  yang memetakan  setiap  item ke  dalam  slot unik disebut sebagai fungsi hash sempurna. Jika kita tahu elemen dan koleksinya tidak akan pernah   berubah,   maka   dimungkinkan   untuk   membangun   fungsi   hash   yang   sempurna. Sayangnya, mengingat kumpulan elemen yang berubah-ubah, tidak ada cara sistematis untuk membangun fungsi hash yang sempurna. Untungnya, kita tidak memerlukan fungsi hash yang sempurna untuk tetap mendapatkan efisiensi kinerja.

Salah  satu  cara  untuk  selalu  memiliki  fungsi  hash  yang  sempurna  adalah  dengan memperbesar  ukuran  tabel  hash  sehingga  setiap  nilai  yang  mungkin  dalam  rentang  elemen dapat diakomodasi. Ini menjamin bahwa setiap elemen akan memiliki slot unik. Meskipun ini praktis untuk sejumlah kecil elemen, itu tidak layak ketika jumlah elemen yang mungkin besar. Misalnya,  jika  elemennya  adalah  sembilan  digit  nomor  Jaminan  Sosial, metode  ini  akan membutuhkan hampir satu miliar slot. Jika kita hanya ingin menyimpan data untuk kelas yang terdiri dari 25 siswa, kita akan membuang banyak memori.

Metode  folding  untuk  membangun  fungsi  hash  dimulai  dengan  membagi  elemen menjadi  potongan-potongan  berukuran  sama  (potongan  terakhir  mungkin  tidak  berukuran sama). Potongan-potongan ini kemudian ditambahkan bersama untuk memberikan nilai hash yang  dihasilkan.  Misalnya,  jika  elemen kitaadalah  nomor  telepon  436-555-4601, kitaakan mengambil    angka    dan    membaginya    menjadi    kelompok    2    (43,65,55,46,01).    Setelah penambahan, 43+65+55+46+01, kita mendapatkan 210. Jika kita menganggap tabel hash kita memiliki  11  slot,  maka  kita  perlu  melakukan  langkah  ekstra  membagi  dengan  11  dan menyimpan sisanya. Dalam hal ini 210 % 11 adalah 1, jadi nomor telepon 436-555-4601 hash ke slot 1. Beberapa metode pelipatan melangkah lebih jauh dan membalikkan setiap bagian sebelum  penambahan. Untuk  contoh di  atas,  kita  mendapatkan  43+56+55+64+01=219  yang menghasilkan 219 % 11 = 10 [1].

Bagaimana Memilih Fungsi Hash?

Masalah dasar yang terkait dengan pembuatan tabel hash adalah:

  • Fungsi  hash  yang  efisien  harus  dirancang  sehingga  mendistribusikan  nilai  indeks  dari objek yang disisipkan secara seragam di seluruh tabel.
    
  • Algoritmaresolusi  tabrakan  yang  efisien  harus  dirancang  sedemikian  rupa  sehingga menghitung  indeks  alternatif  untuk  kunci  yang  indeks  hashnya  sesuai  dengan  lokasi yang sebelumnya dimasukkan dalam tabel hash.
    
  • Kita harus memilih fungsi hash yang dapat dihitung dengan cepat, mengembalikan nilai dalam rentang lokasi di tabel kita, dan meminimalkan tabrakan. 
    
Karakteristik Fungsi Hash yang Baik
    
Fungsi hash yang baik harus memiliki karakteristik sebagai berikut:
    
  • Minimalkan tabrakan
    
  • Mudah dan cepat untuk menghitung
    
  • Distribusikan nilai kunci secara merata di tabel hash
    
  • Gunakan semua informasi yang tersedia di kunci
    
  • Memiliki faktor beban tinggi untuk satu set kunci tertentu

### Operasi dalam Struktur Data Hash Table

1. Pencarian (Search): Digunakan untuk mencari elemen/data dalam Hash Table berdasarkan kunci atau indeksnya. Pencarian dilakukan dengan menggunakan fungsi hash untuk menghasilkan indeks elemen yang dicari[2].

2. Penyisipan (Insertion): Operasi ini digunakan untuk menyisipkan elemen/data baru ke dalam Hash Table. Elemen baru akan ditempatkan pada indeks yang dihasilkan oleh fungsi hash[2].

3. Penghapusan (Deletion): Digunakan untuk menghapus elemen/data dari Hash Table berdasarkan kunci atau indeksnya. Elemen yang dihapus akan dihapus dari indeks yang dihasilkan oleh fungsi hash[2].

4. Update: Operasi ini digunakan untuk mengubah nilai elemen/data yang sudah ada dalam Hash Table. Nilai elemen dapat diubah berdasarkan kunci atau indeksnya[2].

5. Collision Handling: Collision terjadi ketika dua atau lebih elemen memiliki indeks yang sama setelah melalui fungsi hash. Operasi ini digunakan untuk menangani collision dan memastikan bahwa elemen-elemen dengan indeks yang sama dapat disimpan dan diakses dengan benar[2].

6. Resize: Operasi ini digunakan untuk mengubah ukuran Hash Table jika jumlah elemen/data yang disimpan melebihi kapasitas yang ditentukan. Resize dilakukan untuk menjaga efisiensi dan kinerja Hash Table[2].

7. Iterasi: Operasi yang digunakan untuk mengakses dan memproses semua elemen/data yang ada dalam Hash Table secara berurutan[2].

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/e8491083-7de4-4029-8e27-0adaa07204ec)

## Guided 

### 1. Guided I

```C++
#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
// Fungsi hash sederhana
int hash_func(int key) {
    return key % MAX_SIZE;
}


// Struktur data untuk setiap node
struct Node {
   int key;
   int value;
   Node* next;
   Node(int key, int value) : key(key), value(value),
next(nullptr) {}
};


// Class hash table
class HashTable {
private:
    Node** table;
public:
    HashTable() {
        table = new Node*[MAX_SIZE]();
}
    ~HashTable() {
       for (int i = 0; i < MAX_SIZE; i++) {
           Node* current = table[i];
           while (current != nullptr) {
               Node* temp = current;
               current = current->next;
               delete temp;
       }
}
delete[] table;
}


// Insertion
void insert(int key, int value) {
    int index = hash_func(key);
    Node* current = table[index];
    while (current != nullptr) {
       if (current->key == key) {
           current->value = value;
           return;
       }
       current = current->next;
   }
    Node* node = new Node(key, value);
    node->next = table[index];
    table[index] = node;

}


// Searching
int get(int key) {
    int index = hash_func(key);
    Node* current = table[index];
    while (current != nullptr) {
       if (current->key == key) {
           return current->value;
       }
       current = current->next;

    }
    return -1;

}


// Deletion
void remove(int key) {
   int index = hash_func(key);
   Node* current = table[index];
   Node* prev = nullptr;
   while (current != nullptr) {
      if (current->key == key) {
          if (prev == nullptr) {
              table[index] = current->next;
          } else {
              prev->next = current->next;
          }
          delete current;
          return;
       }
        prev = current;
        current = current->next;

     }
}


// Traversal
void traverse() {
     for (int i = 0; i < MAX_SIZE; i++) {
          Node* current = table[i];
          while (current != nullptr) {
                cout << current->key << ": " << current->value << endl;

                current = current->next;
           }
      }
   }
};

int main() {
    HashTable ht;
    // Insertion
    ht.insert(1, 10);
    ht.insert(2, 20);
    ht.insert(3, 30);

    // Searching
    cout << "Get key 1: " << ht.get(1) << endl;
    cout << "Get key 4: " << ht.get(4) << endl;

    // Deletion
    ht.remove(4);

    // Traversal
    ht.traverse();

return 0;
}
```

#### Output:

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/74c0bfb5-c848-45c0-8de5-7c5a4dcda8f0)

Hash table digunakan untuk menyimpan pasangan kunci-nilai, di mana kunci digunakan sebagai indeks untuk mengakses nilai yang terkait. Dalam implementasi ini, setiap elemen hash table direpresentasikan oleh struktur data Node, yang berisi kunci, nilai, dan pointer ke node selanjutnya untuk menangani tabrakan. Pada awalnya, ukuran hash table ditentukan sebagai konstanta MAX_SIZE. Fungsi hash_func() digunakan untuk mengonversi kunci menjadi indeks dalam hash table dengan menggunakan operasi modulus terhadap MAX_SIZE. Setiap elemen hash table direpresentasikan oleh struktur data Node, yang memiliki dua anggota: key (kunci) dan value (nilai), serta pointer next untuk menangani tabrakan yang mungkin terjadi jika dua kunci menghasilkan indeks yang sama. Kelas HashTable menyediakan metode untuk menambahkan elemen (insert), mencari nilai berdasarkan kunci (get), menghapus elemen berdasarkan kunci (remove), dan menelusuri seluruh hash table (traverse). Dalam metode insert, jika indeks yang dihasilkan sudah berisi elemen lain, maka node baru ditambahkan ke awal daftar terkait di indeks tersebut. Dalam metode search, pencarian nilai dilakukan dengan menggunakan fungsi hash untuk menentukan indeks dan kemudian mencari node dengan kunci yang sesuai. Dalam metode remove, elemen dengan kunci yang diberikan dihapus dari hash table jika ditemukan. Fungsi traverse digunakan untuk mencetak seluruh isi hash table. Dalam fungsi main(), hash table dibuat, dan kemudian dilakukan serangkaian operasi seperti penambahan, pencarian, penghapusan, dan penelusuran pada hash table tersebut untuk menguji fungsionalitasnya.

### 2. Guided II

```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;
class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
             hash_val += c;
        }
    return hash_val % TABLE_SIZE;
    }
    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
table[hash_val].push_back(new HashNode(name,phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
               table[hash_val].erase(it);
               return;
            }
        }
    }
    string searchByName(string name) {
    int hash_val = hashFunc(name);
    for (auto node : table[hash_val]) {
         if (node->name == name) {
             return node->phone_number;
         }
    }
    return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
             cout << i << ": ";
                for (auto pair : table[i]) {
                if(pair != nullptr){
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";

                 }
               }
               cout << endl;
        }
     }
};

int main() {
HashMap employee_map;

employee_map.insert("Mistah", "1234");
employee_map.insert("Pastah", "5678");
employee_map.insert("Ghana", "91011");

cout << "Nomer Hp Mistah : " <<employee_map.searchByName("Mistah") << endl;
cout << "Phone Hp Pastah : " <<employee_map.searchByName("Pastah") << endl;

employee_map.remove("Mistah");
cout << "Nomer Hp Mistah setelah dihapus : " <<employee_map.searchByName("Mistah") << endl << endl;
cout << "Hash Table : " << endl;

employee_map.print();

return 0;
}
```

#### Output:

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/99ea82ab-fd43-4aed-85c8-47850d1c0a6a)

Dalam hash map ini, setiap entri direpresentasikan oleh objek HashNode yang menyimpan pasangan kunci-nilai. Kelas HashMap memiliki tabel hash, yang diimplementasikan sebagai array dari vektor yang berisi pointer ke HashNode. Fungsi hashFunc digunakan untuk mengonversi kunci (dalam hal ini, nama) menjadi indeks dalam tabel hash. Metode insert digunakan untuk menambahkan pasangan kunci-nilai baru ke dalam hash map. Jika kunci sudah ada, nilai yang terkait dengan kunci tersebut akan diperbarui. Metode remove digunakan untuk menghapus entri dari hash map berdasarkan kunci. Metode searchByName digunakan untuk mencari nilai berdasarkan kunci. Metode print digunakan untuk mencetak seluruh isi hash map. Dalam fungsi main(), hash map dibuat dan diuji dengan melakukan serangkaian operasi seperti penambahan, pencarian, dan penghapusan entri, serta pencetakan isi hash map untuk verifikasi.

## Unguided 

#### 1. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa
memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru,
menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan
nilai. Dengan ketentuan :

a. Setiap mahasiswa memiliki NIM dan nilai.

b. Program memiliki tampilan pilihan menu berisi poin C.

c. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).


```C++
// Lailatur Rahmah
// 2311102177

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_SIZE = 10;

// struktur data untuk setiap node
struct mahasiswa
{
    string nama;
    long long NIM;
    int nilai;
    mahasiswa *next; // pointer untuk menunjukkan node selanjutnya dalam collision handling

    mahasiswa(string nama, long long NIM, int nilai) : nama(nama), NIM(NIM), nilai(nilai), next(nullptr) {}
};

// class hash table
class HashTable
{
private:
    mahasiswa **table; // array pointer untuk menunjukkan ke elemen-elemen tabel hash

    // fungsi hash sederhana
    int hash_func(long long key)
    {
        return key % MAX_SIZE; // menggunakan modulus untuk mendapatkan indeks
    }

public:
    // constructor
    HashTable()
    {
        table = new mahasiswa *[MAX_SIZE](); // inisialisasi array pointer dengan nullptr
    }

    // destructor
    ~HashTable()
    {
        // menghapus semua node dan array pointer
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            mahasiswa *current = table[i];
            while (current != nullptr)
            {
                mahasiswa *temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // insertion
    void insert(string nama, long long NIM, int nilai)
    {
        int index = hash_func(NIM);                                 // mendapatkan indeks berdasarkan NIM
        mahasiswa *new_mahasiswa = new mahasiswa(nama, NIM, nilai); // membuat node baru
        new_mahasiswa->next = table[index];                         // menambahkan node baru ke depan daftar di indeks yang tepat
        table[index] = new_mahasiswa;
    }

    // deletion
    void remove(long long NIM)
    {
        int index = hash_func(NIM);        // mendapatkan indeks berdasarkan NIM
        mahasiswa *current = table[index]; // mengambil node pertama di indeks yang tepat
        mahasiswa *prev = nullptr;         // pointer untuk node sebelumnya
        while (current != nullptr)
        {
            if (current->NIM == NIM)
            {
                if (prev == nullptr)
                {
                    table[index] = current->next; // jika node yang dihapus adalah node pertama di indeks, atur node berikutnya sebagai node pertama
                }
                else
                {
                    prev->next = current->next; // jika bukan, hubungkan node sebelumnya dengan node setelahnya
                }
                delete current; // hapus node yang ditemukan
                cout << "Mahasiswa dengan NIM " << NIM << " telah dihapus." << endl;
                return;
            }
            prev = current;
            current = current->next;
        }
        cout << "Mahasiswa dengan NIM " << NIM << " tidak ditemukan." << endl;
    }

    // searching by NIM
    mahasiswa *cari_NIM(long long NIM)
    {
        long long index = hash_func(NIM);  // mendapatkan indeks berdasarkan NIM
        mahasiswa *current = table[index]; // mengambil node pertama di indeks yang tepat
        while (current != nullptr)
        {
            if (current->NIM == NIM)
            {
                return current; // kembalikan node jika NIM cocok
            }
            current = current->next;
        }
        return nullptr; // kembalikan nullptr jika tidak ditemukan
    }

    // searching by rentang nilai
    void cari_nilai(int awal, int akhir)
    {
        // mencetak header tabel
        cout << "-----------------------------------------------------------" << endl;
        cout << "|       Nama         |       NIM        |      Nilai      |" << endl;
        cout << "-----------------------------------------------------------" << endl;
        // traverse semua bucket pada tabel hash
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            mahasiswa *current = table[i]; // mengambil node pertama di indeks yang tepat
            // traverse semua node dalam bucket
            while (current != nullptr)
            {
                // jika nilai berada dalam rentang yang ditentukan, cetak informasi mahasiswa
                if (current->nilai >= awal && current->nilai <= akhir)
                {
                    cout << "| " << setw(19) << left << current->nama
                         << "| " << setw(17) << current->NIM
                         << "| " << setw(15) << current->nilai << " |" << endl;
                }
                current = current->next;
            }
        }
        cout << "-----------------------------------------------------------" << endl;
    }

    // traversal
    void traverse()
    {
        // mencetak header tabel
        cout << "-----------------------------------------------------------" << endl;
        cout << "|       Nama         |       NIM        |      Nilai      |" << endl;
        cout << "-----------------------------------------------------------" << endl;
        // traverse semua bucket pada tabel hash
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            mahasiswa *current = table[i]; // mengambil node pertama di indeks yang tepat
            // traverse semua node dalam bucket
            while (current != nullptr)
            {
                // cetak informasi mahasiswa
                cout << "| " << setw(19) << left << current->nama
                     << "| " << setw(17) << current->NIM
                     << "| " << setw(15) << current->nilai << " |" << endl;
                current = current->next;
            }
        }
        cout << "-----------------------------------------------------------" << endl;
    }
};

int main()
{
    HashTable ht;

    int pilih, nilai, awal, akhir;
    string nama;
    long long NIM;

    do
    {
        // menu utama
        cout << "\nMenu:" << endl;
        cout << "1. Tambah Data Mahasiswa" << endl;
        cout << "2. Hapus Data Mahasiswa" << endl;
        cout << "3. Cari berdasarkan NIM" << endl;
        cout << "4. Cari berdasarkan Rentang Nilai" << endl;
        cout << "5. Tampilkan Semua Data" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih menu : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            // tambah data mahasiswa
            cout << "Masukan nama : ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukan NIM : ";
            cin >> NIM;
            cout << "Masukan nilai : ";
            cin >> nilai;
            ht.insert(nama, NIM, nilai);
            cout<<"Data berhasil ditambahkan"<<endl;
            break;
        case 2:
            // hapus data mahasiswa berdasarkan NIM
            cout << "Masukan NIM yang ingin dihapus : ";
            cin >> NIM;
            ht.remove(NIM);
            break;
        case 3:
            // cari mahasiswa berdasarkan NIM
            cout << "Masukan NIM yang ingin dicari : ";
            cin >> NIM;
            {
                mahasiswa *mahasiswa_ptr = ht.cari_NIM(NIM);
                if (mahasiswa_ptr)
                {
                    cout << "Ditemukan mahasiswa dengan NIM " << NIM << " bernama " << mahasiswa_ptr->nama << " dan memiliki nilai " << mahasiswa_ptr->nilai << endl;
                }
                else
                {
                    cout << "mahasiswa dengan NIM " << NIM << " tidak ditemukan" << endl;
                }
            }
            break;
        case 4:
            // cari mahasiswa berdasarkan rentang nilai
            cout << "masukan nilai awal : ";
            cin >> awal;
            cout << "maukan nilai akhir : ";
            cin >> akhir;
            ht.cari_nilai(awal, akhir);
            break;
        case 5:
            // tampilkan semua data mahasiswa
            ht.traverse();
            break;
        case 6:
            cout << "Terimakasih" << endl; // keluar dari program
            break;
        default:
            cout << "Pilihan invalid!" << endl; // jika pilihan tidak valid
        }
    } while (pilih != 6); // ulangi sampai pengguna memilih untuk keluar

    return 0;
}
```
#### Output:

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/4b3689f3-a251-472d-8ef7-b408aee126eb)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/d3fbba44-6631-4ace-9eed-61b5d93029f1)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/5a7f7a1c-06c7-47f8-a39c-8c6a1c46811f)

Pada awalnya, struktur data mahasiswa didefinisikan dengan tiga anggota: nama, NIM, dan nilai. Selain itu, struktur data tersebut memiliki pointer next untuk menangani penanganan tabrakan. 

Kemudian, kelas HashTable didefinisikan untuk merepresentasikan hash table. Hash table ini diimplementasikan sebagai array dari pointer ke struktur data mahasiswa, dengan ukuran tabel yang telah ditentukan sebelumnya. Kelas ini memiliki metode-metode untuk melakukan operasi-operasi seperti insertion (penambahan data), removal (penghapusan data), searching (pencarian data) berdasarkan NIM, searching berdasarkan rentang nilai, dan traversal (penelusuran dan pencetakan seluruh data).

Di dalam fungsi main(), program memulai dengan menampilkan menu utama kepada pengguna, di mana pengguna dapat memilih operasi yang ingin dilakukan seperti menambahkan data mahasiswa, menghapus data mahasiswa, mencari data mahasiswa berdasarkan NIM, mencari data mahasiswa berdasarkan rentang nilai, menampilkan seluruh data mahasiswa, atau keluar dari program. Setelah pengguna memilih suatu operasi, program akan menjalankan kode sesuai dengan pilihan pengguna dan mengulangi proses menu tersebut sampai pengguna memilih untuk keluar.

Kode ini menyediakan fungsionalitas lengkap untuk manajemen data mahasiswa menggunakan hash table, termasuk penanganan tabrakan, pencarian, dan penampilan data.

## Kesimpulan

1. Dalam praktikum ini, dua implementasi hash table telah ditampilkan. Pertama, implementasi menggunakan array dan linked list untuk menangani tabrakan, dengan metode pencarian, penyisipan, penghapusan, dan traversal. Kedua, implementasi menggunakan vektor untuk menangani tabrakan, dengan metode pencarian berdasarkan NIM dan rentang nilai, penyisipan, penghapusan, dan pencetakan semua data.

2. Kedua implementasi tersebut menunjukkan cara kerja yang efisien dalam mengelola data menggunakan hash table. Mereka memberikan fleksibilitas dalam menangani tabrakan, memungkinkan penyimpanan data dengan efisien, dan memberikan kemampuan untuk melakukan operasi-operasi yang dibutuhkan seperti pencarian dan penyisipan dengan cepat.

3. Dari praktikum ini, kita dapat menyimpulkan bahwa hash table adalah alat yang kuat untuk mengelola dan mengakses data dengan cepat dan efisien. Dengan pemahaman yang baik tentang cara kerja hash table dan penerapannya, kita dapat membangun aplikasi yang dapat mengelola data dengan lebih baik, mempercepat pencarian dan manipulasi data, dan meningkatkan kinerja program secara keseluruhan.

## Referensi

[1] Santoso, Joseph, Teguh. Struktur Data dan Alogaritma (bagian 2). Semarang; 2021.

[2] Fernandez, Santiago, Tapia. Key Concepts, Weakness and Benchmark on Hash Table Data Structures. Spain; 2022.