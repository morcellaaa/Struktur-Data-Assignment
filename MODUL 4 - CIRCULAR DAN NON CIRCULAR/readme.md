# <h1 align="center">Laporan Praktikum Modul Linked List Circular dan Non Circular</h1>
<p align="center">Lailatur Rahmah</p>

## Dasar Teori

### A. CIRCULAR

Circular Linked List adalah suatu linked list yang tidak memiliki nilai nil/NULL untuk medan sambungannya. Circular Linked List dapat dilakukan terhadap Singly Linked List maupun Doubly Linked List. Dalam Circular Linked List tidak terdapat suatu simpul yang bernilai NULL. Hal ini terjadi karena simpul terakhir dihubungkan terhadap simpul 
pertama untuk Single Linked List dan simpul pertama dengan simpul terakhir saling terhubung untuk Double Linked List. Semua simpul berhak diperlakukan sebagai simpul depan [1].

### Circular Single Linked List

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/4d4ab057-c243-44de-a3e0-c303c9a65ff5)
   
Operasi-operasi yang ada pada Circular Single Linked List hamper sama seperti pada Single Linked List yang telah dibahas sebelumnya.
Operasi-operasinya sebagai berikut:

1. Penciptaan
   
   Penciptaan adalah memberikan nilai nil terhadap variabel pointer awal dan variabel pointer akhir.

   ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/fe80da68-715e-493c-985b-f761d90136f5)

2. Penyisipan
    
   a. Penyisipan di depan/awal
    
   Operasi ini berguna untuk menambahkan satu simpul baru di posisi pertama. Langkah pertama untuk penambahan data adalah pembuatan simpul baru dan mengisinya dengan data pada field info-nya. Pointer yang menunjuk ke simpul tersebut dipanggil dengan nama baru. Kondisi ketika akan menyisipkan simpul baru:

   •	List kosong {Awal=nil}

      -	Kondisi sebelum disisipkan
  
      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/36a55c95-1190-466c-9960-07c00093d575)

      -	Kondisi setelah operasi penyisipan

      Operasi penyisipan pertama kali ketika linked list masih kosong adalah dengan mengisikan alamat pointer baru ke pointer awal dan pointer akhir. Dan medan sambungan kanan(next) menunjuk ke simpul itu sendiri, seperti gambar di bawah ini:
  
      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/bb4f448d-4c77-4581-b3fa-8f9b9eadc982)

   •	List tidak kosong {Awal ≠ Nil} 

      - Keadaan list mula-mula:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/bf14e277-65ab-4dc1-9b73-e7cfb3cd878d)

      - Simpul yang akan disisipkan:
  
      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/3b857a51-cb9f-4022-a7f0-6579f1407c61)
  
      - Maka keadaan list setelah penyisipan di depan sebagai berikut:
  
      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/ffb64522-560c-4ef9-9d70-666e8203a4b0)


   b. Penyisipan di tengah

   Proses penyisipan di tengah sama seperti pada single linked list (lihat modul sebelumnya), karena tidak mengubah struktur circularnya
      
   •	List Kosong {Awal = Nil}	(Sama dengan penyisipan di depan)
      
   •	List tidak kosong {Awal ≠ Nil}

      - Mula-mula keadaan list sebagai berikut:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/5a344dfe-8e57-4089-be92-811d9e0a1233)

      - Akan menyisipkan angka 4 setelah angka 1

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/25b3d852-42cf-4864-b5db-58885da1291b)

      - Keadaan list setelah penyisipan di tengah sebagai berikut:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/1f3695dd-9bda-4941-a77e-5824dffd8a27)

   c. Penyisipan di akhir

   •	List kosong {Awal = Nil}	(Sama dengan penyisipan di depan)
   
   •	List tidak kosong (Awal ≠ Nil}

      - Mula-mula keadaan list sebagai berikut:
      
      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/8bc2407d-fe3e-4d3c-8fba-ccf675c18070)
      
      - Simpul yang akan disisipkan:
      
      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/4a5abed8-87b9-4fd2-9446-4c5605d6f217)
      
      - Maka keadaan list setelah penyisipan di depan sebagai berikut:
      
      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/718a40bb-21b4-4d39-a445-750c0707be24)

3. Penghapusan

Pada dasarnya proses penghapusan di circular sama seperti pada linear linked list. Ada 3 kondisi yang perlu diperhatikan yaitu kondisi linked list masih kosong, kondisi linked list hanya memiliki satu data, dan kondisi linked list yang memiliki lebih dari satu data (satu elemen)
Kondisi linked list kosong (Pada kondisi ini proses penghapusan tidak bisa dilakukan, dan kondisi ini disimpan di luar dari prosedur ini)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/c2f615a6-60ed-4708-986c-68995616c05f)

