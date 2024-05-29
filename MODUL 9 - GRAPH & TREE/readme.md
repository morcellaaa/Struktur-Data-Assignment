
# <h1 align="center"> Laporan Praktikum Modul Graph & Tree </h1>

<p align="center"> Fahreza Ilham Wicaksono </p>

## Dasar Teori

### Pengertian Graph

Grafik adalah alat matematika yang ampuh untuk memikirkan hubungan antara sesuatu yang diberikan entitas, dengan fokus pada struktur dan karakteristik hubungan, independen terhadap apa sebenarnya entitas dan hubungannya. Grafik dapat diterapkan pada kumpulan data aktual apa pun yang dapat memiliki hubungan antar elemen didirikan. [2] Di sini dapat sisimpulkan bahwa graf dalam c++ adalah suatu struktur data yang setiap datanya atau simpulnya memiliki hubungan dengan data lainya atau juga disebut dengan bobot.

#### Jenis Graph

1) Directed Graph/digraph (Graf Berarah) : Jika sisi-sisi graph hanya berlaku satu arah. Misalnya : {x,y} yaitu arah x ke y, bukan dari y ke x; x disebut origin dan y disebut terminus. Secara notasi sisi digraph ditulis sebagai vektor (x, y). <br/>
Contoh Digraph G = {V,E}<br/>
V = {A, B, C, D, E, F, G, H, I,J, K, L, M} <br/>
E = {(A,B),(A,C), (A,D), (A,F), (B,C), (B,H), (C,E), (C,G), (C,H), (C,I), (D,E), (D,F), (D,G), (D,K), (D,L), (E,F), (G,I), (G K), (H,I), (I,J), (I,M), (J,K), (J,M), (L,K), (L,M)}.[1] <br/>
![Digraph](digraph.png)<br/> <br/>
2) Undirected Graph/UndiGraph (Graph Tak Berarah) : setiap sisi {x, y} berlaku pada kedua arah: baik x ke y maupun y ke x Secara grafis sisi pada undigraph tidak memiliki mata panah dan secara notasional menggunakan kurung kurawal. <br/>
Contoh Undigraph G = {V, E} <br/>
V = {A, B, C, D, E, F, G, H, I,J, K, L, M} <br/>
E = { {A,B},{A,C}, {A,D}, {A,F}, {B,C}, {B,H}, {C,E}, {C,G}, {C,H}, {C,I}, {D,E}, {D,F}, {D,G}, {D,K}, {D,L}, {E,F}, {G,I}, {G,K}, {H,I}, {I,J}, {I,M}, {J,K}, {J,M}, {L,K}, {L,M}}. <br/>
Khusus graph, undigraph bisa sebagai digraph (panah di kedua ujung edge berlawanan). Struktur data linear maupun hirarkis adalah juga graph. Node-node pada struktur linear ataupun hirarkis adalah verteks-verteks dalam pengertian graph dengan sisi-sisinya menyusun node-node tersebut secara linear atau hirarkis. Struktur data linear adalah juga tree dengan pencabangan pada setiap node hanya satu atau tidak ada. Linear 1-way linked list (digraph), linear 2-way linked lis (undigraph). <br/>
![Linear 1-way Digraph](linear_1way.png)<br/>
Linear 1-way Digraph<br/>
![Linear 2-way Undigraph](linear_2way.png)<br/>
Linear 2-way Undigraph <br/> <br/>
Konektivitas pada Undigraph <br/>
- Adjacency: Dua verteks x dan y yang berlainan disebut terhubung langsung (adjacent) jika ada sisi {x, y} dalam E. <br/>
- Path : Urutan dari kumpulan node-node, dimana tiap node dengan node berikutnya dihubungkan dengan Edge <br/>
- Simple Path : Jika node dalam path tsb hanya muncul 1 kali <br/>
- Panjang dari path: jumlah sisi yang dilalui path. <br/>
- Siklus (cycle) : suatu path dengan panjang lebih dari satu, dimana vertex awal dan akhir sama. <br/>
- Siklus sederhana: dalam undigraph, siklus yang terbentuk dari tiga atau lebih verteks yang berlainan, dimana tidak ada vertex muncul lebih satu kali kecuali verteks awal/akhir. <br/>
- Dua verteks x dan y yang berbeda dalam suatu undigraph disebut berkoneksi (connected) apabila ada path penghubung. <br/>
- Suatu komponen terkoneksi (connected components) adalah subgraph (bagian dari graph) yang berisikan satu himpunan bagian verteks yang berkoneksi. [1]<br/> <br/>
3) Weighted Graph (Graf Berarah) : Graph dengan sisi mempunyai Bobot/ Biaya. “Biaya" ini bisa mewakili banyak aspek: biaya ekonomi suatu aktifitas, jarak geografis/tempuh, waktu tempuh, tingkat kesulitan, dan lain sebagainya. Contoh : Graph ini merupakan Undirected Weighted Graph. Order dari verteks A = 4, verteks B = 3, dst. Adjacentcy list dari D adalah = {A, E, F, G, K, L}. [1]<br/>
4) Represenasi Graph <br/>
Representasi Matriks Keterhubungan Langsungv(Adjacency Matrix) Matriks digunakan untuk himpunan adjacency setiap verteks. Baris berisi vertex asal adjacency, sedangkan kolom berisi vertex tujuan adjacency. Bila sisi graph tidak mempunyai bobot, maka [x, y] adjacency disimbolkan dengan 1 dan 0 bila tidak adjacency. Bila sisi graph mempunyai bobot, maka [x, y] adjacency disimbolkan dengan bobot sisi tersebut.[1]<br/><br/>


