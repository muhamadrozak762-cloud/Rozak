#include <iostream>
using namespace std;

void hitungTegangan() {
    float tahanan, arus;
    cout << "\n[Analisis Tegangan Motor DC]\n";
    cout << "Masukkan Tahanan (Ohm): ";
    cin >> tahanan;
    cout << "Masukkan Arus (Ampere): ";
    cin >> arus;

    float tegangan = tahanan * arus;
    cout << "Tegangan Motor DC = " << tegangan << " Volt\n";
}
