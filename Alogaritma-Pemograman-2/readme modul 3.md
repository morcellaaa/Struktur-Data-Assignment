<h2 align="center"><strong>LAPORAN PRAKTIKUM</strong></h2>
<h2 align="center"><strong>ALGORITMA DAN PEMROGRAMAN 2</strong></h2>

<br>

<h2 align="center"><strong>MODUL II</strong></h2>
<h2 align="center"><strong> REVIEW STRUKTUR KONTROL </strong></h2>

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

**1. Dasar Fungsi dalam Bahasa Go**

* Fungsi adalah blok kode yang digunakan untuk melakukan tugas tertentu secara modular dan reusable. [1]
* Dalam bahasa Go, fungsi merupakan first-class citizens, yang berarti mereka dapat disimpan dalam variabel, diteruskan sebagai argumen ke fungsi lain, dan bahkan dikembalikan dari fungsi.[1]

**2. Deklarasi Fungsi**
* Fungsi dideklarasikan menggunakan kata kunci `func`, diikuti oleh nama fungsi, parameter (jika ada), tipe kembalian (jika ada), dan blok kode yang akan dieksekusi.[2]

```go
func tambah(a int, b int) int {
    return a + b
}
```
* Fungsi `tambah` di atas menerima dua parameter `a` dan `b` bertipe `int`, kemudian mengembalikan hasil penjumlahan keduanya sebagai `int`.

**3. Multiple Return Values (Pengembalian Banyak Nilai)**
* Go mendukung pengembalian lebih dari satu nilai dari suatu fungsi. [2]
* Ini sering digunakan, terutama saat kita ingin mengembalikan hasil operasi bersama error.[2]

```go
func bagi(a, b int) (int, error) {
    if b == 0 {
        return 0, fmt.Errorf("tidak bisa membagi dengan nol")
    }
    return a / b, nil
}
```
* Fungsi `bagi` mengembalikan dua nilai: hasil pembagian dan pesan error. 
* Jika terjadi pembagian dengan nol, fungsi mengembalikan error.

**4. Variadic Function (Fungsi dengan Argumen Tidak Terbatas)**
* Variadic function adalah fungsi yang dapat menerima jumlah argumen yang tidak terbatas. [1]
* Ini dicapai dengan menggunakan tiga titik `(...)` sebelum tipe parameter.[1]

```go
func jumlah(angka ...int) int {
    total := 0
    for _, n := range angka {
        total += n
    }
    return total
}
```

* Fungsi `jumlah` dapat menerima sejumlah argumen integer dan menjumlahkannya.

**5. Anonymous Function (Fungsi Anonim)**
* Fungsi anonim adalah fungsi tanpa nama yang bisa didefinisikan secara langsung, sering kali digunakan untuk tugas sederhana atau sebagai callback.[1]

```go
func main() {
    func() {
        fmt.Println("Ini adalah fungsi anonim")
    }()
}
```

* Fungsi anonim ini langsung dieksekusi setelah didefinisikan.

**6. Fungsi sebagai Argumen dan Nilai Kembalian**
* Fungsi dalam Go juga dapat diteruskan sebagai argumen ke fungsi lain atau dikembalikan sebagai nilai.[2]

```go
func apply(fn func(int) int, value int) int {
    return fn(value)
}

func kaliDua(x int) int {
    return x * 2
}

func main() {
    result := apply(kaliDua, 5)
    fmt.Println(result)  // Output: 10
}
```

* Fungsi `apply` menerima fungsi `kaliDua` sebagai argumen dan menerapkannya pada nilai `5`.

**7. Error Handling dengan Panic dan Recover**
 Dalam Go, mekanisme `panic` dan `recover` dapat digunakan untuk menangani error yang lebih fatal. [1]
* `panic` digunakan untuk menghentikan program, sedangkan `recover` untuk memulihkan eksekusi program dari kondisi panic.[1]