a. Penghapusan di depan

  Penghapusan data di awal adalah proses menghapus simpul pertama (yang ditunjuk oleh variabel pointer Awal), sehingga variabel pointer Awal akan berpindah ke simpul berikutnya, dan medan sambungan kanan (next) dari simpul yang ditunjuk oleh poiter akhir akan menunjuk ke simpul pertama yang baru (yang ditunjuk oleh pointer awal).

  •	Kondisi linked list memiliki hanya satu data{Satu simpul}

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/d9117b76-f9f2-4007-b6c7-7110303fda23)

  Ketika circular linked list hanya memiliki satu simpul, lalu ada proses penghapusan maka list akan kosong, dengan tahapan yang sama seperti di single linked list yang linear.

  •	Kondisi linked list memiliki lebih dari satu data {satu simpul}

  Keadaan mula-mula circular single linked list sebagai berikut:

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/e339203a-60d1-4631-88cf-624d528df171)

  Jika simpul pertama (yang ditunjuk oleh pointer awal) dihapus, maka circular single linked list menjadi seperti gambar di bawah ini:

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/ea57c4c3-ba6d-4748-bfa2-05083cb529ab)

  b. Penghapusan di tengah

  Proses penghapusan di tengah sama dengan single linked list (lihat modul sebelumnya), karena tidak mengubah struktur dari list, tapi kalau simpul yang akan dihapus ketemu di akhir, maka akan memanggil modul (prosedur) hapus di akhir/belakang.

  c. Penghapusan di belakang/akhir

  Penghapusan data di akhir adalah proses menghapus simpul terakhir (yang ditunjuk oleh variabel pointer Akhir), sehingga variabel pointer Akhir akan berpindah ke simpul sebelumnyanya, dan medan sambungan kanan (next) dari simpul yang ditunjuk oleh pointer Akhir yang baru akan menunjuk ke simpul pertama (yang ditunjuk pointer awal).

  •	Kondisi linked list memiliki hanya satu data (satu simpul)

  Sama seperti proses penghapusan di depan/awal.

  •	Kondisi linked list memiliki lebih dari satu data (satu simpul).

  - Keadaan mula-mula circular single linked list sebagai berikut:

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/87ccdfe4-5a28-485a-9523-758f430db543)

  - Jika simpul terakhir (yang ditunjuk oleh pointer akhir) dihapus, maka circular single linked list menjadi seperti gambar di bawah ini:

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/26fa9089-7465-4aa7-9e55-b59a48bfd112)

### Circular Double Linked List

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/061ea681-0fd1-4f61-bf82-3dae3775d466)

Operasi-operasi yang ada pada Circular Double Linked List hampir sama seperti pada Double Linked List yang telah dibahas sebelumnya.
Operasi-operasinya sebagai berikut [2] :

1. Penciptaan

Penciptaan adalah memberikan nilai nil terhadap variabel pointer awal dan variabel pointer akhir.

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/84f82c68-ea3e-410d-be6e-1e2c180278c1)

2. Penyisipan

   a. Penyisipan di depan/awal

   Operasi ini berguna untuk menambahkan satu simpul baru di posisi pertama. Langkah pertama untuk penambahan data adalah pembuatan simpul baru dan mengisinya dengan data pada field info-nya. Pointer yang menunjuk ke simpul tersebut dipanggil dengan nama baru.

   Ada 2 kondisi yang harus diperhatikan dalam penambahan data di awal yaitu :

   • Ketika linked list masih kosong

      Kalau kondisi linked list masih kosong, maka simpul baru akan menjadi simpul awal dan sekaligus simpul akhir dari circular double linked list.

   •	Kondisi sebelum disisipkan

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/7be3bf55-29fd-4085-bb3d-a8d65f82d717)

   •  Kondisi setelah operasi penyisipan

      Operasi penyisipan pertama kali ketika linked list masih kosong adalah dengan mengisikan alamat pointer baru ke pointer awal dan pointer akhir. Dan memberikan nilai nil pada medan sambungan kiri (prev) dan medan sambungan kanan(next). Lihat gambar di bawah ini:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/843f60a7-4752-40b9-ab7c-d8a363aa8e3d)

    • Ketika linked list tidak kosong

      Misalnya mula-mula keadaan list sebagai berikut:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/c35dfb2a-099e-4b9b-b732-e7c403cf8428)

    •	Misalkan akan menyisipkan data 2

    ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/a584da9b-449d-4191-a1d1-e3e6fcc56a76)

    •   Setelah simpul yang ada data 2 disisipkan di depan/awal, maka circular double linked list sebagai berikut:

    ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/57167c07-b642-4565-b2e1-cfc7fc9b7420)

    c. Penyisipan di tengah
    
    Proses penyisipan di tengah sama seperti pada double linked list (lihat modul sebelumnya), karena tidak mengubah struktur circularnya.
    
    Untuk proses tersebut ada 2 hal yang harus diperhatikan yaitu :
    
    •	Kondisi linked list masih kosong prosesnya sama seperti penyisipan di depan/awal.
    •	Kondisi linked list sudah mempunyai data (tidak kosong)
    Mula-mula keadaan linked list sebagai berikut:
    
    ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/a54a1128-4f44-4cce-a58c-497b9054445c)
    
    - Misalnya akan menyisipkan data 4 sebelum data 9 (untuk menyisipkan data setelahnya lihat kembali pada single linked list)

    ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/acd69815-770f-4c04-8769-c06983a72842)

    - Maka bentuk circular double linked list setelah mengalami penyisipan di tengah seperti gambar berikut:

    ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/5372468c-88ef-408f-992c-c6c819aeff8b)

    c. Penyisipan di belakang/akhir

    Operasi ini berguna untuk menambahkan elemen baru di posisi akhir. Langkah pertama untuk penambahan data adalah pembuatan elemen baru dan pengisian nilai infonya. Pointer yang menunjuk ke data tersebut dipanggil dengan nama baru. Misalkan akan menyisipkan data 9 di akhir.

    ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/08bb082f-ad8d-4b4c-8158-f2853ef9a6be)

    Ada 2 kondisi yang harus diperhatikan dalam penambahan data di akhir yaitu :

    •	Kondisi linked list masih kosong prosesnya sama seperti penyisipan di depan/awal.

    •	Ketika linked list sudah mempunyai data

      - Mula-mula list sebagai berikut:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/a55e3ff8-4fcc-44dd-a9fd-fac8661b5db8)

      - Setelah data (simpul) baru disisipkan di akhir, maka gambar dari circular double linked list sebagai berikut:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/a65346ce-733b-4e6c-a227-2b120ca23a89)

