<h2 align="center"><strong>LAPORAN PRAKTIKUM</strong></h2>
<h2 align="center"><strong>ALGORITMA DAN PEMROGRAMAN 2</strong></h2>

<br>

<h2 align="center"><strong>MODUL V</strong></h2>
<h2 align="center"><strong> REKURSIF </strong></h2>

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
package main

import "fmt"

// Fungsi untuk mencetak bilangan dari n hingga 1
func cetakMundur(n int) {
	if n == 1 {
		fmt.Println(n)
		return
	}
	fmt.Print(n, " ")
	cetakMundur(n - 1)
}

func main() {
	var n int
	fmt.Print("Masukkan nilai n untuk cetak bilangan dari n hingga 1: ")
	fmt.Scanln(&n)
	fmt.Print("Hasil cetak mundur: ")
	cetakMundur(n)
}
```

#### Screenshoot Output
![image](https://github.com/user-attachments/assets/e9045163-0868-44d7-bb64-aebebb5e4348)

#### Deskripsi Program

Program ini adalah sebuah aplikasi sederhana dalam bahasa Go yang mencetak bilangan secara mundur dari suatu nilai n yang dimasukkan oleh pengguna hingga 1. Program ini menggunakan fungsi rekursif cetakMundur, yang akan mencetak angka n, lalu memanggil dirinya sendiri dengan nilai n-1 hingga mencapai 1, di mana proses rekursif berhenti. Di dalam fungsi main, program meminta pengguna untuk memasukkan nilai n, kemudian menampilkan hasil bilangan mundur mulai dari n hingga 1 dalam satu baris.


### 2. Program yang dapat menjumlahkan seluruh bilangan bulat dari 1 hingga (n), di mana (n) adalah nilai yang diinput oleh pengguna.

#### Source Code

```go
package main

import "fmt"

// Fungsi untuk menghitung penjumlahan 1 hingga n
func jumlahRekursi(n int) int {
	if n == 1 {
		return 1
	}
	return n + jumlahRekursi(n-1)
}

func main() {
	var n int
	fmt.Print("Masukkan nilai n untuk penjumlahan 1 hingga n: ")
	fmt.Scanln(&n)
	fmt.Println("Hasil penjumlahan:", jumlahRekursi(n))
}
```

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/7c4807f2-4e28-4dc9-9d4d-1ba02395d164)

#### Deskripsi Program

Program ini adalah aplikasi dalam bahasa Go yang menghitung jumlah bilangan dari 1 hingga n dengan menggunakan rekursi. Program ini memiliki fungsi jumlahRekursi(n int) int, yang menerima input integer n dan mengembalikan jumlah bilangan dari 1 hingga n. Fungsi ini bekerja secara rekursif, di mana jika n bernilai 1, ia mengembalikan nilai 1 sebagai kasus dasar, dan jika lebih besar dari 1, ia menjumlahkan n dengan hasil pemanggilan fungsi jumlahRekursi(n-1). Dalam fungsi main, program meminta pengguna untuk memasukkan nilai n, lalu memanggil jumlahRekursi untuk menghitung jumlah tersebut dan menampilkan hasilnya.

### 3. Program untuk menghitung nilai 2^n (dua pangkat (n)), di mana (n) adalah nilai yang diberikan oleh pengguna.

#### Source Code

```go
package main

import "fmt"

// Fungsi untuk mencari 2 pangkal n
func pangkatDua(n int) int {
	if n == 0 {
		return 1
	}
	return 2 * pangkatDua(n-1)
}

