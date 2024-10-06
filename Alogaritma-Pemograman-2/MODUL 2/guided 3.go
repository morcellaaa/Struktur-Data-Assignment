package main

import (
	"fmt"
	"math"
)

func main() {
	var jarijari float64
	fmt.Println("Masukkan jari-jari bola: ")
	fmt.Scanln(&jarijari)

	volume := (4.0 / 3.0) * math.Pi * math.Pow(jarijari, 3)
	luas_permukaan := 4 * math.Pi * math.Pow(jarijari, 2)

	fmt.Println("Volume bola dengan jari-jari %.2f adalah %.2f\n", jarijari, volume)
	fmt.Println()
	fmt.Println("luas_permukaan bola dengan jari-jari %.2f adalah %.2f\n", jarijari, luas_permukaan)
}
