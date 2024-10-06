package main

import (
	"fmt"
	"math"
)

func main() {
	var k int

	for {
		fmt.Print("Masukkan nilai K: ")
		_, err := fmt.Scan(&k)
		if err != nil {
			fmt.Println("Input tidak valid.")
			return
		}

		if k < 0 {
			fmt.Println("Nilai K harus positif.")
			continue
		}

		akarDua := 0.0
		for i := 0; i <= k; i++ {
			pembilang := math.Pow(4*float64(i)+2, 2)
			penyebut := (4*float64(i) + 1) * (4*float64(i) + 3)
			akarDua += pembilang / penyebut
		}

		fmt.Printf("Nilai akar 2 = %.10f\n", akarDua)
	}
}