3. 	Penghapusan

    a. Penghapusan di awal

    Operasi ini berguna untuk menghapus data pada posisi pertama. Ada 3 keadaan yang mungkin terjadi ketika akan melakukan proses hapus yaitu :

    •	Kondisi linked list masih kosong
   	
    Jika kondisi ini terjadi, maka proses penghapusan data tidak bisa dilakukan karena linked list masih kosong.
   	
    •	Kondisi linked list hanya memiliki 1 data/simpul
   	
    Langkah yang perlu dilakukan ketika ingin melakukan proses penghapusan linked list yang memiliki hanya 1 data adalah dengan cara menempatkan dahulu satu pointer bantuan (phapus), kemudian medan data dari simpul yang akan dihapus disimpan ke dalam sebuah variabel (elemen), kemudian pointer awal dan akhir diberi harga nil dan simpul langsung dihapus. Untuk lebih jelas perhatikan urutan penghapusannya di bawah ini :

    - Kondisi sebelum dihapus:

    ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/e18d92cd-6da6-45a8-8e74-5220389076c9)
    
    - Kondisi setelah ada proses penghapusan:

    ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/3c5d5d5f-c3d5-45d9-a01f-d5db354e92d7)

    •	Kondisi linked list memiliki lebih dari satu data atau satu simpul Untuk operasi penghapusan data di posisi pertama pada circular double linked list yang mempunyai data lebih dari satu buah adalah :

    - Misalkan keadaan list mula-mula:

    ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/15fa91af-b85b-4b33-8131-79e0eeb762ad)

    - Setelah terjadi penghapusan di awal/depan, maka keadaan list menjadi:

    ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/0d929d00-7fc8-43d3-bff6-0dcfd395a575)

    b. Penghapusan di tengah

    Proses penghapusan di tengah sama dengan single linked list (lihat modul sebelumnya), karena tidak mengubah struktur dari list, tapi kalau simpul yang akan dihapus ketemu di akhir, maka akan memanggil modul (prosedur) hapus di akhir/belakang.

    c. Penghapusan di akhir

    Penghapusan data di akhir adalah proses menghapus simpul terakhir (yang ditunjuk oleh variabel pointer Akhir), sehingga variabel pointer Akhir akan berpindah ke simpul sebelumnyanya, dan medan sambungan kanan (next) dari simpul yang ditunjuk oleh pointer Akhir yang baru akan menunjuk ke simpul pertama (yang ditunjuk oleh pointer awal), dan medan sambungan kiri (prev) dari simpul yang ditunjuk oleh pointer awal menunjuk ke simpul terakhir (yang ditunjuk oleh pointer akhir).
    Ada 3 keadaan yang mungkin terjadi ketika akan melakukan proses hapus yaitu :

    • Kondisi linked list hanya memiliki satu data atau satu simpul

   	• Penghapusan di akhir prosesnya sama seperti penghapusan di depan

    •	Kondisi linked list memiliki lebih dari satu data atau lebih dari 1 simpul

    - Misalkan mula-mula keadaan list sebagai berikut:

    ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/2cd172fe-6911-4e54-a9fb-56d69a2e9c70)

    - Setelah proses penghapusan di akhir, maka keadaan circular double linked list menjadi:

    ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/7d9e3ff6-3bc9-4eeb-8af6-aa584b2699f8)

    d. 	Penelusuran/traversal

    Prosesnya secara umum sama seperti penelusuran pada single liked list atau double linked list (lihat modul sebelumnya).

    e.	Pencarian /Seaching
    
    Prosesnya secara umum sama seperti penelusuran pada single liked list atau double linked list (lihat modul sebelumnya).
    
    f.	Pengurutan/sorting
    
    Prosesnya secara umum sama seperti penelusuran pada single liked list atau double linked list (lihat modul sebelumnya).
    
    g.	Penghancuran/destroy
    Proses penghancuran bisa dengan cara memanggil modul/subrutin penghapusan di awal atau penghapusan di akhir secara terus menerus sampai list kosong, atau dengan cara:
    
    phapus <- awal 

