# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Lailatur Rahmah</p>

## Dasar Teori

Linked list adalah strukur data linier berbentuk rantai simpul di mana setiap simpul menyimpan 2 item, yaitu nilai data dan pointer ke simpul elemen berikutnya. Berbeda dengan array, elemen linked list tidak ditempatkan dalam alamat memori yang berdekatan melainkan elemen ditautkan menggunakan pointer. Ukuran elemen dari linked list dapat bertambah secara dinamis dan mudah untuk menyisipkan dan menghapus elemen karena tidak seperti array, kita hanya perlu mengubah pointer elemen sebelumnya dan elemen berikutnya untuk menyisipkan atau menghapus elemen.

Kelebihan menggunakan Linked list adalah himpunan dinamis sehingga dapat bertambah dan menyusut saat runtime dengan mengalokasikan dan membatalkan alokasi memori. Jadi kita tidak perlu memberikan ukuran awal dari linked list. Dalam linked list, pemanfaatan memori yang efisien dapat dicapai karena ukuran linked list bertambah atau berkurang pada runtime sehingga tidak ada pemborosan memori dan tidak perlu mengalokasikan memori sebelumnya. Struktur data linier seperti stack dan queue seringkali mudah diimplementasikan menggunakan linked list. Operasi penyisipan dan penghapusan cukup mudah dalam linked list. Kita tidak perlu menggeser elemen setelah operasi penyisipan atau penghapusan elemen, hanya alamat yang ada di pointer berikutnya saja yang perlu diperbarui.

Adapun kekurangan Linked list memerlukan lebih banyak memori dibandingkan dengan array. Karena dalam linked list, pointer juga perlu menyimpan alamat elemen berikutnya dan membutuhkan memori tambahan untuk dirinya sendiri. Dalam traversal, linked list lebih banyak memakan waktu dibandingkan dengan array. Akses langsung ke elemen tidak bisa dilakukan pada linked list seperti array yang dapat akses elemen berdasarkan indeks. Untuk mengakses sebuah simpul pada posisi n dari linked list, kita harus melintasi semua simpul sebelumnya. Dalam single linked list, reverse traversing tidak dimungkinkan, tetapi dalam kasus double-linked list, ini dapat dimungkinkan karena berisi pointer ke node yang terhubung sebelumnya dengan setiap node. Untuk melakukannya, diperlukan memori tambahan untuk pointer sebelumnya sehingga ada pemborosan memori. Akses acak tidak bisa dilakukan dalam linked list karena alokasi memorinya yang dinamis.

### Single Linked List

Single Linked List adalah sebuah field pointer-nya hanya satu buah saja dan satu arah serta pada akhir node yang nodenya saling terhubung satu sama lain. Jadi Setiap node pada linked list mempunyai field yang berisi pointer ke node berikutnya, dan juga memiliki field yang berisi data. Node terakhir akan menunjuk ke NULL yang akan digunakan sebagai kondisi berhenti pada saat pembacaan isi linked list.

Untuk membuat Single Linked List dalam Pemrograman C++ diperlukan sebuah Struct untuk menbuat sebuah Node berikut Syntax pembuatan Node pada Pemrograman C++ :

```C++
struct TNode{
    int data;
    struct TNode *next;
};
```
Pada Syntax Tersebut Pembuatan struct bernama TNode yang berisi 2 field, yaitu field data bertipe integer dan field next yang bertipe pointer dari Tnode Setelah pembuatan struct, buat variabel head yang bertipe pointer dari SNode yang berguna sebagai kepala linked list.

Struct adalah sebuah structure dalam ANSI/C digunakan untuk membuat tipe data yang terdiri dari beberapa anggota (member) dengan tipe tertentu. berbeda dengan array hanya berupa kumpulan variabel yang bertipe data sama. struct bisa memiliki variabel-variabel yang bertipe data sama atau berbeda, bahkan bisa menyimpan variabel yang bertipe data array atau struct itu sendiri. Variabel-variabel yang menjadi anggota struct disebut dengan elemen struct.

Untuk melakukan inisialisasi Node baru pada pemrograman C++ gunakan keyword new yang berarti mempersiapkan sebuah node baru berserta alokasi memorinya, kemudian node tersebut diisi data dan pointer nextnya ditunjuk ke NULL. Berikut contohnya :

```C++
TNode *baru
baru = ne TNode;
baru->data = databaru;
baru->next = NULL;
```

