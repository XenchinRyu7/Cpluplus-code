#include <iostream>
using namespace std;

int main () {
    int data_angka[8] = {10, 3, 8, 9, 7, 6, 4, 10}, s, j, temporary;

    cout << "Program Mengurutkan elemen array angka yang dimasukan dari kecil ke besar (Ascending)!" << endl;
    cout << "Mencetak maximal 8 angka!" << endl;
    cout << endl;

    for (s = 0; s < 7; s++) {
        for (j = s + 1; j < 8; j++) { 
            if (data_angka[s] > data_angka[j]) { // ascending > descending <
                temporary = data_angka[s];
                data_angka[s] = data_angka[j];
                data_angka[j] = temporary;
            }
        }
    }

    cout << "Hasil pengurutan angka yang dimasukan adalah" << endl;
    for (s = 0; s < 8; s++) {
        cout << data_angka[s] << " ";
    }
    return 0;
}