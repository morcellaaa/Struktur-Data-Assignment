package main

import "fmt"

func main() {
	for {
		var berat1, berat2 float64

		fmt.Print("Masukkan berat belanjaan di kedua kantong: ")
		_, err := fmt.Scan(&berat1, &berat2)
		if err != nil {
			fmt.Println("Input tidak valid.")
			return
		}

		if berat1+berat2 > 150 || berat1 < 0 || berat2 < 0 {
			fmt.Println("Proses selesai.")
			break
		}

		selisih := berat1 - berat2
		if selisih < 0 {
			selisih = -selisih
		}
		akanOleng := selisih >= 9

		fmt.Printf("Sepeda motor pak Andi akan oleng: %t\n", akanOleng)
	}
}
