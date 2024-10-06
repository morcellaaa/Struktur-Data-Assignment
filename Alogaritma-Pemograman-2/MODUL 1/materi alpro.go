FUNGSI cekSegitiga(sisi1, sisi2, sisi3 INT) BOOLEAN
    // Sebuah segitiga valid jika jumlah dua sisi manapun lebih besar dari sisi ketiga
    JIKA (sisi1 + sisi2 <= sisi3) ATAU (sisi1 + sisi3 <= sisi2) ATAU (sisi2 + sisi3 <= sisi1) MAKA
        KEMBALIKAN false // Bukan segitiga
    LAIN
        KEMBALIKAN true  // Adalah segitiga
    AKHIR JIKA
AKHIR FUNGSI

PROGRAM UTAMA
    // Deklarasi variabel untuk menyimpan panjang sisi
    sisi1, sisi2, sisi3 INT

    // Meminta input dari pengguna
    TULIS "Masukkan panjang sisi pertama: "
    BACA sisi1
    TULIS "Masukkan panjang sisi kedua: "
    BACA sisi2
    TULIS "Masukkan panjang sisi ketiga: "
    BACA sisi3

    // Memanggil fungsi cekSegitiga dan menyimpan hasilnya
    hasil := cekSegitiga(sisi1, sisi2, sisi3)

    // Menampilkan hasil
    JIKA hasil MAKA
        TULIS "Segitiga"
    LAIN
        TULIS "Bukan segitiga"
    AKHIR JIKA
AKHIR PROGRAM