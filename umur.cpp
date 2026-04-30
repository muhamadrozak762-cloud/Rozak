#include <iostream>
using namespace std;

void hitungUmur() {
    float beban, jamPerHari, umurDesainJam;

    cout << "\n[Estimasi Umur Motor DC]\n";
    cout << "Masukkan Beban (dalam persen beban penuh, 0-100): ";
    cin >> beban;

    cout << "Masukkan Lama Operasi per Hari (jam): ";
    cin >> jamPerHari;

    // Misalnya umur desain motor = 10.000 jam pada beban penuh
    umurDesainJam = 10000;

    // Umur efektif berkurang jika beban tinggi dan motor sering dipakai
    float faktorBeban = beban / 100.0f;
    float umurEfektif = umurDesainJam / (faktorBeban * jamPerHari);

    cout << "Estimasi Umur Motor: " << umurEfektif << " hari\n";
}
