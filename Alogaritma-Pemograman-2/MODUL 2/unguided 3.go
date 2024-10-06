package main

import "fmt"

func main() {
	const targetSequence = "merah kuning hijau ungu"
	var experiments [5]string

	fmt.Println("Masukkan hasil percobaan (merah, kuning, hijau, ungu):")
	for i := 0; i < 5; i++ {
		fmt.Printf("Percobaan %d: ", i+1)
		fmt.Scanln(&experiments[i])
	}

	success := true
	for _, experiment := range experiments {
		if experiment != targetSequence {
			success = false
			break
		}
	}

	fmt.Printf("BERHASIL: %t\n", success)
}