### Fungsi Graph 

- Graph digunakan untuk merepresentasikan aliran komputasi.
- Digunakan dalam pemodelan grafik.
- Graph dipakai pada sistem operasi untuk alokasi sumber daya.
- Google maps menggunakan graph untuk menemukan rute terpendek.
- Graph digunakan dalam sistem penerbangan untuk optimasi rute yang efektif.
- Pada state-transition diagram, graph digunakan untuk mewakili state dan transisinya.
- Di sirkuit, graph dapat digunakan untuk mewakili titik sirkuit sebagai node dan kabel sebagai edge.
- Graph digunakan dalam memecahkan teka-teki dengan hanya satu solusi, seperti labirin.
- Graph digunakan dalam jaringan komputer untuk aplikasi Peer to peer (P2P).
- Umumnya graph dalam bentuk DAG (Directed acyclic graph) digunakan sebagai alternatif blockchain untuk cryptocurrency. Misalnya crypto seperti IOTA [2]

### Pengertian Tree

Tree merupakan salah satu struktur data yang paling penting, karena banyak aplikasi menggunakan informasi dan data yang secara alami memiliki struktur hirarkis berguna dalam membantu memecahkan banyak masalah algoritmis.
Pembentukan Binary Tree berdasarkan Preorder, Inorder atau Postorder Untuk membentuk suatu binary tree berdasarkan preorder, inorder atau postorder dapat dilakukan dengan syarat menggunakan 2 dari tiga penelusuran tersebut
dan salah satunya harus inorder. 

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/8f6157d5-675e-46ef-b06c-9db86d133aa3)