func main() {
	var n int
	fmt.Print("Masukkan nilai n untuk mencari 2 pangkat n: ")
	fmt.Scanln(&n)
	fmt.Println("Hasil 2 pangkat", n, ":", pangkatDua(n))
}
```

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/5d044c55-c1d0-4b0c-ac1c-78974489a46a)

#### Deskripsi Program

Program ini adalah aplikasi dalam bahasa Go yang menghitung nilai \(2\) pangkat \(n\) menggunakan rekursi. Program ini memiliki fungsi pangkatDua(n int) int, yang menerima input integer n dan mengembalikan hasil dari \(2^n\). Fungsi ini menggunakan rekursi dengan memeriksa terlebih dahulu apakah nilai n sama dengan 0; jika n adalah 0, maka fungsi mengembalikan 1 sebagai hasil (karena \(2^0 = 1\)). Jika n lebih besar dari 0, fungsi mengalikan 2 dengan hasil panggilan pangkatDua(n-1), sehingga nilai n berkurang satu setiap kali hingga mencapai kasus dasar. Pada fungsi main, program meminta pengguna untuk memasukkan nilai n, lalu memanggil pangkatDua untuk menghitung hasilnya dan mencetak hasilnya ke layar.

### 4. Program ini dirancang untuk menghitung faktorial dari suatu bilangan bulat positif n. Faktorial dari n, dinyatakan sebagai n!, adalah hasil perkalian semua bilangan bulat dari 1 hingga n.

#### Source Code

```go
package main

import "fmt"

// Fungsi untuk menghitung faktorial n!
func faktorial(n int) int {
	if n == 0 || n == 1 {
		return 1
	}
	return n * faktorial(n-1)
}

func main() {
	var n int
	fmt.Print("Masukkan nilai n untuk mencari faktorial n!: ")
	fmt.Scanln(&n)
	fmt.Println("Hasil faktorial dari", n, ":", faktorial(n))
}
```

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/e178e960-22d3-4c5d-9741-7a195eccbb76)

#### Deskripsi Program

Program ini adalah aplikasi dalam bahasa Go yang menghitung nilai faktorial dari sebuah bilangan n menggunakan rekursi. Program ini memiliki fungsi faktorial(n int) int, yang menerima input integer n dan mengembalikan hasil faktorial dari n (yaitu \( n! \)). Fungsi ini menggunakan rekursi dengan menentukan bahwa jika n adalah 0 atau 1, maka fungsi mengembalikan 1 sebagai kasus dasar (karena \( 0! = 1! = 1 \)). Jika n lebih besar dari 1, fungsi mengalikan n dengan hasil dari faktorial(n-1), sehingga nilai n berkurang satu setiap kali hingga mencapai kasus dasar. Di dalam fungsi main, program meminta pengguna untuk memasukkan nilai n, lalu memanggil faktorial untuk menghitung faktorial dari n dan mencetak hasilnya ke layar.

## Unguided

### 1. Deret Fibonacci adalah sebuah deret dengan nilai suku ke-0 dan ke-1 adalah 0 dan 1, dan nilai suku ke-n selanjutnya adalah hasil penjumlahan dua suku sebelumnya. Secara umum dapat diformulasikan Sn = Sn-1 + Sn-2. Berikut ini adalah contoh nilai deret Fibonacci hingga suku ke-10. Buatlah program yang mengimplementasikan fungsi rekursif pada deret Fibonacci tersebut.

| n  | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8  | 9  | 10 |
|---|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sn | 0 | 1 | 1 | 2 | 3 | 5 | 8 | 13 | 21 | 34 | 55 |

#### Source Code

```go
// LAILATUR RAHMAH
// 2311102177
// IF 11 06

package main

import (
	"fmt"
)

func fibonacci(n int) int {
	if n <= 1 {
		return n
	}
	return fibonacci(n-1) + fibonacci(n-2)
}