### B. NON CIRCULAR

1. Pembentukan Node

Digunakan keyword new yang berarti mempersiapkan sebuah node baru
berserta alokasi memorinya, kemudian node tersebut diisi data dan pointer nextnya
ditunjuk ke NULL. Pembentukan node tidak dapat dilakukan sekaligus namun harus
satu persatu, hal ini berkaitan dengan bagaimana cara menyambungkan antar node
tersebut [4]. Contoh :

```C++
    baru = new gerbong;
    baru->data = databaru; //isi field data dengan databaru.
    baru->next = NULL; //pointer milik baru diarahkan ke NULL
```
2. Penambahan Node
   
  a. Penambahan di depan/awal 

  Penambahan node baru akan dikaitkan di gerbong paling depan. Tetapi jika
data masih kosong, maka penambahan data dilakukan denagn cara menunjuk head
pada gerbong tersebut.

  Ilustrasi Tambah Depan :

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/599ec3db-7090-4656-a275-5ee4ec01c17b)

  -> Data baru ditambahkan

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/5b5b6139-7a1f-4f33-aeda-4a7f809db934)

  -> Baru digandengkan dengan head

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/63804369-bce3-4bd2-9e93-d53a106f55d2)

  -> Head berpindah posisi menjadi di depan.

```C++
void tambahdepan(int databaru) {
    baru = new gerbong;
    baru->data = databaru;
    baru->next = NULL; //pointer milik baru diarahkan ke NULL
    if(head == NULL) {
        head = baru;
        head->next = NULL;
        tail = baru;
        tail->next = NULL;
    }   
    else {
        baru->next = head;
        head = baru;
    }
    printf("data masuk\n");
}
```
  b. Penambahan di belakang

  Penambahan data dibelakang akan selalu dikaitkan dengan tail karena tail
selalu berada di paling belakang gerbong. setelah dikaitkan dengan node, maka node
tersebut menjadi tail yang baru.

  Ilustrasi Tambah Belakang : 

  Fungsi tambah belakang sebagai berikut (inputan dinamis dari user) :

```C++
    void tambahbelakang(int databaru) {
        baru = new gerbong;
        baru->data = databaru;
        baru->next = NULL;
        if(head == NULL) {
            head = baru;
            head->next = NULL;
            tail = baru;
            tail->next = NULL;
        }
        else {
            tail->next = baru;
            tail = baru;
        }
        printf("data masuk\n");
    }
```

3. Penghapusan Node

Pada senarai berkepala, penghapusan sebuah list dilakukan jika ada list lain yang
bukan list "head" dalam barisan senarai tersebut. Dengan kata lain, list yang digunakan
sebagai "head" tidak boleh dihapus, "head” harus dipindahkan terlebih dahulu. Keyword
yang digunakan adalah delete. 

  a. Hapus Depan

  Fungsi ini akan menghapus data terdepan yang ditunjuk oleh head.
  Penghapusan tidak boleh dilakukan jika keadaaanya ditunjuk oleh pointer. Oleh
  karena itu, dilakukan penunjukan terlebih dahulu dengan pointer hapus yang menujuk
  pada head. Kemudian dilakukan pergeseran node sehingga node setelah head
  menjadi head yang baru. Kemudian menghapus pointer hapus dengan perintah delete.
  Jika tail masih NULL maka data masih kosong.

  Ilustrasi Hapus Depan :

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/01d31afa-fd2f-4901-85e9-e84b393341f1)

  Fungsi hapus depan :

```C++
    void hapusdepan() {
        if(head == NULL) {
            printf("data belum ada");
        }
        else if(head->next!=NULL) {
            hapus = head;
            head = head->next;
            delete hapus;
            printf("Data Terhapus\n");
        }
        else {
            head = NULL;
            printf("Data Terhapus\n");
        }
    }
```
  b. Hapus Belakang
  
  Karena adanya tail, maka penghapusan data dibelakang lebih mudah
  dilakukan. Penghapusan node tidak boleh dilakukan jika keadaan node sedang
  ditunjuk oleh pointer. Oleh karena itu dilakukan penujukan terlebih dahulu variable
  hapus pada tail. Kemudian dibutuhkan pointer bantu untuk membantu pergeseran dari
  head ke node berikutnya sampai sebelum tail, sehingga tail dapat ditunjukkan ke bantu
  tersebut, dan bantu tersebut akan menjadi tail yang baru. Setelah itu hapus pointer
  hapus dengan menggunakan perintah delete. Jika tail masih NULL maka berarti list
  masih kosong!

  Ilustrasi Hapus Belakang : 

  Fungsi hapus belakang :

