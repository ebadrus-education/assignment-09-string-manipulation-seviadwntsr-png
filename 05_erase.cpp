#include <iostream>
#include <string>
using namespace std;

int main () {
    string teks;
    int pss, jumlah;

    cout << "Teks : ";
    getline(cin, teks);
    cout << "hapus mulai pada index berapa : ";
    cin >> pss;
    cout << "hapus berapa huruf : ";
    cin >> jumlah;

    teks.erase(pss, jumlah);
    cout << "hasil setelah diubah : "<< teks;

    return 0;
}