Pada Single Linked List biasanya menggunakan Head. Head yang dimaksud ini adalah Kepala dari Single Linked List. Jadi dalam pemrograman diperlukan sebuah variabel pointer head untuk mebuat head Single Linked List. Head akan selalu menunjukkan Node Pertama seperti gambar berikut :

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/dc977ed1-2239-4099-a449-ef2da2e38ebb)

Dengan menggunakan struktur seperti ini, linked list dibentuk dengan cara menunjuk pointer next suatu elemen ke elemen yang
mengikutinya. Pointer next pada elemen terakhir merupakan NULL, yang menunjukkan akhir dari suatu list. Elemen pada awal suatu list disebut head dan elemen terakhir dari suatu list disebut tail.

### Double Linked List

Pada dasarnya, penggunaan Double Linked List hampir sama dengan penggunaan Single Linked List yang telah kita pelajari pada materi sebelumnya. Hanya saja Double Linked List menerapkan sebuah pointer baru, yaitu prev, yang digunakan untuk menggeser mundur selain tetap mempertahankan pointer next. Double linked list terdiri dari elemen-elemen individu, dimana masing-masing
dihubungkan dengan dua pointer. Masing-masing elemen terdiri dari tiga bagian, yaitu sebuah data dan sebuah pointer yang berisi alamat data berikutnya disebut dengan next dan pointer yang berisi alamat data sebelumnya disebut before. Dengan menggunakan struktur two-member seperti ini, linked list dibentuk dengan cara menunjuk pointer next suatu elemen ke elemen yang mengikutinya. Pointer before pada elemen terakhir merupakan NULL, yang menunjukkan awal dari suatu list. Pointer next pada elemen terakhir merupakan NULL, yang menunjukkan akhir dari suatu list. 

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/18c52c0c-3b92-4a5e-a07f-c4d4538ca646)

Double linked list dibentuk dengan menyusun sejumlah elemen sehingga pointer next menunjuk ke elemen yang mengikutinya dan pointer back menunjuk ke elemen yang mendahuluinya. Info adalah data yang digunakan dalam simpul, back adalah pointer yang menunjuk pada simpul sebelumnya, dan next adalah pointer yang menunjuk pada simpul sesudahnya.

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/256c9586-83d2-43b5-8974-7a28d68b1549)

Keuntungan dari Double Linked List adalah memungkinkan untuk melakukan operasi penghapusan dan penambahan pada simpul dimana saja dengan efisien, sehingga sangat berguna dalam implementasi beberapa algoritma yang
membutuhkan operasi tersebut. Selain itu, Double Linked List juga memungkinkan kita untuk melakukan traversal pada list baik dari depan (head) maupun dari belakang (tail) dengan mudah. Namun, kekurangan dari Double Linked List adalah penggunaan memori yang lebih besar dibandingkan dengan Single Linked List, karena setiap simpul membutuhkan satu pointer tambahan. Selain itu, Double Linked List juga membutuhkan waktu eksekusi yang lebih lama dalam operasi penambahan dan penghapusan jika dibandingkan dengan Single Linked List.

## Guided 

### 1. Latihan Single Linked List

```C++
#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
    // komponen/member
    int data;
    Node *next;
};
Node *head;
Node *tail;
// Inisialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}
// Tambah Depan
void insertDepan(int nilai)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}
// Tambah Belakang
void insertBelakang(int nilai)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}
// Hitung Jumlah List
int hitungList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
// Tambah Tengah
void insertTengah(int data, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
        bantu = head;
        int nomor = 1;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
// Hapus Depan
void hapusDepan()
{
    Node *hapus;
    if (isEmpty() == false)
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
// Hapus Belakang
void hapusBelakang()
{
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false)
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
// Hapus Tengah
void hapusTengah(int posisi)
{
    Node *hapus, *bantu, *bantu2;
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                bantu2 = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}
// Ubah Depan
void ubahDepan(int data)
{
    if (isEmpty() == false)
    {
        head->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Tengah
void ubahTengah(int data, int posisi)
{
    Node *bantu;
    if (isEmpty() == false)
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else
        {
            bantu = head;
            int nomor = 1;
            while (nomor < posisi)
            {
                bantu = bantu->next;
                nomor++;
            }
            bantu->data = data;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Belakang
void ubahBelakang(int data)
{
    if (isEmpty() == false)
    {
        tail->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Hapus List
void clearList()
{
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
// Tampilkan List
void tampil()
{
    Node *bantu;
    bantu = head;
    if (isEmpty() == false)
    {
        while (bantu != NULL)
        {
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
int main()
{
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7, 2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();
    return 0;
}
```
Program ini merupakan implementasi dari single linked list non-circular dalam bahasa C++. Program ini memungkinkan pengguna untuk menambahkan node baru di depan atau belakang linked list, menghapus node pertama atau terakhir, menambahkan node pada posisi tengah tertentu, menghapus node pada posisi tengah tertentu, serta mengubah nilai data dari node pertama, terakhir, atau pada posisi tengah tertentu. Setiap node dalam linked list menyimpan nilai data integer, dan fungsi-fungsi yang disediakan dalam program memungkinkan manipulasi linked list sesuai kebutuhan pengguna. Program tersebut juga menyediakan fungsi untuk menghitung jumlah node dalam linked list, membersihkan seluruh linked list, serta menampilkan nilai data dari semua node dalam linked list. Program diuji melalui serangkaian operasi untuk memastikan fungsionalitasnya sesuai dengan yang diharapkan.