```go
func safeDivision(a, b int) {
    defer func() {
        if r := recover(); r != nil {
            fmt.Println("Recovered from:", r)
        }
    }()
    if b == 0 {
        panic("division by zero")
    }
    fmt.Println(a / b)
}

func main() {
    safeDivision(4, 2)  // Output: 2
    safeDivision(4, 0)  // Output: Recovered from: division by zero
}
```

* Fungsi `safeDivision` menggunakan `panic` untuk menghentikan eksekusi jika pembagian dengan nol terjadi, dan `recover` untuk menangani kondisi tersebut.

## GUIDED

### 1. Menyusun program untuk menghitung permutasi dari dua bilangan bulat yang diberikan oleh pengguna. Permutasi adalah banyaknya cara untuk menyusun sejumlah objek dalam urutan tertentu.

#### Source Code

```go
package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	if a >= b {
		fmt.Println(permutasi(a, b))
	} else {
		fmt.Println(permutasi(b, a))
	}
}
func faktorial(n int) int {
	var hasil int = 1
	var i int
	for i = 1; i <= n; i++ {
		hasil = hasil * i
	}
	return hasil
}
func permutasi(n, r int) int {
	return faktorial(n) / faktorial(n-r)
}
```

#### Alur Program

1. Deklarasi Variabel:
    * **a** dan **b** dideklarasikan sebagai bilangan bulat untuk menyimpan input dari pengguna.
2. Input Pengguna:
    * **fmt.Scan(&a, &b)** digunakan untuk meminta pengguna memasukkan dua bilangan bulat yang akan dihitung permutasinya.
3. Kondisi Permutasi:
    * Program memeriksa apakah **a** lebih besar atau sama dengan **b**. Jika ya, maka permutasi dari **a** dan **b** dihitung. Jika tidak, permutasi dari **b** dan **a** dihitung. Hal ini dilakukan karena permutasi tidak terdefinisi jika **r** (jumlah objek yang diambil) lebih besar dari **n** (total jumlah objek).
4. Fungsi faktorial:
    * Fungsi ini digunakan untuk menghitung faktorial dari sebuah bilangan. Faktorial dari **n** adalah perkalian semua bilangan bulat positif dari 1 sampai **n**.
5. Fungsi permutasi:
    * Fungsi ini menghitung permutasi dari n objek diambil r objek. Rumus permutasi adalah:
    ```
    P(n, r) = n! / (n-r)!
    ```
    * Fungsi ini memanggil fungsi **faktorial** untuk menghitung faktorial dari **n** dan **n-r**, kemudian membagi hasil keduanya.

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/cf1d3fb4-2662-47d8-9ff2-f8e0f5310f01)

#### Deskripsi Program
Program menghitung permutasi dari dua bilangan bulat yang dimasukkan pengguna. Setelah mengambil input untuk variabel a dan b, program menentukan mana yang lebih besar dan kemudian memanggil fungsi permutasi(n, r) untuk menghitung permutasi menggunakan rumus \( P(n, r) = \frac{n!}{(n-r)!} \). Fungsi faktorial(n int) digunakan untuk menghitung faktorial dari bilangan n. Hasil perhitungan permutasi kemudian dicetak ke layar. Namun, program ini tidak menangani situasi di mana r lebih besar dari n, yang dapat menyebabkan kesalahan dalam perhitungan.

### 2. Merancang program untuk menghitung luas permukaan dan volume sebuah balok berdasarkan panjang, lebar, dan tingginya yang diinputkan oleh pengguna.

#### Source Code

