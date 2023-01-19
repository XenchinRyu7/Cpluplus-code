#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <conio.h>
using namespace std;

void gunting() {
    int print [2][8][32] = {
        {
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        },
        {
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0}
        }
    };

    for (int s = 0; s < 2; s++) {
        for (int r = 0; r < 8; r++) {
            cout << "                ";
            for (int n = 0; n < 32; n++) {
                if (print[s][r][n] == 0) {
                    cout << '\xDB';
                } else {
                    cout << '\x20';
                }
            }
            cout << endl;
        }
    }
};

void batu() {
    int print_batu [2][8][32] = {
        {
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0}
        },
        {
            {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        }
    };
    for (int s = 0; s < 2; s++) {
        for (int r = 0; r < 8; r++) {
            cout << "                ";
            for (int n = 0; n < 32; n++) {
                if (print_batu[s][r][n] == 0) {
                    cout << '\xDB';
                } else {
                    cout << '\x20';
                }
            }
            cout << endl;
        }
    }
};

void kertas() {
    int print_kertas [2][8][32] = {
        {
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        },
        {
            {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        }
    };
    for (int s = 0; s < 2; s++) {
        for (int r = 0; r < 8; r++) {
            cout << "                ";
            for (int n = 0; n < 32; n++) {
                if (print_kertas[s][r][n] == 0) {
                    cout << '\xDB';
                } else {
                    cout << '\x20';
                }
            }
            cout << endl;
        }
    }
};

void vs () {
    int versus [2][8][32] = {
        {
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
            {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0}
        },
        {
            {0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        }
    };
    for (int s = 0; s < 2; s++) {
        for (int r = 0; r < 8; r++) {
            cout << "                ";
            for (int n = 0; n < 32; n++) {
                if (versus[s][r][n] == 0) {
                    cout << '\xDB';
                } else {
                    cout << '\x20';
                }
            }
            cout << endl;
        }
    }
};

int ai() {
    int kirim = rand() % 3;
    return kirim;
}

int main () {
    string pilihan[] = {"gunting", "batu", "kertas"};
    string pilihan_user, ulang;
    int kesempatan = 5, menang = 0;
    ulang:
    int logo [1][7][50] = {
        {
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,0,1,0,0,0,0,1,1,1,1,0,1,1,1,1,0,1,1,0,0,0,1,1,0,1,1,1,1,1,0},
            {0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,0,0},
            {0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,0,1,0,0,1,0,0,1,0,1,1,1,0,0,0},
            {0,0,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0},
            {0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,1,0,0,0,0,0,1,0,1,1,1,1,1,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        }
    };

    for (int s = 0; s < 1; s++) {
        for (int r = 0; r < 7; r++) {
            cout << "                ";
            for (int n = 0; n < 50; n++) {
                if (logo[s][r][n] == 0) {
                    cout << '\xDB';
                } else {
                    cout << '\x20';
                }
            }
            cout << endl;
        }
    }

    cout << "\n<<---------- Selamat datang di program game Gunting, Batu and Kertas! ---------->>" << endl;
    gameover:
    cout << "\t\t<<----------- Teknis Game ---------->>" << endl;
    cout << "\t1. Anda akan di minta untuk memasukan gunting, batu atau kertas." << endl;
    cout << "\t2. Lalu nanti ai akan otomatis memilih random." << endl;
    cout << "\t3. Jika anda menang, maka anda akan masuk ke babak selanjutnya." << endl;
    cout << "\t4. Sampai anda menang 5 kali dalam setiap babak, di akhir anda akan mendapatkan hadiah." << endl;
    cout << "\t5. Jika kalah, anda akan diberi kesempatan mengulang babak sampai 5 kali." << endl;
    getch();
    system("cls");

    cout << "Silahkan masukan pilihan, example : gunting " << endl;
    cout << "1. Gunting" << endl;
    cout << "2. Batu" << endl;
    cout << "3. Kertas" << endl;

    tampilkan:
    int pilihan_ai = ai();
    cout << "\nKesempatan : " << kesempatan << " Menang : " << menang << endl;
    cout << "Masukan disini : ";
    cin >> pilihan_user;
    transform(pilihan_user.begin(), pilihan_user.end(), pilihan_user.begin(), ::tolower);
    
    if (pilihan_user != "gunting" && pilihan_user != "batu" && pilihan_user != "kertas") {
        cout << "Inputan yang anda masukan salah, ulangi!" << endl;
        goto tampilkan;
    }

    cout << endl;
    cout << "Pilihan OPEN AI : "<<pilihan[pilihan_ai] << endl;
    cout << endl;

    if (pilihan_user == pilihan[pilihan_ai]) {
        if (pilihan_user == "gunting" && pilihan[pilihan_ai] == "gunting") {
            gunting();
            cout << endl;
            vs();
            cout << endl;
            gunting();
        } else if (pilihan_user == "batu" && pilihan[pilihan_ai] == "batu") {
            batu();
            cout << endl;
            vs();
            cout << endl;
            batu();
        } else if (pilihan_user == "kertas" && pilihan[pilihan_ai] == "kertas") {
            kertas();
            cout << endl;
            vs();
            cout << endl;
            kertas();
        }
        cout << "SERI!\n";
    } else if (pilihan_user == "gunting" && pilihan[pilihan_ai] == "kertas") {
        gunting();
        cout << endl;
        vs();
        cout << endl;
        kertas();
        cout << "ANDA MENANG!\n";
        menang++;
    } else if (pilihan_user == "batu" && pilihan[pilihan_ai] == "gunting") {
        batu();
        cout << endl;
        vs();
        cout << endl;
        gunting();
        cout << "ANDA MENANG!\n";
        menang++;
    } else if (pilihan_user == "kertas" && pilihan[pilihan_ai] == "batu") {
        kertas();
        cout << endl;
        vs();
        cout << endl;
        batu();
        cout << "ANDA MENANG!\n";
        menang++;
    } else if (pilihan[pilihan_ai] == "gunting" && pilihan_user == "kertas") {
        kertas();
        cout << endl;
        vs();
        cout << endl;
        gunting();
        cout << "Yah anda kalah!\n";
        kesempatan--;
    } else if (pilihan[pilihan_ai] == "batu" && pilihan_user == "gunting") {
        gunting();
        cout << endl;
        vs();
        cout << endl;
        batu();
        cout << "Yah anda kalah!\n";
        kesempatan--;
    } else if (pilihan[pilihan_ai] == "kertas" && pilihan_user == "batu") {
        batu();
        cout << endl;
        vs();
        cout << endl;
        kertas();
        cout << "Yah anda kalah!\n";
        kesempatan--;
    }

    if (kesempatan == 0) {
        cout << "\nGame Over" << endl;
        cout << "Apakah anda ingin mengulang permainan? Y/T : ";
        cin >> ulang;
        transform(ulang.begin(), ulang.end(), ulang.begin(), ::toupper);

        if (ulang == "Y") {
            kesempatan = 5;
            menang = 0;
            system("cls");
            goto gameover;
        } else {
            cout << "Terima kasih telah memainkan game ini, kapan-kapan main lagi ya. Semoga harimu cerah!";
        }
    } else if (menang == 5) {
        cout << "\nKarena anda sudah mencapai 5 kemenangan" << endl;
        cout << "Hebat anda menang hadiah, ini link untuk claim : shorturl.at/ltBOR" << endl;
        cout << "Apakah anda ingin bermain lagi? Y/T : ";
        cin >> ulang;
        transform(ulang.begin(), ulang.end(), ulang.begin(), ::toupper);
        if (ulang == "Y") {
            kesempatan = 5;
            menang = 0;
            system("cls");
            goto ulang;
        }
    } else {
        goto tampilkan;
    }

    getch();

    return 0;
}