#include <iostream>  
#include <conio.h> 
#include <cctype> 
#include <string>
#include <algorithm> 
#include <vector>
#include <windows.h>
using namespace std;

void sports() { 
    int merek[2][8][60] = {
        {
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,0,0,1,0,1,1,0,0,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,0,0,1,0,1,0,0,1,0,0,0,1,0,1,0,1,1,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,0,0,1,0,1,0,0,0,1,0,0,1,0,1,0,1,1,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,1,1,1,0,1,0,0,0,0,0,1,1,0,1,0,1,0,0,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        },
        {
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,0,0,1,0,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,1,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,1,0,1,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,1,0,1,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,0,1,0,0,0,1,1,1,1,0,1,1,1,1,0,1,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,1,0,1,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1,0,1,0,0,1,0,1,1,1,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        }
    };
    for (int s = 0; s < 2; s++) {
        for (int r = 0; r < 8; r++) {
            cout << "                ";
            for (int n = 0; n < 60; n++) {
                if (merek[s][r][n] == 0) {
                    cout << '\xDB';
                } else {
                    cout << '\x20';
                }
            }
            cout << endl;
        }
    }
};

void tempat() { 
    int denah[4][8][28] = {
        {
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
            {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
            {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
            {0,1,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0},
            {0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0},
            {0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1,1,1,0,1,0,0,1,0},
            {0,1,0,0,1,0,0,1,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,1,0,0,1,0}
        },
        {
            {0,1,0,0,1,0,0,1,1,0,0,1,0,0,0,0,1,0,1,1,1,1,0,1,0,0,1,0},
            {0,1,0,0,1,0,0,1,1,0,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,0,1,0},
            {0,1,0,0,1,0,0,1,1,0,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,0,1,0},
            {0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1,1,1,0,1,0,0,1,0},
            {0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0},
            {0,1,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0},
            {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
            {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}
        },
        {
            {0,1,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0},
            {0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0},
            {0,1,0,0,1,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
            {0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0},
            {0,1,0,0,1,0,1,1,1,1,0,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0},
            {0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0},
            {0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0},
            {0,1,0,0,1,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}
        },
        {
            {0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0},
            {0,1,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0},
            {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
            {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
            {0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0},
            {0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0}
        }
    };
    for (int s = 0; s < 4; s++) {
        for (int r = 0; r < 8; r++) {
            cout << "                ";
            for (int n = 0; n < 28; n++) {
                if (denah[s][r][n] == 0) {
                    cout << '\xDB';
                } else {
                    cout << '\x20';
                }
            }
            cout << endl;
        }
    }
};

int main () {
    int pelanggan, i, laporan = 0, bayar, index; 
    string pass[2] = {"admin123", "user123"}, cek;
    char login, baru;
    vector<string> nama, jam, no_telp;
    vector<int> durasi, tanggal, kode_lap, harga;
    rerun:
    sports(); 
    salah:
    cout << "=================================================" << endl;
    cout << "Selamat datang, silahkan login terlebih dahulu!" << endl;
    cout << "1. Admin" << endl;
    cout << "2. User" << endl;
    cout << "3. close program" << endl;
    cout << "Masukan disini [1/2/3] : ";
    cin >> login;
    if (login != '1' && login != '2' && login != '3') { 
        cout << "Masukan inputan dengan benar!" << endl;
        login = ' ';
        getch();
        system("cls");  
        goto salah;
    }
    cout << "=================================================" << endl;
    getch(); 

    if (login == '1') {
        string hapus, cek_data; 
        ulang: 
        cout << "Masukan password     : ";
        cin >> cek; 
        if (cek == pass[0]) { 
            system("cls");
            cout << "Selamat datang admin!" << endl;
            getch();
        } else {
            cout << "Password salah, silahkan masukan kembali!" << endl;
            goto ulang; 
        }
        kembali: 
        system("cls");
        cout << "=============================" << endl;
        cout << "1. Cek Data Lapangan" << endl;
        cout << "2. Laporan Keuangan Harian" << endl;
        cout << "3. Log out" << endl;
        cout << "Masukan disini [1/2/3] : ";
        cin >> login; 
        if (login != '1' && login != '2' && login != '3') { 
            cout << "Masukan inputan dengan benar!" << endl;
            login = ' ';
            getch();
            system("cls");  
            goto kembali;
        }
        cout << "=============================" << endl;
        getch();
        if (login == '1') { 
            login = ' ';
            refresh: 
            if (nama.size() > 0) { 
                system("cls");
                for (i = 0; i < nama.size(); i++) { 
                    cout << "=====================================" << endl;
                    cout << "NAMA         : " << nama[i] << endl;
                    cout << "KODE LAP     : " << kode_lap[i] << endl;
                    cout << "TANGGAL SEWA : " << tanggal[i] << endl;
                    cout << "JAM MAIN     : " << jam[i] << endl;
                    cout << "DURASI MAIN  : " << durasi[i] << endl;
                    cout << "NO TELP      : " << no_telp[i] << endl;
                    cout << "UANG MASUK   : " << harga[i] << endl;
                    cout << "=====================================" << endl;
                    cout << endl;
                    getch();
                }
                cout << "Hapus data? y/t : ";
                cin >> hapus;
                transform(hapus.begin(), hapus.end(), hapus.begin(), ::toupper);
                if (hapus == "Y") {
                    cout << "Data pelanggan yang mana? masukan namanya disini : ";
                    cin >> cek_data;
                    transform(cek_data.begin(), cek_data.end(), cek_data.begin(), ::toupper);
                    for (i = 0; i < nama.size(); i++) {
                        if (nama[i] == cek_data) {
                            nama.erase(nama.begin() + i);
                            kode_lap.erase(kode_lap.begin() + i);
                            tanggal.erase(tanggal.begin() + 1);
                            jam.erase(jam.begin() + 1);
                            durasi.erase(durasi.begin() + 1);
                            no_telp.erase(no_telp.begin() + 1);
                            harga.erase(harga.begin() + 1);
                            i--;
                        }
                    }
                    cout << "selesai!" << endl;
                    cout << "Baik data akan kembali di refresh" << endl;
                    cout << "Mohon tunggu" << endl;
                    for (int i = 0; i < 5; i++) {
                        cout << "." ;
                        Sleep(1000);
                    }
                    system("cls");
                    goto refresh;

                } else {
                    cout << "Oke" << endl;
                }
                cout << "Kembali ke menu? atau log out? [1/2] : ";
                cin >> login; 
                if (login == '1') {
                    system("cls");
                    login = ' ';
                    goto kembali;
                } else {
                    system("cls");
                    goto rerun;
                }
            } else {
                cout << "==============================================" << endl;
                cout << "Pemboking belum ada!" << endl;
                cout << "Anda kami kembalikan ke menu kan! Terima kasih" << endl;
                cout << "==============================================" << endl;
                getch();
                system("cls");
                goto kembali;
            }
                
        } else if (login == '2') { 
            system("cls");
            if (nama.size() == 0) { 
                cout << "==============================================" << endl;
                cout << "Belum ada transaksi!" << endl;
                cout << "Anda kami kembalikan ke menu kan! Terima kasih" << endl;
                cout << "==============================================" << endl;
                getch();
                system("cls");
                goto kembali;
            }
            cout << "Laporan Keuangan UNIKU FUTSAL" << endl;
            cout << "==================================" << endl;
            for (i = 0; i < nama.size(); i++) { 
                laporan += harga[i];
            }
            cout << "Total pelanggan hari ini : " << nama.size() << endl; 
            cout << "Total pemasukan          : " << laporan << endl;
            cout << "==================================" << endl;
            getch();
            cout << "Kembali ke menu? atau log out? [1/2] : ";
            cin >> login;
            if (login == '1') { 
                login = ' ';
                system("cls");
                goto kembali;
            } else {
                system("cls");
                goto rerun;
            }
        } else {
            getch();
            system("cls");
            goto rerun;
        }
    } else if (login == '2') {
        string nama_pelanggan, play, telepon, konversi_pelanggan, konversi_lapangan, konversi_sewa, konversi_menit; 
        int lapangan, sewa, menit, i, total; 
        ulang1:
        cout << "Masukan password     : ";
        cin >> cek; 
        if (cek == pass[1]) {
            system("cls");
            cout << "Selamat datang user!" << endl;
            getch();
        } else {
            cout << "Password salah, silahkan masukan kembali!" << endl;
            goto ulang1; 
        }
        
        menu:
        cout << "===============================" << endl;
        cout << "1. Buat transaksi" << endl;
        cout << "2. Log out" << endl;
        cout << "Masukan disini [1/2] : ";
        cin >> login; 
        if (login != '1' && login != '2') { 
            cout << "Masukan inputan dengan benar! contoh [1/2]" << endl;
            getch();
            system("cls");
            goto menu;
        } else if (login == '2') {
            login = ' ';
            getch();
            system("cls");
            goto rerun;
        }
        cout << "===============================" << endl;

        tfnew:
        system("cls");
        cout << "Gambar Lapangan" << endl;
        cout << "===========================================================================================================================================================================================" << endl;
        tempat();
        cout << "===========================================================================================================================================================================================" << endl;
        cout << "\nLapangan 1 adalah lapangan VINYL           : Rp. 150000" << "\tUntuk jam buka  : - Pagi 08:00 sampai 11:00"<< "\tBuka setiap hari, libur hanya hari besar saja" << endl;
        cout << "Lapangan 2 adalah lapangnan KARPET PLASTIK : Rp. 175000" << "\t                : - Sore 14:00 sampai 17:00"<< "\t Maksimal pemesanan 9 lapang dalam 1 hari yang sama, pengecekan oleh admin" << endl;
        cout << "Lapangan 3 adalah lapangan SINTETIS        : Rp. 200000" << "\t                : - Malam 20:00 sampai 23:00"<< endl;
        cout << "===========================================================================================================================================================================================" << endl;
        transaksi:
        cout << "\nMasukan jumlah pemboking : ";
        cin >> konversi_pelanggan;
        if (all_of(konversi_pelanggan.begin(), konversi_pelanggan.end(), ::isdigit)) { 
            pelanggan = stoi(konversi_pelanggan);
        } else {
            cout << "Maaf, inputan harus angka!" << endl;
            goto transaksi;
        }
        cout << "===========================================================================================================================================================================================" << endl;
        getch();
        system("cls");

        for (i = 0; i < pelanggan; i++) { 
            if (baru == '1') {
                index;
            } else {
                index = i;
            }
            system("cls");
            cout << "Transaksi ke             : " << i + 1 << endl;
            cout << "Masukan nama             : ";
            cin.ignore();
            getline(cin >> ws, nama_pelanggan);
            transform(nama_pelanggan.begin(), nama_pelanggan.end(), nama_pelanggan.begin(), ::toupper);
            nama.push_back(nama_pelanggan); 
            
            lap:
            cout << "Masukan kode lap [1/2/3] : ";
            cin >> konversi_lapangan;
            if (all_of(konversi_lapangan.begin(), konversi_lapangan.end(), ::isdigit)) {
                lapangan = stoi(konversi_lapangan);
                if (lapangan != 1 && lapangan != 2 && lapangan != 3) {
                    cout << "Mohon masukan inputan dengan benar untuk kode lap, contoh 1 sampai 3" << endl;
                    goto lap;  
                }
            } else {
                cout << "Maaf, inputan harus angka!" << endl;
                goto lap;
            }
            kode_lap.push_back(lapangan);
            
            sewa:
            cout << "Masukan tanggal sewa     : ";
            cin >> konversi_sewa;
            if (all_of(konversi_sewa.begin(), konversi_sewa.end(), ::isdigit)) {
                sewa = stoi(konversi_sewa);
            } else {
                cout << "Maaf, inputan harus angka!" << endl;
                goto sewa;
            }
            tanggal.push_back(sewa);
            
            jam:
            cout << "Masukan Jam main         : ";
            getline(cin >> ws, play);
            if (play != "08:00" && play != "14:00" && play != "20:00") {
                cout << "Mohon masukan inputan dengan benar untuk jam, sesuai ketentuan di atas, contoh [08:00]" << endl;
                goto jam; 
            }
            jam.push_back(play);

            durasi:
            cout << "Masukan Durasi Jam Main  : ";
            cin >> konversi_menit;
            if (all_of(konversi_menit.begin(), konversi_menit.end(), ::isdigit)) {
                menit = stoi(konversi_menit);
                if (menit != 1 && menit != 2 && menit != 3) { 
                    cout << "Mohon masukan untuk inputan durasi main, kami hanya 1 sampai 3 jam per pagi, sore, dan malam!" << endl;
                    goto durasi;
                }
            } else {
                cout << "Maaf, inputan harus angka!" << endl;
                goto durasi;
            }
            durasi.push_back(menit);
            
            cout << "No Telp                  : ";
            cin.ignore();
            getline(cin, telepon);
            no_telp.push_back(telepon);
            cout << endl;

            system("cls");
            if (kode_lap[index] == 1) {
                total = durasi[index] * 150000;
                harga.push_back(total);
            } else if (kode_lap[index] == 2) {
                total = durasi[index] * 175000;
                harga.push_back(total);
            } else if (kode_lap[index] == 3) {
                total = durasi[index] * 200000;
                harga.push_back(total);
            }

            cout << "           UNIKU FUTSAL" << endl; 
            cout << "        INVOICE PEMBAYARAN" << endl;
            cout << "====================================" << endl;
            cout << "NAMA      : " << nama[index] << endl;
            cout << "KODE LAP  : " << kode_lap[index] << endl;
            cout << "TANGGAL   : " << tanggal[index] << endl;
            if (jam[index] == "08:00") {
                if (durasi[index] == 1) {
                    cout << "JAM MAIN  : " << jam[index] << " sampai 09:00" <<endl;
                } else if (durasi[index] == 2) {
                    cout << "JAM MAIN  : " << jam[index] << " sampai 10:00" <<endl;
                } else if (durasi[index] == 3) {
                    cout << "JAM MAIN  : " << jam[index] << " sampai 11:00" <<endl;
                }
            } else if (jam[index] == "14:00") {
                if (durasi[index] == 1) {
                    cout << "JAM MAIN  : " << jam[index] << " sampai 15:00" <<endl;
                } else if (durasi[index] == 2) {
                    cout << "JAM MAIN  : " << jam[index] << " sampai 16:00" <<endl;
                } else if (durasi[index] == 3) {
                    cout << "JAM MAIN  : " << jam[index] << " sampai 17:00" <<endl;
                }
            } else if (jam[index] == "20:00") {
                if (durasi[index] == 1) {
                    cout << "JAM MAIN  : " << jam[index] << " sampai 21:00" <<endl;
                } else if (durasi[index] == 2) {
                    cout << "JAM MAIN  : " << jam[index] << " sampai 22:00" <<endl;
                } else if (durasi[index] == 3) {
                    cout << "JAM MAIN  : " << jam[index] << " sampai 23:00" <<endl;
                }
            }
            cout << "DURASI    : " << durasi[index] << " JAM" << endl;
            cout << "NO TELP   : " << no_telp[index] << endl;
            cout << "====================================" << endl;
            cout << "HARGA     : Rp " << harga[index] << endl;
            cout << "BAYAR     : Rp "; cin >> bayar; 
            cout << "KEMBALIAN : " << bayar - harga[index] << endl; 
            cout << "====================================" << endl;
            cout << "TERIMA KASIH SUDAH MENGGUNAKAN TEMPAT KAMI!" << endl;
            cout << endl;
            cout << endl;
            index++;
            getch();
        }

        menu1:
        system("cls");
        cout << "===============================" << endl;
        cout << "TRANSAKSI SELESAI, KEMBALI KE" << endl;
        cout << "1. Buat transaksi" << endl;
        cout << "2. Log out" << endl;
        cout << "Masukan disini [1/2] : ";
        cin >> baru;
        if (baru != '1' && baru != '2') {
            cout << "masukan inputan dengan benar! contoh [1/2]";
            system("cls");
            goto menu1;
        }
        cout << "===============================" << endl;
        getch();
        if (baru == '1') {
            system("cls");
            goto tfnew;
        } else {
            system("cls");
            goto rerun;
        }
    } else {
        system("cls");
        cout << "Program close, terima kasih!";
        getch();
    }
    return 0;
}