```go
package main

import "fmt"

func hitungLuasPermukaan(panjang, lebar, tinggi int) int {
	return 2 * (panjang*lebar + panjang*tinggi + lebar*tinggi)
}
func hitungVolume(panjang, lebar, tinggi int) int {
	return panjang + lebar + tinggi
}
func main() {
	var panjang, lebar, tinggi int

	fmt.Println("Masukkan panjang balok: ")
	fmt.Scan(&panjang)
	fmt.Println("Masukkan lebar balok: ")
	fmt.Scan(&lebar)
	fmt.Println("Masukkan tinggi balok: ")
	fmt.Scan(&tinggi)

	luasPermukaan := hitungLuasPermukaan(panjang, lebar, tinggi)
	volume := hitungVolume(panjang, lebar, tinggi)

	fmt.Printf("Luas permukaan balok: %d\n", luasPermukaan)
	fmt.Printf("Volume balok: %d\n", volume)
}
```

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/f29eaf1b-ed87-4c8e-b5c3-1da473ed6921)

#### Alur Program

1. Deklarasi
     * **package main:** Menunjukkan bahwa ini adalah program utama yang akan dieksekusi.
2. Import
     * **import "fmt":** Mengimpor paket fmt yang menyediakan fungsi-fungsi untuk input/output seperti Println dan Scan.
4. Fungsi **hitungLuasPermukaan**
     * Fungsi ini menerima tiga parameter bilangan bulat: **panjang**, **lebar**, dan **tinggi**.
     * Fungsi ini mengembalikan nilai hasil perhitungan luas permukaan balok berdasarkan rumus:
     * ```
       Luas Permukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi)
       ```
6. Fungsi **hitungVolume**
     * Fungsi ini juga menerima tiga parameter bilangan bulat yang sama.
7. Fungsi **main**
     * **Deklarasi Variabel:** Mendeklarasikan tiga variabel bilangan bulat **panjang**, **lebar**, dan **tinggi** untuk menyimpan input pengguna.
     * **Input Pengguna:** Menggunakan **fmt.Println** untuk menampilkan prompt ke pengguna agar memasukkan nilai panjang, lebar, dan tinggi. Nilai yang diinputkan disimpan dalam variabel yang sesuai menggunakan **fmt.Scan**.
     * **Pemanggilan Fungsi:** Memanggil fungsi **hitungLuasPermukaan** dan **hitungVolume** dengan nilai panjang, lebar, dan tinggi yang telah diinputkan pengguna. Hasilnya disimpan dalam variabel **luasPermukaan** dan **volume**.
     * **Output:** Mencetak hasil perhitungan luas permukaan dan volume balok ke layar menggunakan **fmt.Printf**.

#### Deskripsi Program

Program tersebut dapat menghitung luas permukaan dan volume sebuah balok berdasarkan dimensi yang dimasukkan oleh pengguna. Fungsi **hitungLuasPermukaan(panjang, lebar, tinggi)** menghitung luas permukaan balok menggunakan rumus \( 2 \times (panjang \times lebar + panjang \times tinggi + lebar \times tinggi) \). Namun, ada kesalahan dalam fungsi **hitungVolume(panjang, lebar, tinggi)**, yang seharusnya menghitung volume balok dengan rumus \( panjang \times lebar \times tinggi \) tetapi saat ini hanya menjumlahkan ketiga dimensi. Dalam fungsi **main**, program meminta pengguna untuk memasukkan nilai panjang, lebar, dan tinggi, kemudian memanggil kedua fungsi untuk menghitung luas permukaan dan volume, dan menampilkan hasilnya.

## Unguided

### 1. Minggu ini, mahasiswa Fakultas Informatika mendapatkan tugas dari mata kuliah matematika diskrit untuk mempelajari kombinasi dan permutasi. Jonas, salah seorang mahasiswa, iseng untuk mengimplementasikannya ke dalam suatu program. Oleh karena itu, bersediakah kalian membantu Jonas?<br/>
**Masukan** terdiri dari empat buah bilangan asli a, b, c, dan d yang dipisahkan oleh spasi, dengan syarat a ≥ c dan b ≥ d.<br/><br/>
**Keluaran** terdiri dari dua baris. Baris pertama adalah hasil permutasi dan kombinasi a terhadap c, sedangkan baris kedua adalah hasil permutasi dan kombinasi b terhadap d.<br/><br/>
**Catatan:** permutasi (P) dan kombinasi (C) dari n terhadap r (n ≥ r) dapat dihitung dengan menggunakan persamaan berikut!<br/><br/>
P(n,r) = n! / (n-r)!, sedangkan C(n,r) = n! / (r! * (n-r)!)