func main() {
	for i := 0; i <= 10; i++ {
		fmt.Printf("Fibonacci(%d) = %d\n", i, fibonacci(i))
	}
}
```

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/65030e8e-f291-491a-b5c6-b13822902382)

#### Alur Program

* **Import Paket:** Program dimulai dengan mengimpor paket fmt, yang diperlukan untuk melakukan input dan output ke konsol.
  
* **Definisi Fungsi fibonacci(n int) int:
  * Fungsi ini didefinisikan untuk menghitung nilai Fibonacci pada indeks ke-n.
  * Kasus Dasar:
    - Jika n adalah 0, fungsi mengembalikan 0.
    - Jika n adalah 1, fungsi mengembalikan 1.
  * Kasus Rekursif:
    - Jika n lebih besar dari 1, fungsi memanggil dirinya sendiri untuk menghitung nilai Fibonacci pada dua indeks sebelumnya, yaitu fibonacci(n-1) dan fibonacci(n-2), dan menjumlahkan kedua hasil tersebut.
   
* **Fungsi main():**
  - Program memasuki fungsi main, yang merupakan titik awal eksekusi program.
Di dalam main, terdapat sebuah loop for yang berjalan dari 0 hingga 10.
  - Pada setiap iterasi, variabel i mewakili indeks yang sedang dihitung dalam deret Fibonacci.
  - Untuk setiap nilai i, program memanggil fungsi fibonacci(i) untuk menghitung nilai Fibonacci ke-i.
  - Hasil dari pemanggilan fungsi fibonacci(i) dicetak ke konsol menggunakan fmt.Printf, dalam format Fibonacci(i) = hasil.

#### Deskripsi Program

Program ini adalah implementasi dalam bahasa Go untuk menghitung dan menampilkan nilai deret Fibonacci dari 0 hingga 10 menggunakan fungsi rekursif. Fungsi fibonacci(n int) int mengembalikan nilai Fibonacci ke-n, dengan kasus dasar mengembalikan n jika n adalah 0 atau 1. Untuk nilai n yang lebih besar, fungsi menjumlahkan hasil fibonacci(n-1) dan fibonacci(n-2). Di fungsi main(), program mencetak nilai Fibonacci dari 0 hingga 10 dalam sebuah loop, menampilkan hasilnya dengan format Fibonacci(i) = hasil. Pendekatan rekursif ini sederhana namun kurang efisien untuk nilai n yang besar, karena menghitung ulang nilai yang sama beberapa kali; solusi yang lebih optimal dapat dicapai dengan memoization atau iterasi untuk menghindari perhitungan yang berulang.

### 2. Buatlah sebuah program yang digunakan untuk menampilkan pola bintang berikut ini dengan menggunakan fungsi rekursif. N adalah masukan dari user.

**Contoh masukan dan keluaran:**

   | No | Masukan | Keluaran        |
   |----|---------|-----------------|
   | 1  | 5       | *               |
   |    |         | **              |
   |    |         | ***             |
   |    |         | ****            |
   |    |         | *****           |
   | 2  | 1       | *               |
   | 3  | 3       | *               |
   |    |         | **              |
   |    |         | ***             |

#### Source Code

```go
// LAILATUR RAHMAH
// 2311102177
// IF 11 06

package main

import "fmt"

// Fungsi utama
func main() {
	var n int
	fmt.Print("Masukkan nilai N: ")
	fmt.Scanln(&n)
	printStar(n) // Memanggil fungsi printStar untuk mencetak pola bintang
}

// Fungsi rekursif untuk mencetak pola bintang
func printStar(n int) {
	// Basis rekursi: jika n == 0, hentikan rekursi
	if n == 0 {
		return
	}

	// Memanggil printStar dengan nilai n-1 (rekursi menurun)
	printStar(n - 1)

	// Setelah kembali dari rekursi, cetak bintang sebanyak nilai n
	for i := 0; i < n; i++ {
		fmt.Print("*")
	}
	fmt.Println() // Pindah ke baris baru setelah mencetak bintang
}
```

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/2d68d9fa-f59d-4da0-a5dd-7dee3cc6be23)

#### Alur Program

* **Impor Paket:** Mengimpor paket untuk input/output.
* **Input Pengguna:** Meminta pengguna memasukkan nilai N.
* **Memanggil Fungsi:** Memanggil fungsi printStar(n) dengan nilai N yang dimasukkan.
* Fungsi Rekursif:
  - Jika n == 0, menghentikan rekursi.
  - Memanggil dirinya sendiri dengan n-1.
  - Setelah panggilan rekursif, mencetak bintang sebanyak n dan pindah ke baris baru.

#### Deskripsi Program

Program ini mencetak pola segitiga bintang dengan tinggi yang ditentukan oleh pengguna menggunakan fungsi rekursif dalam bahasa Go. Di dalam fungsi main, pengguna diminta untuk memasukkan nilai n, yang akan menentukan tinggi pola segitiga. Fungsi printStar(n int) kemudian dipanggil untuk mencetak pola tersebut. Fungsi ini menggunakan rekursi untuk mencetak setiap baris bintang, dengan basis rekursi n == 0 yang menghentikan proses. Untuk setiap nilai n, fungsi pertama-tama memanggil dirinya sendiri dengan n-1, lalu mencetak n bintang dalam satu baris. Hasilnya adalah segitiga bintang terbalik, di mana setiap baris memiliki jumlah bintang yang semakin berkurang. Contohnya, jika n = 5, pola yang dicetak adalah segitiga dengan baris bintang berturut-turut dari 5 hingga 1.

### 3. Buatlah program yang mengimplementasikan rekursif untuk menampilkan faktor bilangan dari suatu N, atau bilangan yang apa saja yang habis membagi N.
### Masukan terdiri dari sebuah bilangan bulat positif N.
### Keluaran terdiri dari barisan bilangan yang menjadi faktor dari N (terurut dari 1 hingga N ya).

**Contoh masukan dan keluaran:**

| No | Masukan | Keluaran |
|---|---|---|
| 1 | 5 | 1 5 |
| 2 | 12 | 1 2 3 4 6 12 |

#### Source Code

```go
// LAILATUR RAHMAH
// 2311102177
// IF 11 06

