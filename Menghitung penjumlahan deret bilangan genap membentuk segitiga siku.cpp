#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah baris deret bilangan genap: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        // Menghitung jumlah deret bilangan genap sampai i
        sum += 2 * i;
        
        // Menampilkan deret bilangan genap sampai i
        for (int j = 1; j <= i; ++j) {
            if (j > 1) {
                cout << " + ";
            }
            cout << 2 * j;
        }
        
        // Menampilkan hasil penjumlahan deret bilangan genap sampai i
        cout << " = " << sum << endl;
    }

    return 0;
}