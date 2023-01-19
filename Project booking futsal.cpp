#include <iostream>  // standard input dan output
#include <conio.h> // fungsi getch()
#include <cctype> // fungsi isdigit(), mengecek angka atau bukannya
#include <string> // konversi string ke integer, fungsi stoi
#include <algorithm> // membantu fungsi convert seperti transform() string to lower or upper, dan all_of() untuk mengecek string ada angka atau tidaknya
#include <vector> // untuk penggunaan array bertipe vector, supaya dinamis dalam memanipulasi array, seperti push back
using namespace std;

void sports() { // fungsi void ini digunakan untuk mencetak array 3 dimensi dalam membuat logo uniku futsal ditambah dengan perulangan 3 variabel di dalamnya
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

void tempat() { // fungsi void ini digunakan untuk mencetak array 3 dimensi dalam membuat denah tempat futsal yang termasuk lapangan dan tempat penyewaan baju serta toilet
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
    for (int s = 0; s < 4; s++) { // perulangan untuk menampilkan nya menggunakan 3 variabel
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
    int pelanggan, i, laporan = 0, bayar, index; // variabel login untuk mengecek jika pengguna ingin masuk sebagai admin atau user, variabel pelanggan untuk meminta total transaksi dengan pelanggan, supaya ketika perulangan bisa langsung 2 kali, meskipun 1 kali juga bisa saja.
    string pass[2] = {"admin123", "user123"}, cek, konversi;
    char login, baru;
    vector<string> nama, jam, no_telp;
    vector<int> durasi, tanggal, kode_lap, harga;
    rerun: // membuat label untuk menglogoutkan pengguna
    sports(); // memanggil fungsi sports untuk menampilkan logo uniku futsal
    salah: // label untuk mengulang inputan yang salah dari antar admin dan user 
    cout << "=================================================" << endl;
    cout << "Selamat datang, silahkan login terlebih dahulu!" << endl;
    cout << "1. Admin" << endl;
    cout << "2. User" << endl;
    cout << "3. close program" << endl;
    cout << "Masukan disini [1/2/3] : ";
    cin >> login;
    if (login != '1' && login != '2' && login != '3') { // pengecekan jika pengguna salah memasukan inputan maka akan kembali ke label salah yang di atas
        cout << "Masukan inputan dengan benar!" << endl;
        login = ' ';
        getch();
        system("cls"); // fungsi ini untuk menghapus print na ke terminal 
        goto salah;
    }
    cout << "=================================================" << endl;
    getch(); // fungsi menahan layar sampai pengguna memasukan inputan apa saja

    if (login == '1') { // percabangan jika pengguna memilih 1 maka akan masuk ke admin dan akan diminta memasukan password
        ulang: // label untuk kembali menjalankan baris kode jika penggunaa salah memasukan passowrd
        cout << "Masukan password     : ";
        cin >> cek; // mengecek persamaan password dengan array bernama pass
        if (cek == pass[0]) { // jika sama maka pengguna akan masuk ke admin
            system("cls");
            cout << "Selamat datang admin!" << endl;
            getch();
        } else {
            cout << "Password salah, silahkan masukan kembali!" << endl;
            goto ulang; // ini akan meloncat ke label ulang
        }
        kembali: // label ini digunakan untuk admin yang ingin kembali ke menu setelah memilih menu sebelumnya
        system("cls");
        cout << "=============================" << endl;
        cout << "1. Cek Data Lapangan" << endl;
        cout << "2. Laporan Keuangan Harian" << endl;
        cout << "3. Log out" << endl;
        cout << "Masukan disini [1/2/3] : ";
        cin >> login; // variabel ini banyak digunakan dalam pengambilan keputusan dari user, dan mengembalikan lagi nilai nya ke 0, karena akan terpakai lagi di percabangan selanjutnya
        if (login != '1' && login != '2' && login != '3') { // pengecekan jika pengguna salah memasukan inputan maka akan kembali ke label kembali yang di atas
            cout << "Masukan inputan dengan benar!" << endl;
            login = ' ';
            getch();
            system("cls"); // fungsi ini untuk menghapus apa yang di cetak sebelumnya di terminal 
            goto kembali;
        }
        cout << "=============================" << endl;
        getch();
        if (login == '1') { // percabangan jika admin memilih 1 di inputan sebelumnya maka akan masuk ke mencetak data pelanggan yang di inputkan sebelumnya oleh user, bisa dibilang ini ireport dari transaksi sebelumnya
            login = ' '; // kembalikan ke 0 supaya dapat di pakai di percabangan selanjutnya
            if (nama.size() > 0) { // mengecek jika ukuran dari vector nama menggunakan fungsi size(), untuk perbandingan jika lebih dari 0 maka berarti itu ada, dan akan masuk ke blok
                system("cls");
                for (i = 0; i < nama.size(); i++) { // perulangan untuk mencetak setiap data yang di inputkan oleh user sebelumnya, di dalamnya variabel vector yang dinamis dengan penentu perulangan fungsi size() menghitung total data yang dimiliki oleh vector tersebut
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
                cout << "Kembali ke menu? atau log out? [1/2] : ";
                cin >> login; // gunakan kembali variabel login untuk percabangan admin antara log out ata kembali ke menu 
                if (login == '1') {
                    system("cls");
                    login = ' ';
                    goto kembali; // akan kembali ke menu
                } else {
                    system("cls");
                    goto rerun; // log out ke dashboard utama
                }
            } else { // else ini jika memang belum ada transaksi sama sekali dari user 
                cout << "==============================================" << endl;
                cout << "Pemboking belum ada!" << endl;
                cout << "Anda kami kembalikan ke menu kan! Terima kasih" << endl;
                cout << "==============================================" << endl;
                getch();
                system("cls");
                goto kembali;
            }
                
        } else if (login == '2') { // else ini jika si user memilih selain dari angka 1 maka akan masuk ke laporan keuangan dari total transaksi
            system("cls");
            if (nama.size() == 0) { // cek jika tidak ada data di vector maka beritahu blm ada transaksi
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
            for (i = 0; i < nama.size(); i++) { // perulangan ini digunakan untuk memasukan setiap harga dari nilai vector harga dengan penentu perulangan total dari setiap transaksi yang ada
                laporan += harga[i];
            }
            cout << "Total pelanggan hari ini : " << nama.size() << endl; // print dan hitung total berapa index dari vector nama
            cout << "Total pemasukan          : " << laporan << endl;
            cout << "==================================" << endl;
            getch();
            cout << "Kembali ke menu? atau log out? [1/2] : ";
            cin >> login;
            if (login == '1') { // sama seperti sebelumnya membuat percabangan untuk membuat percabangan di admin log out atau kembali ke menu
                login = ' ';
                system("cls");
                goto kembali; // kembali ke menu
            } else {
                system("cls");
                goto rerun; // log out
            }
        } else { // logout jika selain 1 dan 2
            getch();
            system("cls");
            goto rerun;
        }
    } else if (login == '2') { // else ini adalah jika si user ketika login memilih selain dari 1 maka otomatis masuk ke user 
        string nama_pelanggan, play, telepon; // ini adalah kumpulan deklarasi variabel awal untuk inputan dan nantinya dimasuka ke vector array dengan push.back
        int lapangan, sewa, menit, i, total; // ini juga sama, namun untuk i sebagai deklarasi perulangan yang akan di pakai nanti
        ulang1:
        cout << "Masukan password     : ";
        cin >> cek; 
        if (cek == pass[1]) { // pengecekan passowrd untuk login sebagai user
            system("cls");
            cout << "Selamat datang user!" << endl;
            getch();
        } else {
            cout << "Password salah, silahkan masukan kembali!" << endl;
            goto ulang1; // ulangi code sampai password benar
        }
        
        menu:
        cout << "===============================" << endl;
        cout << "1. Buat transaksi" << endl;
        cout << "2. Log out" << endl;
        cout << "Masukan disini [1/2] : ";
        cin >> login; // percabangan untuk user logout atau melakukan transaksi
        if (login != '1' && login != '2') { // cek apakah inputan benar atau bukan, jika salah maka kembali ke menu dan ulang inputan
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
        cin >> konversi; // variabel ini adalah penentu perulangan, total pelanggan yang akan transaksi dalam satu waktu
        if (all_of(konversi.begin(), konversi.end(), ::isdigit)) { // mengecek apakah string konversi ada angka atau tidaknya, jika ada maka dicek kembali di isdigit.
            pelanggan = stoi(konversi); // jika beneran angka maka masuk dan konversi string ke integer variabel yaitu pelanggan
        } else {
            cout << "Maaf, inputan harus angka!" << endl;
            goto transaksi;
        }
        cout << "===========================================================================================================================================================================================" << endl;
        getch();
        system("cls");

        for (i = 0; i < pelanggan; i++) { // ini adalah perulangan untuk transaksi, dengan penentu perulangan dari variabel pelanggan
            if (baru == '1') { // mengecek jika variabel baru bernilai satu maka akan menggunakan index yang sudah ada 
                index;
            } else {
                index = i; // jika false maka index yang pertama pakai dari variabel i, yaitu 0
            }
            system("cls");
            cout << "Transaksi ke             : " << i + 1 << endl;
            cout << "Masukan nama             : ";
            cin.ignore(); // penggunaan ini untuk mengabaikan 1 baris kebawah, karena untuk inputan nama pelanggan adalah string dan memang user takutnya menggunakan inputan berspasi
            getline(cin >> ws, nama_pelanggan); // penggunaan getline seperti ini cin >> ws, adalah untuk menghabiskan whitespace, biasa dipakai jika dimasukan untuk variabel bertipe array 
            transform(nama_pelanggan.begin(), nama_pelanggan.end(), nama_pelanggan.begin(), ::toupper); // ini adalah fungsi gabungan dari transform dan toupper, seperti yang sudah dijelaskan sebelumnya yang menggunakan file header algorithm dan cctype
            nama.push_back(nama_pelanggan); // pada bagian ini mengirim inputan dari variabel yang sudah di masukan ke nama_pelanggan lalu mengkonversinya ke toupper dengan transform. dan ya masukan ke array vector dengan fungsi push.back, atau dalam artian masukan dari belakang
            lap:
            cout << "Masukan kode lap [1/2/3] : ";
            cin >> lapangan;
            if (lapangan != 1 && lapangan != 2 && lapangan != 3) { // mengecek jika user memasukan selain dari angka 1 sampai 3
                cout << "Mohon masukan inputan dengan benar untuk kode lap, contoh 1 sampai 3" << endl;
                goto lap;  // maka akan terus mengulang sampai user memasukan inputan dengan benar sesuai notif yang sudah di beritahukan kepada user
            }
            kode_lap.push_back(lapangan); // ya sama seperti sebelumnya kirim ke array vector, ingat variabel lapangan hanya sebagai variabel sementara penerima inputan, yang nantinya digunakan sebagai penyimpanan sebenarnya adalah array vector
            cout << "Masukan tanggal sewa     : ";
            cin >> sewa;
            tanggal.push_back(sewa);
            jam:
            cout << "Masukan Jam main         : ";
            getline(cin >> ws, play);
            if (play != "08:00" && play != "14:00" && play != "20:00") { // mengecek jika user memasukan di luar ketentuan input
                cout << "Mohon masukan inputan dengan benar untuk jam, sesuai ketentuan di atas, contoh [08:00]" << endl;
                goto jam; // jika masih salah maka akan terus mengulang
            }
            jam.push_back(play);
            durasi:
            cout << "Masukan Durasi Jam Main  : ";
            cin >> menit;
            if (menit != 1 && menit != 2 && menit != 3) { // cek juga 
                cout << "Mohon masukan untuk inputan durasi main, kami hanya 1 sampai 3 jam per pagi, sore, dan malam!" << endl;
                goto durasi; // ulang juga
            }
            durasi.push_back(menit);
            cout << "No Telp                  : ";
            cin.ignore();
            getline(cin, telepon);
            no_telp.push_back(telepon);
            cout << endl;

            system("cls");
            if (kode_lap[index] == 1) { // percabangan ini untuk menentukan user memasukan 1, 2 atau 3 dalam memasukan tipe lapangan, kemudian memasukan ke variabel total untuk sementara lalu operasikan inputan dengan angka yang berbeda setiap tipe lapangan, terakhir kirim ke variabel vector array dengan push back
                total = durasi[index] * 150000;
                harga.push_back(total);
            } else if (kode_lap[index] == 2) {
                total = durasi[index] * 175000;
                harga.push_back(total);
            } else if (kode_lap[index] == 3) {
                total = durasi[index] * 200000;
                harga.push_back(total); // ujungnya ya untuk menentukan total harga dari setiap pelanggan
            }

            cout << "           UNIKU FUTSAL" << endl; // mencetak invoice dari transaksi user sebelumnya
            cout << "        INVOICE PEMBAYARAN" << endl;
            cout << "====================================" << endl;
            cout << "NAMA      : " << nama[index] << endl;
            cout << "KODE LAP  : " << kode_lap[index] << endl;
            cout << "TANGGAL   : " << tanggal[index] << endl;
            if (jam[index] == "08:00") { // percabangan ini di gunakan untuk sebagai cetakan jam agar sesuai dengan yang di inputkan, dengan membandingkan setiap index dari variabel yang sebelumnya sudah di simpan di vector array
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
            cout << "BAYAR     : Rp "; cin >> bayar; // meminta uang dari pelanggan 
            cout << "KEMBALIAN : " << bayar - harga[index] << endl; // kemudian operasikan untuk melihat total kembalian dari uang pelanggan dengan harga total
            cout << "====================================" << endl;
            cout << "TERIMA KASIH SUDAH MENGGUNAKAN TEMPAT KAMI!" << endl;
            cout << endl;
            cout << endl;
            index++; // index incrementkan bertujuan untuk membuat index sendiri agar setiap transaksi tidak mengacu ke index i dari perulangan namun dari index yang setiap transaksi akan bertambah dan ketika transaksi lagi maka akan menggunakan index yang sudah di simpan sebelumnya
            getch();
        }

        menu1:
        system("cls");
        cout << "===============================" << endl;
        cout << "TRANSAKSI SELESAI, KEMBALI KE" << endl;
        cout << "1. Buat transaksi" << endl;
        cout << "2. Log out" << endl;
        cout << "Masukan disini [1/2] : ";
        cin >> baru; // percabangan untuk user logout atau kembali melakukan transaksi 
        if (baru != '1' && baru != '2') { // cek input angka atau bukan supaya tidak error, kalau bukan balik ke menu1
            cout << "masukan inputan dengan benar! contoh [1/2]";
            system("cls");
            goto menu1;
        }
        cout << "===============================" << endl;
        getch();
        if (baru == '1') { // disini prosesnya
            system("cls");
            goto tfnew; // kembali transaksi
        } else {
            system("cls");
            goto rerun; // logout
        }
    } else {
        system("cls");
        cout << "Program close, terima kasih!";
        getch();
    }
    return 0;
}