#include <iostream>
using namespace std;

void hitungDaya() {
    float tegangan, arus;
    cout << "\n[Hitung Daya Motor DC]\n";
    cout << "Masukkan Tegangan (Volt): ";
    cin >> tegangan;
    cout << "Masukkan Arus (Ampere): ";
    cin >> arus;

    float daya = tegangan * arus;
    cout << "Daya Motor DC = " << daya << " Watt\n";
}