- Root (atau akar) Node dengan hirarki tertinggi dinamakan root. <br/>
- Leaf (atau daun) Node yang tidak memiliki cabang.
- Internal node (atau node dalam) Node yang bukan merupakan leaf. <br/>
- Edge (atau sisi atau cabang) Menyatakan hubungan hirarkis antara kedua node yang terhubungkan, biasanya digambarkan berarah (berupa panah) untuk menunjukkan node asal edge lebih tinggi dari node tujuan dari edge. <br/>
- Level (atau tingkat) suatu node (Kadang dimulai level 0 atau 1) <br/>
- Bilangan yang menunjukan hirarki dari suatu node, root memiliki level 1, node cabang dari root memiliki level 2, node cabang berikutnya dari node adalah level 3, dan seterusnya. <br/>
- Height (atau tinggi) suatu tree, sama dengan level dengan angka terbesar (hirarki terendah) suatu node yang ada dalam tree atau bisa juga didefinisikan sebagai jumlah sisi terbanyak dari root hingga suatu leaf yang ada di tree. <br/>
- Depth (atau kedalaman) suatu node : jumlah sisi dari root hingga node ybs.<br/>
- Subtree (atau subpohon), sebagian dari tree mulai dari suatu node N melingkupi node-node yang berada dibawah hirarkinya sehingga dapat dipandang sebagai suatu tree juga yang mana N sebagai root dari tree ini.<br/>
- Tree kosong : suatu tree yang tidak memiliki satu node pun <br/>
- Predesesor merupakan node yang berada di atas node tertentu. [3] <br/>
- Successor merupakan node yang berada dibawah node tertentu. [3] <br/>
- Ancestor merupakan seluruh node yang terletak sebelum node tertentu dan terletak pada jalur yang sama. [3] <br/>
- Descendant merupakan seluruh node yang terletak sesudah node tertentu dan terletak pada jalur yang sama. [3] <br/>
- Parent merupakan predesesor satu level di atas satu node.[3] <br/>
- Child merupakan successor satu level di bawah suatu node. [3] <br/>
- Sibling merupakan node-node yang memiliki parent yang sama dengan suatu node. [3] <br/>
<br/>


#### Jenis operasi pada tree 

1) Create: digunakan untuk membentuk binary tree baru yang masih kosong. <br/>
2) Clear: digunakan untuk mengosongkan binary tree yang sudah ada atau menghapus semua node pada binary tree.<br/>
3) isEmpty: digunakan untuk memeriksa apakah binary tree masih kosong atau tidak.<br/>
4) Insert: digunakan untuk memasukkan sebuah node kedalam tree. <br/>
5)  Find: digunakan untuk mencari root, parent, left child, atau right child dari suatu node dengan syarat tree tidak boleh kosong.<br/>
6) Update: digunakan untuk mengubah isi dari node yang ditunjuk oleh pointer current dengan syarat tree tidak boleh kosong.<br/>
7) Retrive: digunakan untuk mengetahui isi dari node yang ditunjuk pointer current dengan syarat tree tidak boleh kosong.<br/>
8) Delete Sub: digunakan untuk menghapus sebuah subtree (node beserta seluruh descendant-nya) yang ditunjuk pointer current dengan syarat tree tidak boleh kosong.<br/>
9) Characteristic: digunakan untuk mengetahui karakteristik dari suatu tree. Yakni size, height, serta average lenght-nya.<br/>
10) Traverse: digunakan untuk mengunjungi seluruh node-node pada tree dengan cara traversal. Terdapat 3 metode traversal yang dibahas dalam modul ini yakni Pre-Order, In-Order, dan Post-Order.<br/><br/>

## Guided

### 1. Guided 1 GRAPH

```c++
/// LAILATUR RAHMAH
/// 2311102177

#include <iostream>
#include <iomanip>

using namespace std;

const string simpul[7] = {
    "Ciamis",
    "Bandung",
    "Bekasi",
    "Tasikmalaya",
    "Cianjur",
    "Purwokerto",
    "Yogyakarta"
};

const int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0}
};

void tampilGraph() {
    for (int baris = 0; baris < 7; baris++) {
        cout << " " << setw(15) << left << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++) {
            if (busur[baris][kolom] != 0) {
                cout << " " << setw(15) << left << simpul[kolom] << "(" << busur[baris][kolom] << ")";
            }
        }
        cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}
```

### Output

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/8413656c-7507-4586-8b8e-856bdcbcba4f)

