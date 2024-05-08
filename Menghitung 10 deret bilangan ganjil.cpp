#include <iostream>
using namespace std;

int main() {
    int jumlah = 0;

    // Menghitung 10 deret bilangan ganjil
    for (int i = 1; i <= 10; ++i) {
        int bilangan_ganjil = 2 * i - 1; // Rumus untuk bilangan ganjil
        jumlah += bilangan_ganjil;
        
        // Output bilangan ganjil (kecuali yang terakhir)
        cout << bilangan_ganjil;
        if (i < 10) {
            cout << " + ";
        }
    }
    
    // Menampilkan hasil jumlah
    cout << " = " << jumlah << endl;

    return 0;
}