**Contoh**

| No | Masukan | Keluaran | Penjelasan                               |
|---|---|---|---|
| 1  | 5 10 3 10 | 60 10 3628800 1 | P(5,3) = 5!/2! = 120/2 = 60 <br>C(5,3) = 5!/(3!x2!) = 120/12 = 10 <br>P(10,10) = 10!/0! = 3628800/1 = 3628800 <br>C(10,10) = 10!/(10!x10!) = 10!/10! = 1 |
| 2  | 8 0 2 0 | 56 28 1 1 |  |

Selesaikan program tersebut dengan memanfaatkan subprogram yang diberikan berikut ini!

```
function factorial(n: integer) -> integer
{Mengembalikan nilai faktorial dari n}

function permutation(n, r : integer) -> integer
{Mengembalikan hasil permutasi r dari n, dan n >= r}

function combination(n, r : integer) -> integer
{Mengembalikan hasil kombinasi r dari n, dan n >= r}
```

#### Source Code

```go
//Lailatur Rahmah
//2311102177
//IF-11-06
package main

import "fmt"

var a, b, c, d int

// Fungsi untuk menghitung faktorial dari bilangan n
func faktorial(n int) int {
	hasil := 1
	// Loop untuk menghitung faktorial, dimulai dari 1 hingga n
	for i := 1; i <= n; i++ {
		hasil = hasil * i
	}
	return hasil
}

// Fungsi untuk menghitung permutasi P(n, r) = n! / (n-r)!
func permutasi(n, r int) int {
	return faktorial(n) / faktorial(n-r)
}

// Fungsi untuk menghitung kombinasi C(n, r) = n! / (r! * (n-r)!)
func kombinasi(n, r int) int {
	return faktorial(n) / (faktorial(r) * faktorial(n-r))
}

func main() {

	fmt.Print("Masukkan input = ")
	fmt.Scan(&a, &b, &c, &d)

	if a >= c && b >= d {
		// Baris pertama: Permutasi dan Kombinasi a terhadap c
		fmt.Printf("%d, %d\n", permutasi(a, c), kombinasi(a, c))

		// Baris kedua: Permutasi dan Kombinasi b terhadap d
		fmt.Printf("%d, %d\n", permutasi(b, d), kombinasi(b, d))
	} else {
		fmt.Println("Syarat tidak terpenuhi: a harus >= c dan b harus >= d")
	}
}
```
#### Screenshoot Output

