#include <iostream>
#include <string>
using namespace std;

int main () {
    string teks, ganti;
    int pss, jumlah;

    cout << "Teks : ";
    getline(cin, teks);
    cout << "mulai ganti pada posisi berapa : ";
    cin >> pss;
    cout << "ganti berapa huruf : ";
    cin >> jumlah;
    cin.ignore();
    cout << "masukkan teks pengganti : ";
    getline(cin, ganti);

    teks.replace(pss, jumlah, ganti);
    cout << "hasil setelah diganti : ";

    return 0;
}