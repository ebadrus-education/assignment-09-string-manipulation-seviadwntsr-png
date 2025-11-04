#include <iostream>
#include <string>
using namespace std;

int main () {
    string t;
    int pss, n;
    cout << "Teks : ";
    getline(cin, t);
    cout << "index awal : ";
    cin >> pss;
    cout << "akhir : ";
    cin >> n;
    cout << "Hasil : " << t.substr(pss,n);

    return 0;
}