#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    Mahasiswa* next;
};

class CircularLinkedList {
private:
    Mahasiswa* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void tambahDepan(string nama, string nim) {
        Mahasiswa* newNode = new Mahasiswa();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Mahasiswa* temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
        cout << "\nData telah ditambahkan" << endl;
    }

    void tambahBelakang(string nama, string nim) {
        Mahasiswa* newNode = new Mahasiswa();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Mahasiswa* temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
        }
        cout << "\nData telah ditambahkan" << endl;
    }

    void tambahTengah(string nama, string nim, int posisi) {
        Mahasiswa* newNode = new Mahasiswa();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (posisi == 1) {
            tambahDepan(nama, nim);
            return;
        }

        Mahasiswa* temp = head;
        for (int i = 1; i < posisi - 1; ++i) {
            if (temp == nullptr || temp->next == head) {
                cout << "\nPosisi tidak valid" << endl;
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        cout << "\nData telah ditambahkan" << endl;
    }

    void ubahDepan(string namaBaru, string nimBaru) {
        if (head == nullptr) {
            cout << "\nLinked list kosong" << endl;
            return;
        }
        head->nama = namaBaru;
        head->nim = nimBaru;
        cout << "\nData depan berhasil diubah" << endl;
    }

    void ubahBelakang(string namaBaru, string nimBaru) {
        if (head == nullptr) {
            cout << "\nLinked list kosong" << endl;
            return;
        }

        Mahasiswa* temp = head;
        do {
            temp = temp->next;
        } while (temp->next != head);
        temp->nama = namaBaru;
        temp->nim = nimBaru;
        cout << "\nData belakang berhasil diubah" << endl;
    }

    void ubahTengah(string namaBaru, string nimBaru, int posisi) {
        if (head == nullptr) {
            cout << "\nLinked list kosong" << endl;
            return;
        }

        Mahasiswa* temp = head;
        for (int i = 1; i < posisi; ++i) {
            temp = temp->next;
            if (temp == head) {
                cout << "\nPosisi tidak valid" << endl;
                return;
            }
        }

        temp->nama = namaBaru;
        temp->nim = nimBaru;
        cout << "\nData di tengah berhasil diubah" << endl;
    }

    void hapusDepan() {
        if (head == nullptr) {
            cout << "\nLinked list kosong" << endl;
            return;
        }

        Mahasiswa* temp = head;
        if (temp->next == head) {
            delete temp;
            head = nullptr;
        } else {
            Mahasiswa* tail = head;
            while (tail->next != head)
                tail = tail->next;
            head = head->next;
            tail->next = head;
            delete temp;
        }
        cout << "\nData di depan berhasil dihapus" << endl;
    }

    void hapusBelakang() {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }

        Mahasiswa* temp = head;
        Mahasiswa* tail = nullptr;
        while (temp->next != head) {
            tail = temp;
            temp = temp->next;
        }

        if (temp == head) {
            delete temp;
            head = nullptr;
        } else {
            tail->next = head;
            delete temp;
        }
        cout << "\nData di belakang berhasil dihapus" << endl;
    }

    void hapusTengah(int posisi) {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }

        if (posisi == 1) {
            hapusDepan();
            return;
        }

        Mahasiswa* temp = head;
        Mahasiswa* prev = nullptr;
        for (int i = 1; i < posisi; ++i) {
            prev = temp;
            temp = temp->next;
            if (temp == head) {
                cout << "Posisi tidak valid" << endl;
                return;
            }
        }

        prev->next = temp->next;
        delete temp;
        cout << "\nData di tengah berhasil dihapus" << endl;
    }

    void hapusList() {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }

        Mahasiswa* temp = head;
        Mahasiswa* next;
        do {
            next = temp->next;
            delete temp;
            temp = next;
        } while (temp != head);
        head = nullptr;
        cout << "\nLinked list berhasil dihapus" << endl;
    }

    void tampilkanData() {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }
        Mahasiswa* temp = head;
        cout << "DATA MAHASISWA" << endl;
        cout << "NAMA\tNIM" << endl;
        do {
            cout << temp->nama << "\t" << temp->nim << endl;
            temp = temp->next;
        } while (temp != head);
    }

    ~CircularLinkedList() {
        if (head == nullptr)
            return;
        Mahasiswa* curr = head;
        Mahasiswa* next;
        do {
            next = curr->next;
            delete curr;
            curr = next;
        } while (curr != head);
    }
};

int main() {
    CircularLinkedList cll;
    int choice, posisi;
    string nama, nim;

    do {
        cout << "\nPROGRAM SINGLE LINKED LIST CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampilkan Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "\nPilih Operasi : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "-Tambah Depan-\n" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cll.tambahDepan(nama, nim);
                break;
            case 2:
                cout << "-Tambah Belakang-\n" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cll.tambahBelakang(nama, nim);
                break;
            case 3:
                cout << "-Tambah Tengah-\n" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                cll.tambahTengah(nama, nim, posisi);
                break;
            case 4:
                cout << "-Ubah Depan-\n" << endl;
                cout << "Masukkan Nama Baru : ";
                cin >> nama;
                cout << "Masukkan NIM Baru : ";
                cin >> nim;
                cll.ubahDepan(nama, nim);
                break;
            case 5:
                cout << "-Ubah Belakang-\n" << endl;
                cout << "Masukkan Nama Baru : ";
                cin >> nama;
                cout << "Masukkan NIM Baru : ";
                cin >> nim;
                cll.ubahBelakang(nama, nim);
                break;
            case 6:
                cout << "-Ubah Tengah-\n" << endl;
                cout << "Masukkan Nama Baru : ";
                cin >> nama;
                cout << "Masukkan NIM Baru : ";
                cin >> nim;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                cll.ubahTengah(nama, nim, posisi);
                break;
            case 7:
                cout << "-Hapus Depan-\n" << endl;
                cll.hapusDepan();
                break;
            case 8:
                cout << "-Hapus Belakang-\n" << endl;
                cll.hapusBelakang();
                break;
            case 9:
                cout << "-Hapus Tengah-\n" << endl;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                cll.hapusTengah(posisi);
                break;
            case 10:
                cout << "-Hapus List-\n" << endl;
                cll.hapusList();
                break;
            case 11:
                cout << "-Tampilkan Data-\n" << endl;
                cll.tampilkanData();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (choice != 0);

    return 0;
}
