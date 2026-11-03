#include <iostream>

using namespace std;

int main() {
    int n, i, pembagi = 0;

    cout << "Masukkan nilai: ";
    cin >> n;

    if (n <= 1) {
        cout << "Bukan termasuk bilangan prima" << endl;
    } else {
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                pembagi++;
            }
        }

        if (pembagi == 2) {
            cout << "Termasuk bilangan PRIMA" << endl;
        } else {
            cout << "Bukan termasuk bilangan prima" << endl;
        }
    }

    return 0;
}