![image](https://github.com/user-attachments/assets/83d7c617-effe-44b7-be96-cde9c6fbc791)

#### Alur Program
1. Deklarasi
   * a, b, c, dan d dideklarasikan sebagai variabel global bertipe integer. Variabel-variabel ini akan digunakan untuk menyimpan input dari pengguna.
3. Fungsi **faktorial**
   * Fungsi ini menghitung faktorial dari sebuah bilangan dengan menggunakan perulangan. Hasil perkalian dari 1 hingga bilangan yang diberikan akan dikembalikan.
4. Fungsi **permutasi**
   * Fungsi ini menghitung permutasi dari n objek diambil r objek menggunakan rumus: P(n, r) = n! / (n-r)!. Fungsi ini memanggil fungsi faktorial untuk menghitung faktorial dari n dan n-r.
5. Fungsi **kombinasi**
   * Fungsi ini menghitung kombinasi dari n objek diambil r objek menggunakan rumus: C(n, r) = n! / (r! * (n-r)!). Fungsi ini juga memanggil fungsi faktorial untuk menghitung faktorial dari n, r, dan n-r.
6. Fungsi **main**
   * Input Pengguna: Program meminta pengguna untuk memasukkan empat bilangan bulat a, b, c, dan d.
   * Kondisi: Program memeriksa apakah a lebih besar atau sama dengan c dan b lebih besar atau sama dengan d. Jika kondisi ini terpenuhi, maka perhitungan permutasi dan kombinasi akan dilakukan.
   * Perhitungan: Jika kondisi terpenuhi, program akan menghitung permutasi dan kombinasi dari a terhadap c dan b terhadap d, lalu mencetak hasilnya.
   * Pesan Kesalahan: Jika kondisi tidak terpenuhi, program akan mencetak pesan kesalahan.

#### Deskripsi Program

Program ini menghitung permutasi dan kombinasi dari empat bilangan bulat yang dimasukkan pengguna. Pertama, pengguna diminta untuk memasukkan nilai untuk variabel **a**, **b**, **c**, dan **d**. Program kemudian memeriksa apakah a lebih besar atau sama dengan c dan b lebih besar atau sama dengan d. Jika syarat tersebut terpenuhi, program menghitung dan menampilkan permutasi dan kombinasi untuk pasangan (a, c) dan (b, d) menggunakan fungsi permutasi dan kombinasi, masing-masing. Fungsi faktorial digunakan untuk menghitung faktorial dari bilangan yang diperlukan dalam perhitungan permutasi dan kombinasi. Jika syarat tidak terpenuhi, program akan menampilkan pesan kesalahan. Program ini memberikan hasil dalam format dua baris, dengan setiap baris mencakup hasil permutasi dan kombinasi.

### 2. Diberikan tiga buah fungsi matematika yaitu f(x) = x², g(x) = x - 2 dan h(x) = x + 1.
Fungsi komposisi (f o g o h)(x) artinya adalah f(g(h(x))). Tuliskan f(x), g(x) dan h(x) dalam bentuk function.<br/><br/>
**Masukan** terdiri dari sebuah bilangan bulat a, b dan c yang dipisahkan oleh spasi.<br/><br/>
**Keluaran** terdiri dari tiga baris. Baris pertama adalah (f o g o h)(a), baris kedua (g o h o f)(b), dan baris ketiga adalah (h o f o g)(c)!<br/><br/>

**Contoh**

| No | Masukan | Keluaran | Penjelasan |
|---|---|---|---|
| 1 | 7 2 10 | 36<br>3<br>65 | (fogog)(7) = 36<br>(gohof)(2) = 3<br>(hofog)(10) = 65 |
| 2 | 5 5 5 | 16<br>24<br>10 | (fogog)(5) = 16<br>(gohof)(5) = 24<br>(hofog)(5) = 10 |
| 3 | 3 8 4 | 4<br>63<br>5 | (fogog)(3) = 4<br>(gohof)(8) = 63<br>(hofog)(4) = 5 |

#### Source Code

```go
//Lailatur Rahmah
//2311102177
//IF-11-06
package main

import "fmt"

func f(x int) int {
	fungsi_f := x * x
	return fungsi_f
}

func g(x int) int {
	fungsi_g := x - 2
	return fungsi_g
}

func h(x int) int {
	fungsi_h := x + 1
	return fungsi_h
}

func main() {
	fmt.Print("Masukkan bilangan: ")

	var a, b, c int
	fmt.Scan(&a, &b, &c)

	fmt.Println("Hasil fungsi fogoh dari bilangan pertama adalah ", f(g(h(a))))

	fmt.Println("Hasil fungsi gohof dari bilangan pertama adalah ", g(h(f(b))))

	fmt.Println("Hasil fungsi gohof dari bilangan pertama adalah ", h(f(g(c))))
}
```

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/de1b54d0-a9ee-49e7-a64d-883cd118f3c4)

#### Alur Program
1. Deklarasi
   * **package main:** Menyatakan bahwa ini adalah program utama (executable).
