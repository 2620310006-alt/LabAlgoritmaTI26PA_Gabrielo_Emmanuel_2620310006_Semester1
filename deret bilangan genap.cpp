#include <iostream>

using namespace std;

int main() {
    int jumlah = 0;
    int genap = 2;

    for (int i = 1; i <= 10; i++) {
        cout << genap;
        jumlah += genap;
        
        if (i < 10) {
            cout << " + ";
        }
        
        genap += 2;
    }

    cout << " = " << jumlah << endl;

    return 0;
}