### 2. Latihan Double Linked List

```C++
#include <iostream>
using namespace std;


class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```

Program ini adalah implementasi dari Double Linked List dalam bahasa C++. Dalam program ini, terdapat dua kelas utama kelas Node yang merepresentasikan node dalam linked list, dan kelas DoublyLinkedList yang merepresentasikan linked list itu sendiri. Setiap node memiliki tiga anggota: data yang menyimpan nilai data, prev yang merupakan pointer ke node sebelumnya, dan next yang merupakan pointer ke node berikutnya. Kelas DoublyLinkedList memiliki anggota head dan tail yang merupakan pointer ke node pertama dan terakhir dalam linked list. Fungsi push digunakan untuk menambahkan data baru di depan linked list, fungsi pop digunakan untuk menghapus data dari depan linked list, fungsi update digunakan untuk mengubah nilai data tertentu dalam linked list, fungsi deleteAll digunakan untuk menghapus seluruh data dalam linked list, dan fungsi display digunakan untuk menampilkan seluruh data dalam linked list. Program ini memberikan pilihan kepada pengguna untuk menambahkan, menghapus, mengubah, menghapus semua, menampilkan data, atau keluar dari program melalui menu yang disediakan.

## Unguided 

### 1. Soal mengenai Single Linked List

Buatlah program menu Single Linked List Non-Circular untuk
menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan
dari user. Lakukan operasi berikut:

a. Masukkan data sesuai urutan berikut. (Gunakan insert depan,
belakang atau tengah). Data pertama yang dimasukkan adalah
nama dan usia anda.

[Nama_anda] [Usia_anda]

    John        19
    Jane        20
    Michael     18
    Yusuke      19
    Akechi      20
    Hoshino     18
    Karin       18

b. Hapus data Akechi
c. Tambahkan data berikut diantara John dan Jane : Futaba 18
d. Tambahkan data berikut diawal : Igor 20
e. Ubah data Michael menjadi : Reyn 18
f. Tampilkan seluruh data