Kode diatas merupakan implementasi dari penggunaan Graph. Di dalam kode tersebut terdapat sebaih array simpul untuk menyimpan semua simpul dan array busur untuk menyimpan bobot setiap simpul dalam matriks. Array pertama mendeklarasikan data string dengan maksimal penyimpanan array yaitu 7 (indeks 0-6), Array kedua menggunakan 2 dimensi/matriks yang berguna untuk menyimpan data busur dengan tipe data int. Lalu ada deklarasi tampilGraph yang berguna untuk menampilkan nama graph dan bobot/jarak busur antar kota. Pada int main hanya memanggil deklarasi tampilGraph dan program tidak ada perulangan. 

### 2. Guided 2 TREE

```c++

```

### Output

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/f5c78d3f-0efc-423f-b439-7ff8e2545b09)

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/292c0b19-3835-40c5-b096-bdc84fdf779c)

Program tersebut adalah implementasi dari struktur data binary tree dalam C++, yang memungkinkan pembuatan, manipulasi, dan penelusuran pohon biner. Program ini memungkinkan pengguna untuk membuat simpul baru, menambahkan simpul anak kiri dan kanan, mengubah data pada simpul, menampilkan informasi tentang simpul, dan melakukan penelusuran pohon dengan metode preorder, inorder, dan postorder. Selain itu, program ini juga menyediakan fungsi untuk menghapus seluruh pohon atau hanya subtree tertentu, serta menghitung karakteristik pohon seperti ukuran (jumlah simpul) dan tinggi.

## Unguided 1

### 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.

``` c++
#include <iostream>
#include <iomanip>

using namespace std;

// Penamaan variabel global unutk index array dan data cin
int vertexAmount_191;
int vertexWeight_191;
string vertexName_191;

// Fungsi untuk mengisi simpul
void fillVertex(string vertex[])
{
    cout << "Silahkan masukkan nama simpul" << endl;
    for (int i = 0; i < vertexAmount_191; i++)
    {
        cout << "Simpul " << i + 1 << " : ";
        cin >> vertexName_191;

        vertex[i] = vertexName_191;
    }

    cout << endl;
}

int main()
{
    // Penginputan index oleh user
    cout << "Masukkan jumlah simpul : ";
    cin >> vertexAmount_191;

    //  Deklarasi array sesuai index
    string vertex_191[vertexAmount_191];
    int matrix_191[vertexAmount_191][vertexAmount_191];

    // Pemanggilan fungsi
    fillVertex(vertex_191);

    cout << "Silahkan masukkan bobot antar simpul" << endl;

    // Pengisian bobot simpul
    for (int i = 0; i < vertexAmount_191; i++)
    {
        for (int j = 0; j < vertexAmount_191; j++)
        {
            cout << vertex_191[i] << " ------> " << vertex_191[j] << " = ";
            cin >> vertexWeight_191;

            matrix_191[i][j] = vertexWeight_191;
        }

        cout << endl;
    }

    cout << endl;

    cout << "Matriks bobot antar simpul" << endl;
    cout << setw(12) << "";

    // Mencetak header untuk nama simpul
    for (int i = 0; i < vertexAmount_191; i++)
    {
        cout << setw(12) << vertex_191[i];
    }

    cout << endl;

    //  Mencetak bobot setiap simpul
    for (int i = 0; i < vertexAmount_191; i++)
    {
        // Mencetak kolom untuk nama simpul
        cout << setw(12) << vertex_191[i];

        for (int j = 0; j < vertexAmount_191; j++)
        {
            cout << setw(12) << matrix_191[i][j];
        }

        cout << endl;
    }
}
```

### Output

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/da686e5c-687e-42e3-9afb-4765d1524289)

### Kesimpulan

Kode diatas adalah contoh penggunaan `Graph`. Kode tersebut berfungsi untuk membuat sebuah graph dengan jumlah sesuai dengan inputan user. Pada fungsi `fillVertex` user mengisi data simpul secara manual, setelah array simpul sudah di isi selanjutnya user juga diminta untuk mengisi bobot dari setiap simpul tersebut. Terakhir program akan mencetak hasil array simpul dan busur tadi.  

## Unguided 2

