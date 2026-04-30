#include <iostream>
using namespace std;

void hitungArus() {
    float daya, tegangan;
    cout << "\n[Hitung Arus Motor DC]\n";
    cout << "Masukkan Daya (Watt): ";
    cin >> daya;
    cout << "Masukkan Tegangan (Volt): ";
    cin >> tegangan;

    float arus = daya / tegangan;
    cout << "Arus Motor DC = " << arus << " Ampere\n";
}
