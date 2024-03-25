#include <iostream>
using namespace std;

int main() {
    int siz, baris, kolom;
    cout << "Masukkan ukuran array [x y z]: ";
    cin >> siz >> baris >> kolom;
    int arr[siz][baris][kolom];

    for (int x = 0; x < siz; x++) {
        for (int y = 0; y < baris; y++) {
            for (int z = 0; z < kolom; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    cout << "Data Array:\n";
    for (int x = 0; x < siz; x++) {
        for (int y = 0; y < baris; y++) {
            for (int z = 0; z < kolom; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    cout << "Data Array:\n";
    for (int x = 0; x < siz; x++) {
        for (int y = 0; y < baris; y++) {
            for (int z = 0; z < kolom; z++) {
                cout << arr[x][y][z] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}