### 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dan descendant dari node yang diinput kan!

``` c++
#include <iostream>
#include <iomanip>

using namespace std;

struct Node
{
    char data_191;
    Node *left_191, *right_191, *parent_191; // pointer
};

Node *root_191;

class Tree
{
public:
    Tree()
    {
        root_191 = nullptr;
    }

    bool isEmpty()
    {
        return root_191 == nullptr;
    }

    Node *makeNode(char data)
    {
        Node *newNode_191 = new Node;
        newNode_191->data_191 = data;
        newNode_191->left_191 = nullptr;
        newNode_191->right_191 = nullptr;
        newNode_191->parent_191 = nullptr;

        return newNode_191;
    }

    void makeBranch(char data)
    {
        if (isEmpty())
        {
            root_191 = makeNode(data);
            cout << "\nNode " << data << " berhasil dibuat menjadi root_191." << endl;
        }
        else
        {
            cout << "\nPohon sudah dibuat" << endl;
        }
    }

    Node *insertLeft(char data, Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!" << endl;
            return nullptr;
        }
        else
        {
            if (node == nullptr)
            {
                cout << "Node tersebut tidak valid atau tidak ada" << endl;
                return nullptr;
            }

            if (node->left_191 != nullptr)
            {
                cout << "\nNode " << node->data_191 << " sudah ada child kiri!"
                     << endl;

                return nullptr;
            }
            else
            {
                Node *newNode_191 = makeNode(data);
                newNode_191->parent_191 = node;
                node->left_191 = newNode_191;
                cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << node->data_191 << endl;
                return newNode_191;
            }
        }
    }

    Node *insertRight(char data, Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!" << endl;
            return nullptr;
        }
        else
        {
            if (node == nullptr)
            {
                cout << "Node tersebut tidak valid atau tidak ada" << endl;
                return nullptr;
            }

            if (node->right_191 != nullptr)
            {
                cout << "\nNode " << node->data_191 << " sudah ada child kanan!"

                     << endl;

                return nullptr;
            }
            else
            {
                Node *newNode_191 = makeNode(data);
                newNode_191->parent_191 = node;
                node->right_191 = newNode_191;
                cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << node->data_191 << endl;
                return newNode_191;
            }
        }
    }

    void update(char data, Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!" << endl;
        }
        else
        {
            if (!node)
                cout << "\nNode yang ingin diganti tidak ada!!" << endl;
            else
            {
                char temp = node->data_191;
                node->data_191 = data;
                cout << "\nNode " << temp << " berhasil diubah menjadi " << data << endl;
            }
        }
    }

    void retrieve(Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!" << endl;
        }
        else
        {
            if (!node)
                cout << "\nNode yang ditunjuk tidak ada!" << endl;
            else
            {
                cout << "\nData node : " << node->data_191 << endl;
            }
        }
    }

    void find(Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!" << endl;
        }
        else
        {
            if (!node)
                cout << "\nNode yang ditunjuk tidak ada!" << endl;
            else
            {
                cout << "\nData Node : " << node->data_191 << endl;
                cout << "Rootroot_191 : " << root_191->data_191 << endl;

                if (!node->parent_191)
                {
                    cout << "Parent : (tidak punya parent)" << endl;
                }
                else
                {
                    cout << "Parent : " << node->parent_191->data_191 << endl;
                }

                if (node->parent_191 != nullptr && node->parent_191->left_191 != node && node->parent_191->right_191 == node)
                {
                    cout << "Sibling : " << node->parent_191->left_191->data_191 << endl;
                }
                else if (node->parent_191 != nullptr && node->parent_191->right_191 != node && node->parent_191->left_191 == node)
                {
                    cout << "Sibling : " << node->parent_191->right_191->data_191 << endl;
                }
                else
                {
                    cout << "Sibling : (tidak punya sibling)" << endl;
                }

                if (!node->left_191)
                {
                    cout << "Child Kiri : (tidak punya Child kiri)" << endl;
                }
                else
                {
                    cout << "Child Kiri : " << node->left_191->data_191 << endl;
                }

                if (!node->right_191)
                {
                    cout << "Child Kanan : (tidak punya Child kanan)" << endl;
                }
                else
                {
                    cout << "Child Kanan : " << node->right_191->data_191 << endl;
                }
            }
        }
    }

    // Penelusuran (Traversal)
    // preOrder
    void preOrder(Node *node)
    {
        if (isEmpty())
            cout << "\nBuat tree terlebih dahulu!" << endl;
        else
        {
            if (node != nullptr)
            {
                cout << " " << node->data_191 << ", ";
                preOrder(node->left_191);
                preOrder(node->right_191);
            }
        }
    }

    // inOrder
    void inOrder(Node *node)
    {
        if (isEmpty())
            cout << "\nBuat tree terlebih dahulu!" << endl;
        else
        {
            if (node != nullptr)
            {
                inOrder(node->left_191);
                cout << " " << node->data_191 << ", ";
                inOrder(node->right_191);
            }
        }
    }

    // postOrder
    void postOrder(Node *node)
    {
        if (isEmpty())
            cout << "\nBuat tree terlebih dahulu!" << endl;
        else
        {
            if (node != nullptr)
            {
                postOrder(node->left_191);
                postOrder(node->right_191);
                cout << " " << node->data_191 << ", ";
            }
        }
    }

    // Hapus Node Tree
    void deleteTree(Node *node)
    {
        if (isEmpty())
            cout << "\nBuat tree terlebih dahulu!" << endl;
        else
        {
            if (node != nullptr)
            {
                if (node != root_191)
                {
                    if (node->parent_191->left_191 == node)
                        node->parent_191->left_191 = nullptr;
                    else if (node->parent_191->right_191 == node)
                        node->parent_191->right_191 = nullptr;
                }

                deleteTree(node->left_191);
                deleteTree(node->right_191);

                if (node == root_191)
                {
                    delete root_191;
                    root_191 = nullptr;
                }
                else
                {
                    delete node;
                }
            }
        }
    }

    // Hapus SubTree
    void deleteSub(Node *node)
    {
        if (isEmpty())
            cout << "\nBuat tree terlebih dahulu!" << endl;
        else
        {
            deleteTree(node->left_191);
            deleteTree(node->right_191);

            cout << "\nNode subtree " << node->data_191 << " berhasil dihapus."
                 << endl;
        }
    }

    // Hapus Tree
    void clear()
    {
        if (isEmpty())
            cout << "\nBuat tree terlebih dahulu!!" << endl;
        else
        {
            deleteTree(root_191);
            cout << "\nNode berhasil dihapus." << endl;
        }
    }

    // Cek Size Tree
    int size(Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!!" << endl;
            return 0;
        }
        else
        {
            if (!node)
            {
                return 0;
            }
            else
            {
                return 1 + size(node->left_191) + size(node->right_191);
            }
        }
    }

    // Cek Height Level Tree
    int height(Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!" << endl;
            return 0;
        }
        else
        {
            if (!node)
            {
                return 0;
            }
            else
            {
                int heightKiri = height(node->left_191);
                int heightKanan = height(node->right_191);
                if (heightKiri >= heightKanan)
                {
                    return heightKiri + 1;
                }
                else
                {
                    return heightKanan + 1;
                }
            }
        }
    }

    // Karakteristik Tree
    void characteristic()
    {
        int s = size(root_191);
        int h = height(root_191);
        cout << "\nSize Tree : " << s << endl;
        cout << "Height Tree : " << h << endl;
        if (h != 0)
            cout << "Average Node of Tree : " << s / h << endl;
        else
            cout << "Average Node of Tree : 0" << endl;
    }

    // Fungsi untuk mendapatkan Node root
    Node *getRoot()
    {
        return root_191;
    }

    // Fungsi untuk menemukan node tertentu
    Node *findNode(char data, Node *node)
    {
        if (node == nullptr)
            return nullptr;
        if (node->data_191 == data)
            return node;
        Node *leftResult = findNode(data, node->left_191);
        if (leftResult != nullptr && leftResult->data_191 == data)
            return leftResult;
        return findNode(data, node->right_191);
    }
};

void displayMenu()
{
    cout << "\nMenu:" << endl;
    cout << "1. Buat node root" << endl;
    cout << "2. Tambahkan child kiri" << endl;
    cout << "3. Tambahkan child kanan" << endl;
    cout << "4. Ubah node" << endl;
    cout << "5. Tampilkan data node" << endl;
    cout << "6. Cari node" << endl;
    cout << "7. Preorder traversal" << endl;
    cout << "8. Inorder traversal" << endl;
    cout << "9. Postorder traversal" << endl;
    cout << "10. Hapus subtree" << endl;
    cout << "11. Hapus seluruh tree" << endl;
    cout << "12. Tampilkan karakteristik tree" << endl;
    cout << "13. Keluar" << endl;
    cout << "Pilih menu: ";
}

int main()
{
    // Di main gak usah pakai nim lah ya, ribet 🗿
    Tree tree;
    int choice;
    char data, targetData;
    Node *currentNode = nullptr, *targetNode;

    do
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (tree.isEmpty())
            {
                cout << "Masukkan data untuk root: ";
                cin >> data;
                tree.makeBranch(data);
                currentNode = tree.getRoot();
            }
            else
            {
                cout << "Tree sudah dibuat!" << endl;
            }
            break;

        case 2:
            if (!tree.isEmpty())
            {
                cout << "Masukkan pohon yang ingin ditambah child-nya: ";
                cin >> targetData;
                cout << "Masukkan data untuk child kiri: ";
                cin >> data;

                targetNode = tree.findNode(targetData, currentNode);

                tree.insertLeft(data, targetNode);
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 3:
            if (!tree.isEmpty())
            {
                cout << "Masukkan pohon yang ingin ditambah child-nya: ";
                cin >> targetData;
                cout << "Masukkan data untuk child kanan: ";
                cin >> data;

                targetNode = tree.findNode(targetData, currentNode);

                tree.insertRight(data, targetNode);
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 4:
            if (!tree.isEmpty())
            {
                cout << "Masukkan pohon yang ingin diganti: ";
                cin >> targetData;
                cout << "Masukkan data baru untuk pohon: ";
                cin >> data;

                targetNode = tree.findNode(targetData, currentNode);

                tree.update(data, targetNode);
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 5:
            if (!tree.isEmpty())
            {
                cout << "Masukkan pohon yang ingin ditampilkan: ";
                cin >> targetData;

                targetNode = tree.findNode(targetData, currentNode);

                tree.retrieve(targetNode);
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 6:
            if (!tree.isEmpty())
            {
                cout << "Masukkan pohon yang ingin dicari: ";
                cin >> targetData;

                targetNode = tree.findNode(targetData, currentNode);

                tree.find(targetNode);
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 7:
            if (!tree.isEmpty())
            {
                cout << "Preorder traversal: ";
                tree.preOrder(tree.getRoot());
                cout << endl;
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 8:
            if (!tree.isEmpty())
            {
                cout << "Inorder traversal: ";
                tree.inOrder(tree.getRoot());
                cout << endl;
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 9:
            if (!tree.isEmpty())
            {
                cout << "Postorder traversal: ";
                tree.postOrder(tree.getRoot());
                cout << endl;
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 10:
            if (!tree.isEmpty())
            {
                cout << "Masukkan pohon yang ingin di delete sub tree-nya: ";
                cin >> targetData;

                targetNode = tree.findNode(targetData, currentNode);

                tree.deleteSub(targetNode);
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 11:
            if (!tree.isEmpty())
            {
                tree.clear();
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 12:
            if (!tree.isEmpty())
            {
                tree.characteristic();
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 13:
            cout << "Keluar dari program." << endl;
            break;

        default:
            cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
        }
    } while (choice != 13);

    return 0;
}
```

