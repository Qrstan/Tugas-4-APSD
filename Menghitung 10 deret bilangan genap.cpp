#include <iostream>
using namespace std;

int main() {
    int jumlah = 0;

    // Menghitung 10 deret bilangan genap
    for (int i = 1; i <= 10; ++i) {
        int bilangan_genap = 2 * i;
        jumlah += bilangan_genap;
        
        // Output bilangan genap (kecuali yang terakhir)
        cout << bilangan_genap;
        if (i < 10) {
            cout << " + ";
        }
    }
    
    // Menampilkan hasil jumlah
    cout << " = " << jumlah << endl;

    return 0;
}