package main

import "fmt"

// Fungsi utama
func main() {
	var n int
	fmt.Print("Masukkan bilangan bulat positif: ")
	fmt.Scanln(&n)

	// Memanggil fungsi faktor dan mencetak hasilnya
	fmt.Println("Faktor dari", n, "adalah:", faktor(n, 1))
}

// Fungsi rekursif untuk mencari faktor bilangan
func faktor(n, i int) []int {
	// Basis rekursi: jika i lebih besar dari n, kembalikan nil
	if i > n {
		return nil
	}

	// Jika i adalah faktor dari n, tambahkan i ke dalam slice hasil
	if n%i == 0 {
		return append([]int{i}, faktor(n, i+1)...)
	}

	// Jika i bukan faktor dari n, lanjutkan ke nilai berikutnya
	return faktor(n, i+1)
}
```

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/0b021e9a-1d0b-47f4-91f1-52d6f4eb7d70)

#### Alur Program

* **Impor Paket:** Program dimulai dengan mengimpor paket fmt, yang diperlukan untuk menangani input dan output ke konsol.

* **Fungsi main():**
  - Program memasuki fungsi main, yang merupakan titik awal eksekusi.
  - Di sini, program meminta pengguna untuk memasukkan sebuah bilangan bulat positif n dan menyimpan nilainya.
  - Setelah nilai n dimasukkan, program memanggil fungsi rekursif faktor(n, 1) untuk menemukan semua faktor n mulai dari 1.
 
* **Fungsi Rekursif faktor(n, i int) []int:**
  - Fungsi faktor digunakan untuk mencari faktor n secara rekursif, di mana i adalah bilangan yang saat ini diperiksa apakah merupakan faktor n.
  - Basis Rekursi: Jika nilai i sudah lebih besar dari n, fungsi mengembalikan nil, yang menandakan bahwa tidak ada lagi faktor yang perlu dicek, dan rekursi berhenti.
 
* **Kasus Rekursif:**
  - Jika i adalah faktor dari n (artinya n % i == 0), maka i ditambahkan ke dalam hasil menggunakan append([]int{i}, faktor(n, i+1)...). Setelah itu, fungsi faktor dipanggil lagi dengan nilai i+1 untuk melanjutkan pencarian faktor berikutnya.
  - Jika i bukan faktor dari n, fungsi langsung memanggil faktor(n, i+1) untuk melanjutkan ke bilangan berikutnya tanpa menambahkan i ke dalam hasil.

#### Deskripsi Program

Program ini dalam bahasa Go mencari dan mencetak semua faktor dari bilangan bulat positif yang dimasukkan oleh pengguna, menggunakan fungsi rekursif. Di dalam fungsi main, pengguna diminta memasukkan nilai n, kemudian fungsi faktor(n, 1) dipanggil untuk mencari faktor-faktor dari n mulai dari 1. Fungsi faktor bekerja dengan mengecek setiap bilangan i dari 1 hingga n untuk menentukan apakah i adalah faktor dari n (yaitu, jika n % i == 0). Jika i adalah faktor, maka nilai i ditambahkan ke dalam slice hasil. Jika i tidak memenuhi syarat, fungsi langsung melanjutkan ke bilangan berikutnya. Hasil akhir berupa slice berisi faktor-faktor dari n, yang dicetak ke layar.

### 4. Buatlah program yang mengimplementasikan rekursif untuk menampilkan barisan bilangan tertentu.
### Masukan terdiri dari sebuah bilangan bulat positif N.
### Keluaran terdiri dari barisan bilangan dari N hingga 1 dan kembali ke N.

**Contoh masukan dan keluaran:**

| No | Masukan | Keluaran |
|---|---|---|
| 1 | 5 | 5 4 3 2 1 2 3 4 5 |
| 2 | 9 | 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 |

#### Source Code

```go
// LAILATUR RAHMAH
// 2311102177
// IF 11 06

