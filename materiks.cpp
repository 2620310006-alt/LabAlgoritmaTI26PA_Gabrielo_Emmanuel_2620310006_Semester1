#include <iostream>

using namespace std;

int main() {
    // Perulangan untuk baris (1 sampai 5)
    for (int i = 1; i <= 5; i++) {
        // Perulangan untuk kolom mencetak angka sebanyak 5 kali
        for (int j = 1; j <= 5; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}