```C++
#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    string nama;
    int usia;
    Node* next;

    Node(string nama, int usia) {
        this->nama = nama;
        this->usia = usia;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void tambah_depan(string nama, int usia) {
        Node* new_node = new Node(nama, usia);
        new_node->next = head;
        head = new_node;
    }

    void tambah_belakang(string nama, int usia) {
        Node* new_node = new Node(nama, usia);
        if (head == nullptr) {
            head = new_node;
            return;
        }
        Node* last = head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = new_node;
    }

    void tambah_tengah(string nama, int usia, int posisi) {
        if (posisi < 1) {
            cout << "Posisi harus lebih besar dari 0." << endl;
            return;
        }
        if (posisi == 1) {
            tambah_depan(nama, usia);
            return;
        }
        Node* new_node = new Node(nama, usia);
        Node* current = head;
        int count = 1;
        while (current != nullptr && count < posisi - 1) {
            current = current->next;
            count++;
        }
        if (current == nullptr) {
            cout << "Posisi melebihi panjang linked list." << endl;
            return;
        }
        new_node->next = current->next;
        current->next = new_node;
    }

    void hapus(string nama) {
        Node* current = head;
        if (current != nullptr && current->nama == nama) {
            head = current->next;
            delete current;
            return;
        }
        Node* prev = nullptr;
        while (current != nullptr && current->nama != nama) {
            prev = current;
            current = current->next;
        }
        if (current == nullptr) {
            cout << nama << " tidak ditemukan dalam linked list." << endl;
            return;
        }
        prev->next = current->next;
        delete current;
    }

    void tampilkan() {
        Node* current = head;
        cout << "Data dalam linked list:" << endl;
        while (current != nullptr) {
            cout << current->nama << " " << current->usia << endl;
            current = current->next;
        }
    }
};

int main() {
    LinkedList linked_list;

    string nama_anda;
    int usia_anda;
    cout << "Masukkan nama Anda: ";
    cin >> nama_anda;
    cout << "Masukkan usia Anda: ";
    cin >> usia_anda;
    linked_list.tambah_depan(nama_anda, usia_anda);

    string nama_list[] = {"John", "Jane", "Michael", "Yusuke", "Akechi", "Hoshino", "Karin"};
    int usia_list[] = {19, 20, 18, 19, 20, 18, 18};
    for (int i = 0; i < 7; ++i) {
        linked_list.tambah_belakang(nama_list[i], usia_list[i]);
    }
    char choice;
    do {
        cout << "\nPilih operasi yang ingin dilakukan:" << endl;
        cout << "a. Tampilkan seluruh data" << endl;
        cout << "b. Hapus data" << endl;
        cout << "c. Tambahkan data di tengah" << endl;
        cout << "d. Tambahkan data di awal" << endl;
        cout << "e. Ubah data" << endl;
        cout << "f. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> choice;

        switch (choice) {
            case 'a': {
                linked_list.tampilkan();
                break;
            }
            case 'b': {
                string nama_hapus;
                cout << "Masukkan nama yang ingin dihapus: ";
                cin >> nama_hapus;
                linked_list.hapus(nama_hapus);
                break;
            }
            case 'c': {
                string nama_tambah;
                int usia_tambah, posisi;
                cout << "Masukkan nama yang ingin ditambahkan: ";
                cin >> nama_tambah;
                cout << "Masukkan usia yang ingin ditambahkan: ";
                cin >> usia_tambah;
                cout << "Masukkan posisi (indeks) tempat penambahan: ";
                cin >> posisi;
                linked_list.tambah_tengah(nama_tambah, usia_tambah, posisi);
                break;
            }
            case 'd': {
                string nama_tambah_awal;
                int usia_tambah_awal;
                cout << "Masukkan nama yang ingin ditambahkan di awal: ";
                cin >> nama_tambah_awal;
                cout << "Masukkan usia yang ingin ditambahkan di awal: ";
                cin >> usia_tambah_awal;
                linked_list.tambah_depan(nama_tambah_awal, usia_tambah_awal);
                break;
            }
            case 'e':
             {
                string nama_lama, nama_baru;
                int usia_baru;
                cout << "Masukkan nama yang ingin diubah: ";
                cin >> nama_lama;
                cout << "Masukkan nama baru: ";
                cin >> nama_baru;
                cout << "Masukkan usia baru: ";
                cin >> usia_baru;
                linked_list.hapus(nama_lama);
                linked_list.tambah_belakang(nama_baru, usia_baru);
                break;
            }
            case 'f': {
                cout << "Keluar dari program." << endl;
                break;
            }
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while(choice != 'f');

    return 0;
}
```
#### Output:

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/3c5b87c6-b8aa-45be-9804-9600c4cb0986)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/21fbd3b8-ef6e-4a5c-b84e-08c5fa7fa914)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/75081d7b-5c00-4b07-b83a-b6311ab4133e)

Program diatas akan meminta pengguna untuk memasukkan data mereka sendiri, yang akan menjadi data pertama dalam linked list (nama dan usia). Kemudian, program akan secara otomatis menambahkan data mahasiswa lain yang telah ditentukan ke dalam linked list. Pengguna dapat memilih berbagai operasi seperti menampilkan data, menghapus data, menambahkan data di tengah atau di awal, mengubah data, atau keluar dari program melalui menu yang disediakan. Misalnya, jika pengguna memilih untuk menambahkan data di tengah, program akan meminta nama, usia, dan posisi tempat penambahan data. Kemudian, program akan menambahkan data tersebut ke dalam linked list pada posisi yang ditentukan. Setiap operasi akan diproses sesuai dengan pilihan pengguna, dan data akan ditampilkan dengan format nama dan usia. Program akan terus berjalan hingga pengguna memilih untuk keluar.


### 2. Soal mengenai Double Linked List

Modifikasi Guided Double Linked List dilakukan dengan penambahan
operasi untuk menambah data, menghapus, dan update di tengah / di
urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya
menampilkan Nama produk dan harga.