3. Import
   * **import "fmt":** Mengimpor paket fmt untuk melakukan operasi input dan output (misalnya, fmt.Println).
4. Definisi Fungsi
   * **kuadrat(x int) int:** Fungsi ini menerima bilangan bulat x sebagai input dan mengembalikan kuadrat dari x.
   * **kurangDua(x int) int:** Fungsi ini menerima bilangan bulat x sebagai input dan mengembalikan hasil pengurangan x dengan 2.
   * **tambahSatu(x int) int:** Fungsi ini menerima bilangan bulat x sebagai input dan mengembalikan hasil penjumlahan x dengan 1.
5. Fungsi Utama **main**
   * Meminta pengguna untuk memasukkan tiga bilangan bulat.
   * Mendefinisikan variabel a, b, dan c untuk menyimpan nilai-nilai yang dimasukkan.
   * Menghitung komposisi fungsi fogoh, gohof1, dan gohof2 dengan menggunakan fungsi-fungsi yang telah didefinisikan sebelumnya.
   * Mencetak hasil perhitungan ke layar.

#### Deskripsi Program

Program ini melakukan serangkaian operasi matematis menggunakan tiga fungsi: f, g, dan h, yang didefinisikan untuk memanipulasi input bilangan bulat. Fungsi f(x) menghitung kuadrat dari x, fungsi g(x) mengurangi x dengan 2, dan fungsi h(x) menambahkan 1 ke x. 

Dalam fungsi main, program meminta pengguna untuk memasukkan tiga bilangan bulat (a, b, dan c). Kemudian, program menghitung dan menampilkan hasil dari tiga komposisi fungsi:
1. Hasil fungsi fogoh dari a, yang merupakan hasil dari f(g(h(a))).
2. Hasil fungsi gohof dari b, yang merupakan hasil dari g(h(f(b))).
3. Hasil fungsi gohof dari c, yang merupakan hasil dari h(f(g(c))).

### 3. [**Lingkaran**] Suatu lingkaran didefinisikan dengan koordinat titik pusat (cx, cy) dengan radius r. Apabila diberikan dua buah lingkaran, maka tentukan posisi sebuah titik sembarang (x, y) berdasarkan dua lingkaran tersebut.<br/><br/>
**Masukan** Terdiri dari beberapa tiga baris. Baris pertama dan kedua adalah koordinat titik pusat dan radius dari lingkaran 1 dan lingkaran 2, sedangkan baris ketiga adalah koordinat titik sembarang. Asumsi sumbu x dan y dari semua titik dan juga radius direpresentasikan dengan bilangan bulat.<br/><br/>
**Keluaran** Berupa string yang menyatakan posisi titik **"Titik di dalam lingkaran 1 dan 2"**, **"Titik di dalam lingkaran 1"**, **"Titik di dalam lingkaran 2"**, atau **"Titik di luar lingkaran 1 dan 2"**.

**Contoh**
| No | Masukan | Keluaran |
|---|---|---|
| 1 | 1 1 5<br>8 8 4<br>2 2 2 | Titik di dalam lingkaran 1 |
| 2 | 1 2 3 | Titik di dalam lingkaran 2 |
| 3 | 4 5 6<br>7 8 15<br>5 10 15<br>-15 4 20<br>0 0 5 | Titik di dalam lingkaran 1 dan 2 |
| 4 | 1 1 5<br>8 8 4<br>15 28 | Titik di luar lingkaran 1 dan 2 |

Fungsi untuk menghitung jarak titik (a, b) dan (c, d), dimana rumus jarak adalah:

jarak = √(ac)² + (b - d)²

dan juga fungsi untuk menentukan posisi sebuah titik sembarang berada di dalam suatu lingkaran atau tidak.

