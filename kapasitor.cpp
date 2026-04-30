#include <iostream>
using namespace std;

void hitungKapasitor() {
    float daya, tegangan;
    cout << "\n[Hitung Nilai Kapasitor Starting Motor]\n";
    cout << "Masukkan Daya (Watt): ";
    cin >> daya;
    cout << "Masukkan Tegangan (Volt): ";
    cin >> tegangan;

    float kapasitor = (daya * 1.25) / (2 * 3.14 * 50 * tegangan * tegangan);
    cout << "Nilai Kapasitor = " << kapasitor << " Farad\n";
}