```C++
    void hapusbelakang() {
        bantu = head;
        if(head==NULL) {
            printf("data belum ada");
        }
        else if(head == tail) {
            head = NULL;
            printf("Data Terhapus\n");
            tail = NULL;
        }
        else {
            hapus = tail;
            while(bantu->next != tail) {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
            printf("Data Terhapus\n");
        }
    }
```

4. Percetakan Node

Program untuk mencetak :

```C++
    bantu=head;
    printf("\n");
    while(bantu != NULL) {
        printf(" %i ", bantu->data);
        bantu = bantu->next;
    }
    printf("\n");
```

## Guided 

### 1. Circular

```C++
#include <iostream>

using namespace std;

/// PROGRAM SINGLE LINKED LIST CIRCULAR

// Deklarasi Struct Node
struct Node
{
    string data;
    Node *next;
};

Node *head, *tail, *baru, *bantu, *hapus;

void init()
{
    head = NULL;
    tail = head;
}

// Pengecekan
int isEmpty()
{
    if (head == NULL)
        return 1; // true
    else
        return 0; // false
}

// Buat Node Baru
void buatNode(string data)
{
    baru = new Node;
    baru->data = data;
    baru->next = NULL;
}

// Hitung List
int hitungList()
{
    bantu = head;
    int jumlah = 0;

    while (bantu != NULL)
    {
        jumlah++;
        bantu = bantu->next;
    }

    return jumlah;
}

// Tambah Depan
void insertDepan(string data)
{
    // Buat Node baru
    buatNode(data);

    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }
        baru->next = head;
        head = baru;
        tail->next = head;
    }
}

// Tambah Belakang
void insertBelakang(string data)
{
    // Buat Node baru
    buatNode(data);

    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }

        tail->next = baru;
        baru->next = head;
    }
}

// Tambah Tengah
void insertTengah(string data, int posisi)
{
    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        baru->data = data;
        // transversing
        int nomor = 1;
        bantu = head;
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
    if (isEmpty() == 0)
    {
        hapus = head;
        tail = head;

        if (hapus->next == head)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            delete hapus;

            while (tail->next != hapus)
            {
                tail = tail->next;
            }
            head = head->next;
            tail->next = head;
            hapus->next = NULL;

            delete hapus;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Hapus Belakang
void hapusBelakang()
{
    if (isEmpty() == 0)
    {
        hapus = head;
        tail = head;
        if (hapus->next == head)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            delete hapus;
            while (hapus->next != head)
            {
                hapus = hapus->next;
            }
            while (tail->next != hapus)
            {
                tail = tail->next;
            }
            tail->next = head;
            hapus->next = NULL;

            delete hapus;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Tengah
void hapusTengah(int posisi)
{
    if (isEmpty() == 0)
    {
        // transversing
        int nomor = 1;
        bantu = head;

        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;

        delete hapus;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus List
void clearList()
{
    if (head != NULL)
    {
        hapus = head->next;

        while (hapus != head)
        {
            bantu = hapus->next;
            delete hapus;
            hapus = bantu;
        }
        delete head;
        head = NULL;
    }
    cout << "List berhasil terhapus!" << endl;
}

// Tampilkan List
void tampil()
{
    if (isEmpty() == 0)
    {
        tail = head;
        do
        {
            cout << tail->data << ends;
            tail = tail->next;
        } while (tail != head);
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
    insertDepan("Ayam");
    tampil();
    insertDepan("Bebek");
    tampil();
    insertBelakang("Cicak");
    tampil();
    insertBelakang("Domba");
    tampil();
    hapusBelakang();
    tampil();
    hapusDepan();
    tampil();
    insertTengah("Sapi", 2);
    tampil();
    hapusTengah(2);
    tampil();

    return 0;
}
```
Program yang diberikan adalah implementasi dari single linked list circular dalam bahasa pemrograman C++. Program ini menggunakan struktur `Node` untuk merepresentasikan 
setiap elemen dalam linked list, dengan setiap `Node` memiliki dua anggota: `data` untuk menyimpan nilai dan `next` sebagai pointer ke `Node` selanjutnya. Fungsi `init()` 
digunakan untuk menginisialisasi pointer `head` dan `tail` ke nilai `NULL`, menandakan bahwa linked list masih kosong. Program menyediakan fungsi untuk menambahkan (`insertDepan()`, `insertBelakang()`, dan `insertTengah()`) dan menghapus (`hapusDepan()`, `hapusBelakang()`, dan `hapusTengah()`) elemen dari linked list, 
dengan melakukan pengecekan terlebih dahulu apakah linked list kosong atau tidak menggunakan fungsi `isEmpty()`. Pencetakan isi linked list dilakukan dengan fungsi `tampil()`, menggunakan iterasi `do-while` hingga kembali ke `head`, menunjukkan sifat circular dari linked list. 
Operasi-operasi ini diuji pada fungsi `main()` dengan beberapa penambahan, penghapusan, dan pencetakan elemen untuk memvalidasi fungsionalitas linked list yang diimplementasikan.

