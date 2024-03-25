#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Masukkan panjang array : ";
    cin >> a;
    int genap[a], ganjil[a], array[a];
    int tampil_genap = 0, tampil_ganjil = 0;

    cout << "Masukkan " << a << " angka\n";
    for (int i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i+1) << ": ";
        cin >> array[i];

        if (array[i] % 2 == 0) {
            genap[tampil_genap] = array[i];
            tampil_genap++;
        } else {
            ganjil[tampil_ganjil] = array[i];
            tampil_ganjil++;
        }
    }
    cout << "\nData Array   : ";
    for (int i = 0; i < a; i++) {
        cout << array[i] << " ";
    }
    cout << "\nNomor Genap  : ";
    for (int i = 0; i < tampil_genap; i++) {
        cout << genap[i] << ", ";
    }
    cout << "\nNomor Ganjil : ";
    for (int i = 0; i < tampil_ganjil; i++) {
        cout << ganjil[i] << ", ";
    }
    return 0;
}