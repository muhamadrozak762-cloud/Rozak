#pragma once

enum MenuPilihan {
    MENU_DAYA = 1,
    MENU_TORSI,
    MENU_EFISIENSI,
    MENU_KECEPATAN,
    MENU_KAPASITOR,
    MENU_TEGANGAN,
    MENU_ARUS,
    MENU_UMUR,
    MENU_KELUAR = 0
};

void hitungArus();
void hitungDaya();
void hitungEfisiensi();
void hitungKapasitor();
void hitungKecepatan();
void hitungTegangan();
void hitungTorsi();
void hitungUmur();
void tampilkanMenu();
int pilihMenu();
void jalankanMenu(int pilihan);