### 2. Non Circular

```C++
//LAILATUR RAHMAH
//2311102177

#include <iostream>
using namespace std;
/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
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
    Node *bantu, *hapus, *sebelum;
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
                sebelum = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        sebelum->next = bantu;
        delete hapus;
    }
}

// Ubah Depan
void ubahDepan(int data)
{
    if (isEmpty() == 0)
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
    if (isEmpty() == 0)
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1)
        {
        }
        else
        {
            cout << "Posisi bukan posisi tengah" << endl;

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
    if (isEmpty() == 0)
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
Program yang diberikan merupakan implementasi dari single linked list non-circular dalam bahasa pemrograman C++. 
Dalam program ini, setiap elemen dalam linked list direpresentasikan oleh struktur `Node`, yang memiliki dua anggota: `data` untuk menyimpan nilai dan `next` sebagai pointer ke `Node` selanjutnya. 
Program menyediakan fungsi untuk melakukan operasi dasar pada linked list, seperti menambahkan elemen di depan (`insertDepan()`), di belakang (`insertBelakang()`), dan di tengah (`insertTengah()`), 
serta menghapus elemen dari depan (`hapusDepan()`), belakang (`hapusBelakang()`), dan tengah (`hapusTengah()`). Selain itu, program juga menyediakan fungsi untuk mengubah nilai elemen di depan (`ubahDepan()`), 
di belakang (`ubahBelakang()`), dan di tengah (`ubahTengah()`), serta untuk menghitung jumlah elemen dalam linked list (`hitungList()`) dan membersihkan seluruh linked list (`clearList()`). Fungsi `tampil()` 
digunakan untuk mencetak isi linked list. Program ini diuji menggunakan beberapa operasi dasar untuk memvalidasi fungsionalitas linked list yang diimplementasikan.

## Unguided 

Buatlah program menu Linked List Non Circular untuk menyimpan Nama dan NIM mahasiswa, dengan menggunakan input dari user.

### 1. Buatlah menu untuk menambahkan, mengubah, menghapus, dan melihat Nama dan
NIM mahasiswa, berikut contoh tampilan output dari nomor 1:

```C++
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    Mahasiswa* next;
};

class CircularLinkedList {
private:
    Mahasiswa* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void tambahDepan(string nama, string nim) {
        Mahasiswa* newNode = new Mahasiswa();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Mahasiswa* temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
        cout << "\nData telah ditambahkan" << endl;
    }

    void tambahBelakang(string nama, string nim) {
        Mahasiswa* newNode = new Mahasiswa();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Mahasiswa* temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
        }
        cout << "\nData telah ditambahkan" << endl;
    }

    void tambahTengah(string nama, string nim, int posisi) {
        Mahasiswa* newNode = new Mahasiswa();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (posisi == 1) {
            tambahDepan(nama, nim);
            return;
        }

        Mahasiswa* temp = head;
        for (int i = 1; i < posisi - 1; ++i) {
            if (temp == nullptr || temp->next == head) {
                cout << "\nPosisi tidak valid" << endl;
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        cout << "\nData telah ditambahkan" << endl;
    }

    void ubahDepan(string namaBaru, string nimBaru) {
        if (head == nullptr) {
            cout << "\nLinked list kosong" << endl;
            return;
        }
        head->nama = namaBaru;
        head->nim = nimBaru;
        cout << "\nData depan berhasil diubah" << endl;
    }

    void ubahBelakang(string namaBaru, string nimBaru) {
        if (head == nullptr) {
            cout << "\nLinked list kosong" << endl;
            return;
        }

        Mahasiswa* temp = head;
        do {
            temp = temp->next;
        } while (temp->next != head);
        temp->nama = namaBaru;
        temp->nim = nimBaru;
        cout << "\nData belakang berhasil diubah" << endl;
    }

    void ubahTengah(string namaBaru, string nimBaru, int posisi) {
        if (head == nullptr) {
            cout << "\nLinked list kosong" << endl;
            return;
        }

        Mahasiswa* temp = head;
        for (int i = 1; i < posisi; ++i) {
            temp = temp->next;
            if (temp == head) {
                cout << "\nPosisi tidak valid" << endl;
                return;
            }
        }

        temp->nama = namaBaru;
        temp->nim = nimBaru;
        cout << "\nData di tengah berhasil diubah" << endl;
    }

    void hapusDepan() {
        if (head == nullptr) {
            cout << "\nLinked list kosong" << endl;
            return;
        }

        Mahasiswa* temp = head;
        if (temp->next == head) {
            delete temp;
            head = nullptr;
        } else {
            Mahasiswa* tail = head;
            while (tail->next != head)
                tail = tail->next;
            head = head->next;
            tail->next = head;
            delete temp;
        }
        cout << "\nData di depan berhasil dihapus" << endl;
    }

    void hapusBelakang() {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }

        Mahasiswa* temp = head;
        Mahasiswa* tail = nullptr;
        while (temp->next != head) {
            tail = temp;
            temp = temp->next;
        }

        if (temp == head) {
            delete temp;
            head = nullptr;
        } else {
            tail->next = head;
            delete temp;
        }
        cout << "\nData di belakang berhasil dihapus" << endl;
    }

    void hapusTengah(int posisi) {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }

        if (posisi == 1) {
            hapusDepan();
            return;
        }

        Mahasiswa* temp = head;
        Mahasiswa* prev = nullptr;
        for (int i = 1; i < posisi; ++i) {
            prev = temp;
            temp = temp->next;
            if (temp == head) {
                cout << "Posisi tidak valid" << endl;
                return;
            }
        }

        prev->next = temp->next;
        delete temp;
        cout << "\nData di tengah berhasil dihapus" << endl;
    }

    void hapusList() {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }

        Mahasiswa* temp = head;
        Mahasiswa* next;
        do {
            next = temp->next;
            delete temp;
            temp = next;
        } while (temp != head);
        head = nullptr;
        cout << "\nLinked list berhasil dihapus" << endl;
    }

    void tampilkanData() {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }
        Mahasiswa* temp = head;
        cout << "DATA MAHASISWA" << endl;
        cout << "NAMA\tNIM" << endl;
        do {
            cout << temp->nama << "\t" << temp->nim << endl;
            temp = temp->next;
        } while (temp != head);
    }

    ~CircularLinkedList() {
        if (head == nullptr)
            return;
        Mahasiswa* curr = head;
        Mahasiswa* next;
        do {
            next = curr->next;
            delete curr;
            curr = next;
        } while (curr != head);
    }
};

