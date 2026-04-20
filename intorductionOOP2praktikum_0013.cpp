#include <iostream>
using namespace std;

class Barang
{
    public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void spesifikasi()
    {
         cout << "Nama: " << nama << endl;
         cout << "jumlah :" << jumlah << endl;
         cout << "Kategori :" << kategori << endl;
         cout << "tanggalProduksi :" << tanggalProduksi << endl;
    }

};

int main()
{
    Barang elektronik;
    elektronik.nama = "Mesin Cuci";
    elektronik.jumlah = 6;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "10-05-2023";

    elektronik.spesifikasi();

    Barang nonelektronik;
    nonelektronik.nama = "Kursi";
    nonelektronik.jumlah = 5;
    nonelektronik.kategori = "NonElektronik";
    nonelektronik.tanggalProduksi = "18-03-2024";

    nonelektronik.spesifikasi()
}
