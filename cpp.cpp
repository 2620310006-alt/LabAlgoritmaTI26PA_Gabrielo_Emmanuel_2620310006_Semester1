#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    string npm;

    cout << "Masukkan Nama : ";
    getline(cin, nama);

    cout << "Masukkan NPM  : ";
    cin >> npm;

    cout << "\nNama : " << nama << endl;
    cout << "NPM  : " << npm << endl;

    return 0;
}