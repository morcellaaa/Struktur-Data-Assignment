#include <iostream>
#include <string>
#include <map>

std::map<char, int> hitung_frekuensi_karakter(const std::string& str) {
    std::map<char, int> frekuensi;
    for (char ela : str) { 
        frekuensi[ela]++;
    }
    return frekuensi;
}

int main() {
    std::string kalimat;
    std::cout << "Masukkan sebuah kalimat: ";
    std::getline(std::cin, kalimat);

    std::map<char, int> frekuensi_karakter = hitung_frekuensi_karakter(kalimat);

    std::cout << "Frekuensi kemunculan setiap karakter dalam kalimat:" << std::endl;
    for (const auto& pair : frekuensi_karakter) {
        std::cout << "'" << pair.first << "': " << pair.second << std::endl;
    }

    return 0;
}