```
function jarak(a, b, c, d real) -> real

{Mengembalikan jarak antara titik (a, b) dan titik (c, d)}

function didalam(cx, cy, r, x, y real) -> boolean

{Mengembalikan true apabila titik (x, y) berada di dalam lingkaran yang memiliki titik pusat (cx, cy) dan radius r}
```

**Catatan:** Lihat paket **math** dalam lampiran untuk menggunakan fungsi **math.Sqrt()** untuk menghitung akar kuadrat.

#### Source Code

```go
// Lailatur Rahmah
// 2311102177
// IF-11-06
package main

import (
	"fmt"
	"math"
)

func jarak(a, b, c, d float64) float64 {
	return math.Sqrt(math.Pow(a-c, 2) + math.Pow(b-d, 2))
}

func didalam(cx, cy, r, x, y float64) bool {
	return jarak(cx, cy, x, y) <= r
}

func main() {
	var cx1, cy1, r1, cx2, cy2, r2, x, y float64

	fmt.Println("Masukkan koordinat titik pusat lingkaran 1 (cx, cy) dan radius (r):")
	fmt.Scanln(&cx1, &cy1, &r1)

	fmt.Println("Masukkan koordinat titik pusat lingkaran 2 (cx, cy) dan radius (r):")
	fmt.Scanln(&cx2, &cy2, &r2)

	fmt.Println("Masukkan koordinat titik (x, y):")
	fmt.Scanln(&x, &y)

	if didalam(cx1, cy1, r1, x, y) && didalam(cx2, cy2, r2, x, y) {
		fmt.Println("Titik di dalam lingkaran 1 dan 2")
	} else if didalam(cx1, cy1, r1, x, y) {
		fmt.Println("Titik di dalam lingkaran 1")
	} else if didalam(cx2, cy2, r2, x, y) {
		fmt.Println("Titik di dalam lingkaran 2")
	} else {
		fmt.Println("Titik di luar lingkaran 1 dan 2")
	}
}
```

#### Screenshoot Output

![image](https://github.com/user-attachments/assets/41eb7a33-03c0-40f9-ba27-f1a745b77875)

#### Uraian Fungsi dan Variabel
1. Jarak
   * Menghitung jarak antara dua titik di dalam bidang kartesius.
   * Menggunakan rumus jarak Euclidean.
   * Parameter: Koordinat x dan y dari dua titik.
   * Return: Jarak antara kedua titik.
3. didalam
   * Memeriksa apakah suatu titik berada di dalam lingkaran.
   * Membandingkan jarak antara titik dengan titik pusat lingkaran dengan jari-jari lingkaran.
   * Parameter: Koordinat titik pusat lingkaran, jari-jari lingkaran, dan koordinat titik yang ingin diperiksa.
   * Return: true jika titik berada di dalam lingkaran, false jika tidak.
5. main
   * Fungsi utama program.
   * Meminta pengguna untuk memasukkan input: koordinat titik pusat dan jari-jari dua lingkaran, serta koordinat titik yang ingin diperiksa.
   * Memanggil fungsi didalam untuk memeriksa posisi titik terhadap masing-masing lingkaran.
   * Mencetak hasil pemeriksaan ke layar.

#### Deskripsi Program

Program ini menghitung apakah suatu titik berada di dalam dua lingkaran berdasarkan input dari pengguna. Fungsi jarak menghitung jarak antara dua titik menggunakan rumus jarak Euclidean. Fungsi didalam memeriksa apakah titik tertentu berada dalam lingkaran dengan membandingkan jarak titik dari pusat lingkaran dengan radiusnya.
Dalam fungsi main, program meminta pengguna untuk memasukkan koordinat pusat dan radius dari dua lingkaran, serta koordinat titik yang akan diperiksa. Program kemudian memeriksa apakah titik tersebut berada di dalam salah satu atau kedua lingkaran dengan menggunakan fungsi didalam. Hasilnya ditampilkan di layar, menunjukkan apakah titik tersebut berada di dalam lingkaran 1, lingkaran 2, atau di luar kedua lingkaran.