[Nama Produk]    [Harga]

Originote        60.000

Somethinc        150.000

Skintific        100.000

Wardah           50.000

Hanasui          30.000

Case:
1. Tambahkan produk Azarine dengan harga 65000 diantara
Somethinc dan Skintific
2. Hapus produk wardah
3. Update produk Hanasui menjadi Cleora dengan harga 55.000
4. Tampilkan menu seperti dibawah ini
Toko Skincare Purwokerto
1. Tambah Data
2. Hapus Data
3. Update Data
4. Tambah Data Urutan Tertentu
5. Hapus Data Urutan Tertentu
6. Hapus Seluruh Data
7. Tampilkan Data
8. Exit

Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah
ini :

[Nama Produk]    [Harga]

Originote        60.000

Somethinc        150.000

Azarine          65.000

Skintific        100.000

Cleora           55.000

```C++
#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    string nama_produk;
    int harga;
    Node* prev;
    Node* next;

    Node(string nama_produk, int harga) {
        this->nama_produk = nama_produk;
        this->harga = harga;
        prev = nullptr;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void tambah_belakang(string nama_produk, int harga) {
        Node* new_node = new Node(nama_produk, harga);
        if (head == nullptr) {
            head = new_node;
            return;
        }
        Node* last = head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = new_node;
        new_node->prev = last;
    }

    void tambah_posisi(string nama_produk, int harga, int posisi) {
        if (posisi < 1) {
            cout << "Posisi harus lebih besar dari 0." << endl;
            return;
        }
        Node* new_node = new Node(nama_produk, harga);
        if (posisi == 1 || head == nullptr) {
            new_node->next = head;
            if (head != nullptr) {
                head->prev = new_node;
            }
            head = new_node;
            return;
        }
        Node* current = head;
        int count = 1;
        while (current != nullptr && count < posisi - 1) {
            current = current->next;
            count++;
        }
        if (current == nullptr) {
            cout << "Posisi melebihi panjang linked list." << endl;
            return;
        }
        new_node->next = current->next;
        new_node->prev = current;
        if (current->next != nullptr) {
            current->next->prev = new_node;
        }
        current->next = new_node;
    }

    void hapus(string nama_produk) {
        Node* current = head;
        while (current != nullptr && current->nama_produk != nama_produk) {
            current = current->next;
        }
        if (current == nullptr) {
            cout << "Produk " << nama_produk << " tidak ditemukan." << endl;
            return;
        }
        if (current->prev != nullptr) {
            current->prev->next = current->next;
        } else {
            head = current->next;
        }
        if (current->next != nullptr) {
            current->next->prev = current->prev;
        }
        delete current;
    }

    void update(string nama_produk_lama, string nama_produk_baru, int harga_baru) {
        Node* current = head;
        while (current != nullptr && current->nama_produk != nama_produk_lama) {
            current = current->next;
        }
        if (current == nullptr) {
            cout << "Produk " << nama_produk_lama << " tidak ditemukan." << endl;
            return;
        }
        current->nama_produk = nama_produk_baru;
        current->harga = harga_baru;
        cout << "Produk " << nama_produk_lama << " berhasil diupdate menjadi " << nama_produk_baru << " dengan harga " << harga_baru << endl;
    }

    void tampilkan() {
        Node* current = head;
        cout << "Nama Produk Harga" << endl;
        while (current != nullptr) {
            cout << current->nama_produk << " " << current->harga << endl;
            current = current->next;
        }
    }

    void hapus_seluruh_data() {
        Node* current = head;
        while (current != nullptr) {
            Node* next_node = current->next;
            delete current;
            current = next_node;
        }
        head = nullptr;
    }
};

int main() {
    LinkedList linked_list;

    linked_list.tambah_belakang("Originote", 60000);
    linked_list.tambah_belakang("Somethinc", 150000);
    linked_list.tambah_belakang("Skintific", 100000);
    linked_list.tambah_belakang("Wardah", 50000);
    linked_list.tambah_belakang("Hanasui", 30000);

    int choice;
    do {
        cout << "\nToko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;
        cout << "Pilihan: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string nama_produk;
                int harga;
                cout << "Masukkan nama produk: ";
                cin >> nama_produk;
                cout << "Masukkan harga: ";
                cin >> harga;
                linked_list.tambah_belakang(nama_produk, harga);
                break;
            }
            case 2: {
                string nama_produk_hapus;
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin >> nama_produk_hapus;
                linked_list.hapus(nama_produk_hapus);
                break;
            }
            case 3: {
                string nama_produk_lama, nama_produk_baru;
                int harga_baru;
                cout << "Masukkan nama produk yang ingin diupdate: ";
                cin >> nama_produk_lama;
                cout << "Masukkan nama produk baru: ";
                cin >> nama_produk_baru;
                cout << "Masukkan harga baru: ";
                cin >> harga_baru;
                linked_list.update(nama_produk_lama, nama_produk_baru, harga_baru);
                break;
            }
            case 4: {
                string nama_produk_tambah;
                int harga_tambah, posisi;
                cout << "Masukkan nama produk yang ingin ditambahkan: ";
                cin >> nama_produk_tambah;
                cout << "Masukkan harga: ";
                cin >> harga_tambah;
                cout << "Masukkan posisi untuk menambahkan data: ";
                cin >> posisi;
                linked_list.tambah_posisi(nama_produk_tambah, harga_tambah, posisi);
                break;
            }
            case 5: {

                break;
            }
            case 6: {
                linked_list.hapus_seluruh_data();
                cout << "Semua data telah dihapus." << endl;
                break;
            }
            case 7: {
                linked_list.tampilkan();
                break;
            }
            case 8: {
                cout << "Keluar dari program." << endl;
                break;
            }
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (choice != 8);

    return 0;
}
```
#### Output:

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/a8bcf264-7340-423a-a681-82aca6cbe4ae)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/d9ad6a6c-e4c6-4c86-9547-4ba23a5acb49)

