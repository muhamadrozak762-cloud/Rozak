#include <iostream>
#include "all.h"

using namespace std;

void tampilkanMenu() {
    system("cls"); 
    cout << "========================================\n";
    cout << "         SELAMAT DATANG DI KALKULATOR DC\n";
    cout << "========================================\n";
    cout << "Silakan pilih jenis perhitungan:\n";
    cout << "----------------------------------------\n";
    cout << "1. Hitung Daya Motor\n";
    cout << "2. Hitung Torsi Motor\n";
    cout << "3. Hitung Efisiensi Motor\n";
    cout << "4. Hitung Kecepatan Putaran Motor\n";
    cout << "5. Hitung Nilai Kapasitor\n";
    cout << "6. Analisis Tegangan\n";
    cout << "7. Hitung Arus Motor DC\n";
    cout << "8. Estimasi Umur Motor Berdasarkan Beban\n";
    cout << "0. Keluar dari program\n";
    cout << "----------------------------------------\n";
}

int pilihMenu() {
    int pilihan;
    cout << "Masukkan pilihan Anda (0-8): ";
    cin >> pilihan;
    return pilihan;
}

void jalankanMenu(int pilihan) {
    switch (pilihan) {
        case MENU_DAYA:
            hitungDaya();
            break;
        case MENU_TORSI:
            hitungTorsi();
            break;
        case MENU_EFISIENSI:
            hitungEfisiensi();
            break;
        case MENU_KECEPATAN:
            hitungKecepatan();
            break;
        case MENU_KAPASITOR:
            hitungKapasitor();
            break;
        case MENU_TEGANGAN:
            hitungTegangan();
            break;
        case MENU_ARUS:
            hitungArus();
            break;
        case MENU_UMUR:
            hitungUmur();
            break;
        case MENU_KELUAR:
            cout << "Keluar dari program...\n";
            break;
        default:
            cout << "Pilihan tidak valid!\n";
            break;
    }
}
