#include <iostream>
using namespace std;

class Mahasiswa{

public :
    int nim;
    string nama;
    float nilai;

    void printdata{
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
}; //batas class

int main(){

    barang brg;

    barang elektronik;
    barang non_elektronik;

    elektronik.nama = "TV";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggal_produksi = "2025-01-01";

    non_elektronik.nama = "Kursi";
    non_elektronik.jumlah = 20;
    non_elektronik.kategori = "Non-Elektronik";
    non_elektronik.tanggal_produksi = "2025-02-01";

    elektronik.printdata();
    non_elektronik.printdata();
}
    