#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks, cari;
    cout << "Teks : ";
    getline(cin, teks);
    cout << "kata yang ingin dicari : ";
    getline(cin, cari);

    size_t pss = teks.find(cari);

    if (pss != string::npos) {
        cout << "kata ditemukan pada index ke-" << pss;
        }
    else {cout << "kata tidak ditemukan";
    }

    return 0;
}