### Output

#### Pembuatan root

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/a1b0b65c-ccf9-4cf8-b660-142d4a4dcd35)


#### 2. Penambahan child

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/be3b9139-5bca-4bb1-ab98-5908c5b43330)

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/e88a8e90-a399-497c-bf05-31e6dbdcdd79)

#### 3. Pengubahan data node

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/b2e8cc9a-1bb5-4c06-bf0b-73d3c69b6c59)

#### 4. Menampilkan data node

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/13d8ac34-f09d-4250-842a-8040d45ad0da)

#### 5. Mencari informasi suatu node

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/86515a9d-64a0-49e2-99fd-c84dea950ec1)

#### 6. Pencetakan tree

- Pre Order

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/80e91c28-9559-4bd3-b9e8-6b977d6106fd)

- In Order

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/6c9850f7-7b42-4b22-b86c-bf127181f58e)

- Post Order

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/9817e46f-f3a4-4690-a0dd-a9442f060f7e)

#### 7. Penghapusan subtree dari root

![image](https://github.com/morcellaaa/Struktur-Data-Assignment/assets/169327656/1ffdd5eb-7ff8-4b1a-a91b-a4413689017f)

Kode diatas adalah contoh penggunaan `Tree` Fungsi-fungsi serta logika yang digunakan pada dasarnya sama seperti `Guided 2`. Yang membedakan disini hanya penambahan fungsi `getRoot` yaitu untuk mengakses node root di luar class `Tree` dan fungsi `findNode` untuk mencari suatu node dengan data yang sama yang diterima parameternya. Pada dasarnya penambahan fungsi-fungsi tersebut berfungsi untuk keperluan tampilan menu agar user memiliki fleksibilitas lebih dalam mengolah tree.  

## Kesimpulan

Graf dalam C++ adalah sebuah struktur data yang menggambarkan hubungan antara berbagai entitas atau simpul, yang disebut juga dengan bobot. Salah satu keuntungan utama penggunaan graf adalah kemampuannya untuk menemukan jalur terpendek antara simpul-simpul, serta memperoleh informasi tentang tetangga dari suatu simpul. Selain itu, graf juga digunakan dalam implementasi algoritma seperti Depth-First Search (DFS) dan Breadth-First Search (BFS). Lebih lanjut, penggunaan graf membantu dalam pengorganisasian data secara efisien, sementara struktur non-linier graf memungkinkan pemahaman yang lebih baik terhadap masalah yang kompleks melalui visualisasi yang intuitif. [1]

Sementara itu, Tree dalam C++ adalah struktur data yang menawarkan konsep hierarki, di mana setiap data atau simpul memiliki hubungan parent-child. Keuntungan utama menggunakan struktur data Tree meliputi kemampuannya dalam memindahkan subtree dengan upaya minimal, mencerminkan hubungan data secara struktural, dan menawarkan operasi pencarian dan penyisipan yang efisien. Dengan demikian, Tree sangat berguna untuk membangun hierarki data yang jelas dan terstruktur dengan baik. [3]

## Referensi

[1] Bahit, M, ALGORITMA PEMROGRAMAN TERSTRUKTUR . Cetakan Pertama. Banjarmasin:Poliban Press, 2024.

[2] Andrew Lumsdaine, Luke D'Alessandro, Kevin Deweese, Jesun Firoz, Xu Tony Liu, Scott McMillan, John Phillip Ratzloff, and Marcin Zalewski. NWGraph: A Library of Generic Graph Algorithms and Data Structures in C++20. In 36th European Conference on Object-Oriented Programming (ECOOP 2022). Leibniz International Proceedings in Informatics (LIPIcs), Volume 222, pp. 31:1-31:28, Schloss Dagstuhl – Leibniz-Zentrum für Informatik, 2022.

[3] Sindar, A, STRUKTUR DATA DAN ALGORITMADENGAN C++. Cetakan Pertama. Serang:CV.AA.RIZKY, 2018.

