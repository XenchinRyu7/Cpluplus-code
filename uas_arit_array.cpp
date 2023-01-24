#include <iostream>
using namespace std;

int aritmatika(int bilangan1, int bilangan2, int total_bilangan) {
    int hasil;
    hasil = bilangan1 * bilangan2;
    return hasil;
}

int main () {
    int total_bilangan, hasil;
    cout << "Masukan berapa bilangan yang akan di kalikan : ";
    cin >> total_bilangan;
    int bilangan1[total_bilangan], bilangan2[total_bilangan];

    for (int i = 0; i < total_bilangan; i++) {
        cout << "Masukan Bilangan 1 ke " << i + 1 << " : ";
        cin >> bilangan1[i];
        cout << "Masukan Bilangan 2 ke " << i + 1 << " : ";
        cin >> bilangan2[i];

        hasil = aritmatika(bilangan1[i], bilangan2[i], total_bilangan);
        cout << "ini adalah hasil : " << hasil;
        cout << endl;
    }

    return 0;
}