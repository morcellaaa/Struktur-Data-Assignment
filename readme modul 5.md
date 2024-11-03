<h2 align="center"><strong>LAPORAN PRAKTIKUM</strong></h2>
<h2 align="center"><strong>ALGORITMA DAN PEMROGRAMAN 2</strong></h2>

<br>

<h2 align="center"><strong>MODUL III</strong></h2>
<h2 align="center"><strong> FUNGSI </strong></h2>

<br>

<p align="center">

  <img src="https://github.com/user-attachments/assets/0a03461e-7740-4661-9e83-9925031bd72c" alt="Logo" width="200"/>

</p>

<br>

<p align="center">
  <strong>Disusun Oleh:</strong><br>
  LAILATUR RAHMAH / 2311102177<br>
  S1 IF 11 06
</p>

<br>

<p align="center">
  <strong>Dosen Pengampu:</strong><br>
  Abednego Dwi Septiadi
  
</p>

<br>

<p align="center">
  <strong>PROGRAM STUDI S1 TEKNIK INFORMATIKA</strong><br>
  <strong>FAKULTAS INFORMATIKA</strong><br>
  <strong>TELKOM UNIVERSITY PURWOKERTO</strong><br>
  <strong>2024</strong>
</p>

------

## Features

- [DASAR TEORI](#dasar-teori)
- [GUIDED](#guided)
- [UNGUIDED](#unguided)

## DASAR TEORI

**Definisi Rekursif**
Rekursif merupakan konsep pemrograman di mana sebuah fungsi memanggil dirinya sendiri untuk menyelesaikan suatu masalah. Fungsi rekursif akan terus memanggil dirinya sendiri hingga mencapai suatu kondisi dasar (base case) yang memungkinkan fungsi tersebut berhenti dan mengembalikan nilai.

**Beberapa karakteristik utama dari rekursif:**

* Base Case: Setiap fungsi rekursif harus memiliki kondisi dasar atau base case yang menghentikan rekursi. Jika tidak ada base case, rekursi akan terus berlanjut tanpa batas.
* Pengurangan Masalah: Setiap pemanggilan rekursif harus mengurangi masalah menjadi sub-masalah yang lebih kecil dan mendekati base case.
* Pemanggilan Diri Sendiri: Fungsi rekursif memanggil dirinya sendiri dengan argumen yang berbeda untuk menyelesaikan sub-masalah.
* Kemampuan Memecah Masalah: Rekursif sangat efektif untuk memecah masalah yang kompleks menjadi sub-masalah yang lebih sederhana dan dapat diselesaikan secara terpisah.

**Konsep Dasar Rekursif**
* Rekursi adalah teknik di mana fungsi menyelesaikan masalah dengan memanggil dirinya sendiri secara bertahap hingga mencapai kondisi akhir (base case), di mana proses rekursif dihentikan.
* Fungsi rekursif umumnya terdiri dari dua bagian utama:
  - Base Case: Kondisi yang menyebabkan fungsi berhenti memanggil dirinya sendiri.
  - Langkah Rekursif: Bagian di mana fungsi memanggil dirinya sendiri dengan parameter yang dimodifikasi, mendekati base case.

**2. Implementasi Fungsi Rekursif dalam Go**

Dalam Go, rekursi digunakan untuk menyelesaikan masalah seperti faktorial, deret Fibonacci, dan traversing pada struktur data seperti pohon atau grafik. Buku The Go Programming Language menjelaskan bahwa setiap pemanggilan rekursif menambah frame pada stack, yang memuat variabel lokal dan status fungsi. Ini berarti rekursi memerlukan perhatian ekstra pada base case agar tidak terjadi infinite loop.

Contoh implementasi rekursif sederhana untuk faktorial:

```go
func faktorial(n int) int {
    if n == 0 {
        return 1 // base case
    }
    return n * faktorial(n-1) // langkah rekursif
}
```

Di sini, faktorial akan terus memanggil dirinya sendiri dengan n yang lebih kecil, hingga n mencapai 0.

**3. Rekursif vs Iterasi**
* Menurut Go in Action, rekursi dapat membuat kode lebih mudah dipahami untuk masalah-masalah yang memiliki struktur berulang secara hierarkis, seperti pohon atau grafik. Namun, rekursi dapat menyebabkan pemborosan memori karena setiap pemanggilan fungsi baru menambahkan frame di stack.
* Rekursi memiliki potensi untuk menimbulkan stack overflow jika base case tidak tercapai dalam jumlah panggilan tertentu.

Contoh iterasi untuk menghitung faktorial:
```go
func faktorialIteratif(n int) int {
    hasil := 1
    for i := 1; i <= n; i++ {
        hasil *= i
    }
    return hasil
}
```

Kedua metode menghasilkan hasil yang sama, tetapi pendekatan rekursif lebih sesuai untuk masalah yang memiliki struktur berulang secara hierarkis.

**4. Manfaat dan Kekurangan Rekursif**
* Menurut Donovan dan Kernighan, rekursi sering kali lebih mudah dimengerti karena secara alami mengikuti alur masalah, tetapi membutuhkan perhatian ekstra terhadap base case.
* Buku Go in Action menekankan bahwa rekursi memungkinkan penulisan kode yang lebih ringkas, tetapi penggunaan berlebihan dapat menyebabkan pemborosan memori dan penurunan performa. Oleh karena itu, penting untuk memilih pendekatan rekursif atau iteratif sesuai dengan konteks permasalahan.


## GUIDED

### 1. Program tersebut menyusun sebuah program yang dapat mencetak bilangan secara mundur dari (n) hingga 1, di mana (n) adalah input yang diberikan oleh pengguna.

#### Source Code

```go

```

#### Screenshoot Output

#### Deskripsi Program


### 2. Program yang dapat menjumlahkan seluruh bilangan bulat dari 1 hingga (n), di mana (n) adalah nilai yang diinput oleh pengguna.

#### Source Code

```go

```

#### Screenshoot Output

#### Deskripsi Program

### 3. Program untuk menghitung nilai 2^n (dua pangkat (n)), di mana (n) adalah nilai yang diberikan oleh pengguna.

#### Source Code

```go

```

#### Screenshoot Output

#### Deskripsi Program

### 4. Program ini dirancang untuk menghitung faktorial dari suatu bilangan bulat positif n. Faktorial dari n, dinyatakan sebagai n!, adalah hasil perkalian semua bilangan bulat dari 1 hingga n.

#### Source Code

```go

```

#### Screenshoot Output

#### Deskripsi Program


## Unguided

### 1. Deret Fibonacci adalah sebuah deret dengan nilai suku ke-0 dan ke-1 adalah 0 dan 1, dan nilai suku ke-n selanjutnya adalah hasil penjumlahan dua suku sebelumnya. Secara umum dapat diformulasikan Sn = Sn-1 + Sn-2. Berikut ini adalah contoh nilai deret Fibonacci hingga suku ke-10. Buatlah program yang mengimplementasikan fungsi rekursif pada deret Fibonacci tersebut.

| n  | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8  | 9  | 10 |
|---|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sn | 0 | 1 | 1 | 2 | 3 | 5 | 8 | 13 | 21 | 34 | 55 |

#### Source Code

```go

```

#### Screenshoot Output

#### Alur Program

#### Deskripsi Program

### 2. Buatlah sebuah program yang digunakan untuk menampilkan pola bintang berikut ini dengan menggunakan fungsi rekursif. N adalah masukan dari user.

**Contoh masukan dan keluaran:**

| No | Masukan | Keluaran |
|---|---|---|
| 1 | 5 | *<br>**<br>***<br>****<br>***** |
| 2 | 1 | * |
| 3 | 3 | *<br>**<br>*** |

#### Source Code

```go

```

#### Screenshoot Output

#### Alur Program

#### Deskripsi Program


### 3. 

#### Source Code

```go

```

#### Screenshoot Output

#### Deskripsi Program

### 4. 

#### Source Code

```go

```

#### Screenshoot Output

#### Alur Program

#### Deskripsi Program

### 5. 

#### Source Code

```go

```

#### Screenshoot Output

#### Alur Program

#### Deskripsi Program

### 6. 

#### Source Code

```go

```

#### Screenshoot Output

#### Alur Program

#### Deskripsi Program
