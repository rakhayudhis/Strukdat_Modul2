#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Masukan panjang array: ";
    cin >> a;

    int array[a];
    cout << "Masukan " << a << " angka\n";
    for (int i = 0; i < a; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
    }

    int pilih;
    cout << "\nMenu:\n";
    cout << "1. Nilai Maksimum\n";
    cout << "2. Nilai Minimum\n";
    cout << "3. Rata-rata\n";
    cout << "Pilih menu : ";
    cin >> pilih;

    switch(pilih) {
        case 1: {
            int max = array[0];
            for (int i = 1; i < a; i++) {
                if (array[i] > max) {
                    max = array[i];
                }
            }
            cout << "Nilai Maksimum adalah " << max << endl;
            break;
        }
        case 2: {
            int min = array[0];
            for (int i = 1; i < a; i++) {
                if (array[i] < min) {
                    min = array[i];
                }
            }
            cout << "Nilai Minimum adalah " << min << endl;
            break;
        }
        case 3: {
            float sum = 0;
            for (int i = 0; i < a; i++) {
                sum += array[i];
            }
            float avg = sum / a;
            cout << "Rata-rata adalah " << avg << endl;
            break;
        }
        default:
            cout << "pilihan tidak validf\n";
    }

    return 0;
}