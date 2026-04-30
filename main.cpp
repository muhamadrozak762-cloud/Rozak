/*--------------------------------------
	Judul		: Aplikasi Kalkulator Motor Dc	
	Kelompok	: 5
	Ketua		: Muhamad Rozak
	NPM			: 2420507020
	Anggota 1	: Farhad Syifa Aksa
	NPM			: 2410507007
	Anggota 2	: Khans Malihah
	NPM			: 2410507008
	Aplikasi	: Teknik
---------------------------------------*/

#include <iostream>
#include "K5/all.h"

using namespace std;

int main() {
    int pilihan;
    bool lanjut = true;

    while (lanjut) {
        tampilkanMenu();
        pilihan = pilihMenu();

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Input tidak valid. Harap masukkan angka.\n";
            system("pause");
            continue;
        }

        jalankanMenu(pilihan);

        if (pilihan == MENU_KELUAR) {
            lanjut = false;
        } else {
            cout << "\nApakah Anda ingin menghitung lagi? (y/n): ";
            char jawab;
            cin >> jawab;
            if (jawab != 'y' && jawab != 'Y') {
                lanjut = false;
            }
        }
    }

    cout << "TERIMAKASIH TELAH MENGGUNAKAN KALKULATOR MOTOR DC.\n";
    cout << "HORMAT KAMI .\n";
	cout << "KELOMPOK5 .\n";

    return 0;
}