Program di atas adalah implementasi dari aplikasi manajemen data produk skincare menggunakan Double Linked List dalam bahasa C++. Setiap node memiliki atribut nama_produk untuk menyimpan nama produk dan harga untuk menyimpan harga produk. Selain itu, setiap node memiliki pointer prev yang menunjukkan ke node sebelumnya dalam linked list, dan next yang menunjukkan ke node berikutnya. Kelas Linked List merepresentasikan linked list produk skincare. Setiap linked list memiliki satu pointer head yang menunjukkan ke node pertama dalam linked list. Program utama memungkinkan pengguna untuk melakukan berbagai operasi. Menu operasi mencakup menambah data, menghapus data, mengubah data, menambah data pada posisi tertentu, menghapus data pada posisi tertentu, menghapus seluruh data, menampilkan data, dan keluar dari program.

## Kesimpulan

Dalam praktikum ini, kami mempelajari konsep dasar dan implementasi dari linked list, termasuk single linked list dan double linked list, menggunakan bahasa pemrograman C++. Kami memahami bahwa linked list adalah struktur data linier yang terdiri dari simpul-simpul yang saling terhubung melalui pointer, dengan setiap simpul menyimpan data dan alamat ke simpul berikutnya (dan sebelumnya dalam double linked list). Kami juga memahami operasi dasar yang dapat dilakukan pada linked list, seperti penambahan, penghapusan, dan pembaruan elemen, serta bagaimana mengelola pointer untuk menjaga konsistensi struktur linked list.

Double linked list adalah modifikasi dari single linked list di mana setiap elemen memiliki dua pointer, yaitu satu pointer yang menunjuk ke elemen sebelumnya dan satu pointer yang menunjuk ke elemen berikutnya. Kelebihan double linked list adalah memungkinkan akses maju dan mundur dengan mudah. Operasi yang dilakukan dalam double linked list hampir sama dengan single linked list, namun dengan tambahan operasi untuk mengakses elemen sebelumnya. 

Dalam latihan unguided, kita telah mengimplementasikan kedua jenis linked list untuk memenuhi kebutuhan spesifik. Pada single linked list, kita menyimpan nama dan usia mahasiswa, sedangkan pada double linked list, kita menyimpan nama produk dan harganya. Operasi yang dilakukan meliputi penambahan, penghapusan, pembaruan, dan tampilan data sesuai dengan instruksi yang diberikan.

## Referensi

[1] Nugraha, Sakti, Aria, ARTIKEL DOUBLE LINKED LIST CIRCULATE (DLLC); 2019.

[2] Sindar, Anita. STRUKTUR DATA DAN ALGORITMA DENGAN C++. Medan;2019.

[3] Sari, Medina, Annisa. Pengertian Linked List: Struktur Data dalam Pemrograman. Medan;2023.

[4] Riyani, Cahya. PENJELASAN TENTANG STRUKTUR DATADOUBLE LINKED LIST. Sukabumi;2018