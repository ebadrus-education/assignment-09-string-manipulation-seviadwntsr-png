#include <iostream>
#include <string>
using namespace std;

int main() {
    string n, m;
    cout << "Nama : ";
    getline(cin, n);
    cout << "Jurusan : ";
    getline(cin, m);
    cout << "Gabungan : " << n << " " + m;
    
    return 0;
}