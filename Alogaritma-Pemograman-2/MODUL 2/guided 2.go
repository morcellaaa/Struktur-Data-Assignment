package main

import "fmt"

func main() {
	var tahun int
	fmt.Println("Masukkan sebuah tahun: ")
	fmt.Scanln(&tahun)

	if (tahun%400 == 0) || (tahun%4 == 0 && tahun%100 != 0) {
		fmt.Println(tahun, "adalah tahun kabiat: true")
	} else {
		fmt.Println(tahun, "bukan tahun kabisat: false")
	}
}
