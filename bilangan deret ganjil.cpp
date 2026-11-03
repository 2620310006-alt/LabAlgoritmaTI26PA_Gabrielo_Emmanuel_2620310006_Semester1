#include <iostream>

using namespace std;

int main() {
    int jumlah = 0;
    int ganjil = 1;

    for (int i = 1; i <= 10; i++) {
        cout << ganjil;
        jumlah += ganjil;
        
        if (i < 10) {
            cout << " + ";
        }
        
        ganjil += 2;
    }

    cout << " = " << jumlah << endl;

    return 0;
}