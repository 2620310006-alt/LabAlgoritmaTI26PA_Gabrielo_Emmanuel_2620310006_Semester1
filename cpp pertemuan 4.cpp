#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    float nilai1, nilai2, nilai3, rataRata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nama Siswa : ";
    getline(cin, nama);
    cout << "Nilai Pertandingan I : ";
    cin >> nilai1;
    cout << "Nilai Pertandingan II : ";
    cin >> nilai2;
    cout << "Nilai Pertandingan III : ";
    cin >> nilai3;

    rataRata = (nilai1 + nilai2 + nilai3) / 3;

    cout << endl;
    cout << "Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rataRata << " dari hasil perlombaan yang diikutinya." << endl;
    
    if (rataRata >= 85) {
        cout << "Hadiah yang didapat adalah Komputer Core i5" << endl;
    } else if (rataRata >= 70) {
        cout << "Hadiah yang didapat adalah Uang sebesar Rp. 2.500.000" << endl;
    } else {
        cout << "Hadiah yang didapat adalah Hadiah Hiburan." << endl;
    }

    return 0;
}