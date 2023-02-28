#include <iostream>
using namespace std;

int main () {
    int loop = 0;

    cout << "Program biodata mahasiswa" << endl;
    cout << endl;
    cout << "Berapa total mahasiswa? : ";
    cin >> loop;

    cout << endl;

    string nama[loop], prodi[loop], kelas[loop], nim[loop];
    int nilai1[loop], nilai2[loop], nilai3[loop], total_nilai[loop];
    char grade[loop];

    for (int i = 0; i < loop; i++) {
        cout << "Masukan nama : ";
        getline(cin >> ws, nama[i]);
        cout << "Masukan NIM : ";
        cin >> nim[i];
        cout << "Masukan kelas : ";
        getline(cin >> ws, kelas[i]);
        cout << "Masukan prodi : ";
        getline(cin >> ws, prodi[i]);
        cout << "nilai tugas : ";
        cin >> nilai1[i];
        cout << "nilai uts : ";
        cin >> nilai2[i];
        cout << "nilai uas : ";
        cin >> nilai3[i];
        total_nilai[i] = (nilai1[i] + nilai2[i] + nilai3[i]) / 3;
        
        if (total_nilai[i] <= 40) {
            grade[i] = 'E';
        } else if (total_nilai[i] <= 50) {
            grade[i] = 'D';
        } else if (total_nilai[i] <= 60) {
            grade[i] = 'C';
        } else if (total_nilai[i] <= 70) {
            grade[i] = 'B';
        } else if (total_nilai[i] <= 80) {
            grade[i] = 'A';
        } else if (total_nilai[i] > 80 && total_nilai[i] <= 100) {
            grade[i] = 'S';
        } else {
            grade[i] = 'N';
        }
        cout << endl;
    }
    system("cls");


    cout << "NO" << "\tNAMA" << "\t\tNIM" << "\t\tKELAS" << "\tprodi" << "\t\tTUGAS" << "\tUTS" << "\tUAS" << "\tTOTAL NILAI" << "\tGRADE"<< endl;
    for (int i = 0; i < loop; i++) {
        cout << i << "\t" << nama[i] << "\t\t" << nim[i] << "\t" << kelas[i] << "\t" << prodi[i] << "\t" << nilai1[i] << "\t" << nilai2[i] << "\t" << nilai3[i] << "\t" << total_nilai[i] << grade[i] << endl;
        cout << endl;
    }

    cout << "TERIMA KASIH!!!" << endl;
    return 0;
}