package main

import "fmt"

// Fungsi utama
func main() {
	var n int
	fmt.Print("Masukkan bilangan bulat positif N: ")
	fmt.Scanln(&n)

	// Memanggil fungsi rekursif untuk mencetak pola
	printRecursive(n)
}

// Fungsi rekursif untuk mencetak angka dari n hingga 1, lalu kembali dari 1 hingga n
func printRecursive(n int) {
	// Basis rekursi: jika n mencapai 1, cetak 1 dan hentikan rekursi
	if n == 1 {
		fmt.Print(n, " ")
		return
	}

	// Mencetak nilai n dalam urutan menurun
	fmt.Print(n, " ")

	// Memanggil fungsi secara rekursif dengan n-1
	printRecursive(n - 1)

	// Mencetak nilai n kembali dalam urutan menaik
	fmt.Print(n, " ")
}
```

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/06f0a108-e78d-4fc8-8b83-40020937e0d2)

#### Alur Program

* **Impor Paket:** Program mengimpor paket fmt, yang digunakan untuk menangani input dan output ke konsol.

* **Fungsi main():**
  - Program memasuki fungsi main, yang merupakan titik awal eksekusi.
  - Di dalam fungsi ini, program meminta pengguna untuk memasukkan bilangan bulat positif n dan menyimpannya dalam variabel n.
  - Setelah nilai n diperoleh dari input, program memanggil fungsi printRecursive(n) untuk mulai mencetak pola angka.
 
* **Fungsi Rekursif printRecursive(n int):**
  - Fungsi printRecursive digunakan untuk mencetak angka dalam urutan menurun dari n ke 1, lalu kembali dalam urutan menaik dari 1 ke n menggunakan pendekatan rekursif.
  - Basis Rekursi:
      * Jika n mencapai 1, fungsi akan mencetak 1 dan kemudian berhenti, mengembalikan kontrol ke pemanggil fungsi. Ini adalah titik akhir dari rekursi ke bawah.
  - Rekursi Menurun:
      * Jika n lebih besar dari 1, fungsi pertama-tama mencetak nilai n, yang menunjukkan angka saat ini dalam urutan menurun.
      * Fungsi kemudian memanggil dirinya sendiri dengan n-1, sehingga angka terus berkurang hingga mencapai 1.
  - Rekursi Menaik:
      * Setelah mencapai kasus dasar dan kembali dari rekursi, fungsi melanjutkan untuk mencetak nilai n lagi.
      * Proses ini mencetak nilai-nilai yang menaik dari 1 hingga n, menghasilkan pola simetris.

#### Deskripsi Program

Program ini mencetak pola angka dengan urutan menurun dari n ke 1 dan kembali menaik dari 1 ke n menggunakan fungsi rekursif dalam bahasa Go. Di dalam fungsi main, pengguna diminta untuk memasukkan sebuah bilangan bulat positif n, yang kemudian diteruskan ke fungsi printRecursive(n). Fungsi ini mencetak nilai n pertama-tama dalam urutan menurun, kemudian memanggil dirinya sendiri dengan nilai n-1 hingga mencapai 1 sebagai kasus dasar. Saat rekursi kembali, nilai n dicetak lagi dalam urutan menaik, menghasilkan pola simetris, misalnya, jika n = 4, outputnya adalah 4 3 2 1 2 3 4.

### 5. Buatlah program yang mengimplementasikan rekursif untuk menampilkan barisan bilangan ganjil.
### Masukan terdiri dari sebuah bilangan bulat positif N.
### Keluaran terdiri dari barisan bilangan ganjil dari 1 hingga N.

**Contoh masukan dan keluaran:**

| No | Masukan | Keluaran |
|---|---|---|
| 1 | 5 | 1 3 5 |
| 2 | 20 | 1 3 5 7 9 11 13 15 17 19 |

#### Source Code

```go
// LAILATUR RAHMAH
// 2311102177
// IF 11 06

