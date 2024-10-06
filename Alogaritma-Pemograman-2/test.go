package main

import (
	"fmt"
)

func main() {
	// Membuat reader untuk input dari user
	//reader := bufio.NewReader(os.Stdin)

	nama := "Hello World"

	// Menampilkan prompt kepada pengguna
	fmt.Println(nama)

	// Membaca input dari pengguna hingga baris baru (newline)
	//nama, _ := reader.ReadString('\n')

	// Menampilkan input yang diterima
	//fmt.Println("Halo,", nama)
}