int main() {
    CircularLinkedList cll;
    int choice, posisi;
    string nama, nim;

    do {
        cout << "\nPROGRAM SINGLE LINKED LIST CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampilkan Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "\nPilih Operasi : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "-Tambah Depan-\n" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cll.tambahDepan(nama, nim);
                break;
            case 2:
                cout << "-Tambah Belakang-\n" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cll.tambahBelakang(nama, nim);
                break;
            case 3:
                cout << "-Tambah Tengah-\n" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                cll.tambahTengah(nama, nim, posisi);
                break;
            case 4:
                cout << "-Ubah Depan-\n" << endl;
                cout << "Masukkan Nama Baru : ";
                cin >> nama;
                cout << "Masukkan NIM Baru : ";
                cin >> nim;
                cll.ubahDepan(nama, nim);
                break;
            case 5:
                cout << "-Ubah Belakang-\n" << endl;
                cout << "Masukkan Nama Baru : ";
                cin >> nama;
                cout << "Masukkan NIM Baru : ";
                cin >> nim;
                cll.ubahBelakang(nama, nim);
                break;
            case 6:
                cout << "-Ubah Tengah-\n" << endl;
                cout << "Masukkan Nama Baru : ";
                cin >> nama;
                cout << "Masukkan NIM Baru : ";
                cin >> nim;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                cll.ubahTengah(nama, nim, posisi);
                break;
            case 7:
                cout << "-Hapus Depan-\n" << endl;
                cll.hapusDepan();
                break;
            case 8:
                cout << "-Hapus Belakang-\n" << endl;
                cll.hapusBelakang();
                break;
            case 9:
                cout << "-Hapus Tengah-\n" << endl;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                cll.hapusTengah(posisi);
                break;
            case 10:
                cout << "-Hapus List-\n" << endl;
                cll.hapusList();
                break;
            case 11:
                cout << "-Tampilkan Data-\n" << endl;
                cll.tampilkanData();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (choice != 0);

    return 0;
}
```

- Tampilan Menu
  
  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/39165663-ff51-47a5-812f-ea7b98d92dde)

- Tampilan Operasi Tambah

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/2e23b051-213e-45b2-802d-fce90f3cf287)

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/54ae0cad-73c2-4329-8c2d-670b8709ee7e)

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/cea99d3d-b3c3-4b73-9343-38b98f1a8efa)

- Tampilan Operasi Ubah

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/3da48809-ae92-42b3-aa69-c94f974979d3)

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/40dd5cd5-293f-4068-a2ec-69d3d9a2fc4f)

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/2ca01cad-9d65-4f13-a7a2-91afbee29f41)

- Tampilan Operasi Hapus

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/571ce935-155d-45ad-b6e3-2cd7f04fd2c1)

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/553d0ca3-7768-4194-8e19-bb0d661dcfe0)

  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/45eea484-1490-4625-9d65-817d63004d90)

- Tampilan Operasi Tampil Data
  
  ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/f5851bb4-3e5b-4349-87d0-37c4e24ae344)


### 2. Setelah membuat menu tersebut, masukkan data sesuai urutan berikut, lalu
tampilkan data yang telah dimasukkan. (Gunakan insert depan, belakang atau
tengah)

#### Output:

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/0f16bf90-7bf9-4574-a71a-8cd08f03c43d)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/e4c11dce-02c1-4e15-84ce-0c71e274383d)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/dad05c76-de08-4d13-ba55-e1f45928cb27)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/0bc1db8c-ece7-49c5-9adb-3eea9159bb8c)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/8f200b4c-725f-4fad-b923-20ea4a69c00c)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/8a2c41d2-24e9-4c59-b215-8e0da94d58d3)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/fec84a58-33c7-4b76-8b98-00d11b426500)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/35fc3733-94f3-4073-8f63-cec0e566e7e3)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/797b4f13-5729-4f53-8c08-f3b2215f148f)

![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/f5851bb4-3e5b-4349-87d0-37c4e24ae344)

Program yang diberikan adalah implementasi dari linked list circular dalam bahasa pemrograman C++. Program ini menggunakan struktur `Mahasiswa` untuk merepresentasikan setiap elemen dalam linked list, yang memiliki anggota `nama`, `nim`, dan `next` sebagai pointer ke elemen selanjutnya. Kelas `CircularLinkedList` menyediakan berbagai metode untuk melakukan operasi pada linked list, seperti menambahkan elemen di depan (`tambahDepan()`), di belakang (`tambahBelakang()`), dan di tengah (`tambahTengah()`), serta mengubah elemen di depan (`ubahDepan()`), di belakang (`ubahBelakang()`), dan di tengah (`ubahTengah()`), dan menghapus elemen dari depan (`hapusDepan()`), belakang (`hapusBelakang()`), dan tengah (`hapusTengah()`). Program juga menyediakan metode untuk menghapus seluruh linked list (`hapusList()`) dan menampilkan seluruh data dalam linked list (`tampilkanData()`). Dalam `main()`, program memberikan menu untuk pengguna untuk memilih operasi yang ingin dilakukan pada linked list, dan pengguna dapat memilih untuk keluar dengan memilih opsi 0. Program ini memanfaatkan konsep circular linked list, di mana elemen terakhir mengarah kembali ke elemen pertama, sehingga membentuk lingkaran.


3. Lakukan perintah berikut:

   a. Tambahkan data Wati 2330004 diantara Farrel dan Denis:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/aefc858e-50f7-4689-98f1-076d9093f216)

   b. Hapus data Denis

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/6b49aebf-995b-40a8-9c4f-a7c1bb2cbbd0)

   c. Tambahkan data Owi 2330000 di awal:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/2c81a836-e9ba-4c29-8e79-d98c3c848be3)

   d. Tambahkan data David 23300100 di akhir:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/6ab98974-b3d7-4321-88fc-abeebb4f9567)

   e. Ubah data Udin menjadi data Idin 23300045:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/c619b6d8-68e4-45a9-8d6f-040c5745ec03)

   f. Ubah data terkahir menjadi Lucy 23300101:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/6cc1483b-47fa-40d0-965a-7f7d290d8de2)

   g. Hapus data awal

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/1572166e-0dc7-4ba3-93e4-dc682ab23cb3)

   h. Ubah data awal menjadi Bagas 2330002:

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/bf3d132a-46fc-4549-bdf6-c74cec020001)

   i. Hapus data akhir

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/4d41a0c1-7c49-4ecd-b268-65b7c757e32e)

   j. Tampilkan seluruh data

      ![image](https://github.com/morcellaa/Struktur-Data-Assignment/assets/162486799/4de0ad37-fca4-44ac-8d2b-41edf6c56215)
   

## Kesimpulan

Linked List adalah struktur data yang penting dan sering digunakan dalam pemrograman.
Terdapat beberapa jenis linked list, termasuk Circular Linked List dan Non-Circular Linked List, masing-masing dengan kegunaan dan karakteristiknya sendiri.
Operasi-operasi dasar seperti penyisipan, penghapusan, pencarian, dan pengurutan bisa diterapkan pada kedua jenis linked list tersebut.
Pemahaman yang baik tentang konsep dan implementasi linked list diperlukan untuk mengembangkan aplikasi yang efisien dan andal.

## Referensi

[1] Pitaloka, Dyah, Widya. Circular Linked List; 2020.

[2] Nugraha, Sakti, Aria. ARTIKEL DOUBLE LINKED LIST CIRCULARE (DLLC); 2020.

[3] Shukur, Abed, Wisham., Ahmed Badrulddin, and Mohammed, Kamal, Nsaif. A proposed encryption technique of different texts using circular link lists; 2021.

[4] Putra, Kurniman, Agung. List linier ( linked list) Dan variasinya Struktur Data; 2019.
