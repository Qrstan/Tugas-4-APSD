#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah baris deret bilangan ganjil: ";
    cin >> n;

    int product = 1;

    for (int i = 1; i <= n; ++i) {
        // Menghitung hasil perkalian deret bilangan ganjil sampai i
        product *= (2 * i - 1);
        
        // Menampilkan deret bilangan ganjil sampai i
        for (int j = 1; j <= i; ++j) {
            if (j > 1) {
                cout << " * ";
            }
            cout << (2 * j - 1);
        }
        
        // Menampilkan hasil perkalian deret bilangan ganjil sampai i
        cout << " = " << product << endl;
    }

    return 0;
}