package main

import "fmt"

// Fungsi utama
func main() {

	fmt.Println("         Bilangan Ganjil        ")

	var n int
	fmt.Print("Masukkan bilangan bulat positif N: ")
	fmt.Scanln(&n)

	// Menampilkan header tabel
	fmt.Printf("\nBilangan ganjil dari 1 hingga %d:\n", n)
	printOddNumbers(1, n, 5) // Memanggil fungsi untuk menampilkan bilangan ganjil dengan 5 kolom per baris
}

// Fungsi untuk mencetak bilangan ganjil dari 1 hingga n dalam format tabel
func printOddNumbers(i, n, columns int) {
	count := 0 // Variabel untuk menghitung jumlah angka pada baris saat ini
	for ; i <= n; i += 2 {
		fmt.Printf("║ %-6d", i) // Menampilkan bilangan ganjil dengan lebar 6 karakter
		count++

		// Jika sudah mencapai jumlah kolom, pindah ke baris berikutnya
		if count%columns == 0 {
			fmt.Print("║\n") // Menutup baris dan mulai yang baru
		}
	}

	// Menutup baris jika kolom belum penuh di akhir loop
	if count%columns != 0 {
		for count%columns != 0 {
			fmt.Print("║       ") // Tambahkan ruang kosong jika kolom belum penuh
			count++
		}
		fmt.Println("║") // Menutup baris terakhir setelah kolom penuh
	}
}
```

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/14dbfbbe-d66c-4982-ba4d-128e2ae48f7e)

#### Alur Program

* **Impor Paket:** Program mengimpor paket fmt, yang digunakan untuk menangani input dan output.
  
* **Fungsi main():**
  - Program memasuki fungsi main, yang menjadi titik awal eksekusi.
  - Program menampilkan judul "Bilangan Ganjil".
  - Program kemudian meminta pengguna untuk memasukkan sebuah bilangan bulat positif n, yang menjadi batas atas bilangan ganjil yang akan ditampilkan.
  - Setelah menerima nilai n, program menampilkan header tabel dan memanggil fungsi printOddNumbers(1, n, 5) untuk menampilkan bilangan ganjil dari 1 hingga n dalam tabel dengan lima kolom per baris.
 
* **Fungsi printOddNumbers(i, n, columns int):**
  - Fungsi ini mencetak bilangan ganjil dari i hingga n dalam format tabel.
  - Fungsi dimulai dengan mendefinisikan variabel count, yang akan melacak jumlah bilangan pada baris saat ini.
  - Loop untuk Bilangan Ganjil:
      * Loop dijalankan dari i hingga n dengan increment 2 (memastikan hanya bilangan ganjil yang diproses).
      * Setiap bilangan ganjil ditampilkan dalam format kolom lebar 6 karakter menggunakan fmt.Printf("║ %-6d", i).
      * count akan bertambah setelah setiap bilangan dicetak.
      * Jika count mencapai jumlah kolom (columns), program mencetak ║\n untuk menutup baris dan pindah ke baris baru.
  - Baris Terakhir:
      * Jika baris terakhir tidak terisi penuh (misalnya, jumlah bilangan ganjil tidak kelipatan 5), fungsi menambahkan kolom kosong sampai kolom penuh menggunakan fmt.Print("║ ").
      * Setelah kolom terakhir penuh, fungsi menutup baris dengan fmt.Println("║").

#### Deskripsi Program

Program ini mencetak bilangan ganjil dari 1 hingga n dalam format tabel yang teratur dengan lima kolom per baris, menggunakan bahasa Go. Setelah pengguna memasukkan bilangan bulat positif n, program menampilkan header tabel dan memanggil fungsi printOddNumbers, yang bertugas untuk mencetak bilangan ganjil. Fungsi tersebut mengiterasi dari 1 hingga n, menampilkan setiap bilangan ganjil dalam format kolom dengan lebar 6 karakter. Setiap kali jumlah bilangan yang dicetak mencapai lima, fungsi akan memindahkan ke baris berikutnya. Jika jumlah total bilangan ganjil tidak kelipatan lima, fungsi menambahkan kolom kosong untuk memastikan tabel terlihat rapi, sehingga menghasilkan tampilan yang terstruktur dan mudah dibaca.

### 6. Buatlah program yang mengimplementasikan rekursif untuk mencari hasil pangkat dari dua buah bilangan.
### Masukan terdiri dari bilangan bulat x dan y.
### Keluaran terdiri dari hasil x dipangkatkan y.
### Catatan: diperbolehkan menggunakan asterik "*", tapi dilarang menggunakan import "math".

**Contoh masukan dan keluaran:**

| No | Masukan (x, y) | Keluaran (x^y) |
|---|---|---|
| 1 | 2, 2 | 4 |
| 2 | 5, 3 | 125 |

#### Source Code

```go
// LAILATUR RAHMAH
// 2311102177
// IF 11 06

