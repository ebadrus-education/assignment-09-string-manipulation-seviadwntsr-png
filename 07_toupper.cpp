#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main () {
    string teks;
    int i;
    cout << "Teks : ";
    getline(cin, teks);

    for (i=0; i<teks.length(); i++) {
        teks[i] = toupper(teks[i]);
    }
    cout << "hasil setelah diubah : " << teks;
    return 0;
}