package main

import "fmt"

// Fungsi untuk menghitung pangkat x^y secara rekursif
func power(x, y int) int {
	// Basis rekursi: jika y == 0, maka hasilnya adalah 1
	if y == 0 {
		return 1
	}
	// Menghitung x * power(x, y-1)
	return x * power(x, y-1)
}

// Fungsi utama
func main() {
	var x, y int

	// Header Program
	fmt.Println("=========================================")
	fmt.Println("          PROGRAM KALKULATOR PANGKAT     ")
	fmt.Println("=========================================")

	// Input pengguna untuk bilangan x
	fmt.Print("Masukkan bilangan bulat (x): ")
	fmt.Scanln(&x)

	// Input pengguna untuk pangkat y
	fmt.Print("Masukkan pangkat (y): ")
	fmt.Scanln(&y)

	// Kalkulasi hasil pangkat
	result := power(x, y)

	// Menampilkan hasil
	fmt.Printf("Hasil dari %d ^ %d adalah: %d\n", x, y, result)
	fmt.Println("=========================================")
}
```

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/efb6f6e3-8f11-4b0d-92ec-ee65244f2067)

#### Alur Program

* **Impor Paket:** Program mengimpor paket fmt untuk menangani input dan output.

* Fungsi Rekursif power(x, y int) int:
  - Fungsi power digunakan untuk menghitung nilai x^y menggunakan pendekatan rekursif.
  - Basis Rekursi:
      * Jika nilai y sama dengan 0, fungsi mengembalikan nilai 1 (karena setiap bilangan yang dipangkatkan 0 adalah 1).
  - Rekursi:
      * Jika y lebih dari 0, fungsi mengalikan x dengan hasil dari power(x, y-1), secara rekursif mengurangi y hingga mencapai basis rekursi.

* **Fungsi main():**
  - Program memasuki fungsi main, yang merupakan titik awal eksekusi.
  - Program menampilkan header informasi tentang program kalkulator pangkat.
  - Program meminta pengguna untuk memasukkan nilai x (bilangan yang akan dipangkatkan) dan y (pangkat).
  - Setelah nilai x dan y dimasukkan, program memanggil fungsi power(x, y) untuk menghitung hasil pangkat.
  - Hasil perhitungan disimpan dalam variabel result.
 
* **Output Hasil:**
  - Program menampilkan hasil dari x^y dalam format: Hasil dari x ^ y adalah: result.
  - Program kemudian menampilkan garis penutup sebagai akhir dari program.

#### Deskripsi Program

Program ini adalah kalkulator pangkat yang menghitung nilai x^y menggunakan metode rekursif dalam bahasa Go. Pengguna diminta untuk memasukkan dua bilangan bulat, x sebagai bilangan yang akan dipangkatkan dan y sebagai pangkatnya. Fungsi power diimplementasikan untuk melakukan perhitungan dengan mendefinisikan basis rekursi di mana pangkat 0 menghasilkan 1, dan untuk pangkat positif, fungsi akan mengalikan x dengan hasil pangkat dari x dan y-1. Setelah perhitungan, program menampilkan hasil dalam format yang terstruktur, memberikan pengguna pemahaman yang jelas tentang proses yang dilakukan.
