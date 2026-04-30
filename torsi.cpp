#include <iostream>
using namespace std;

void hitungTorsi() {
    float daya, rpm;
    cout << "\n[Hitung Torsi Motor DC]\n";
    cout << "Masukkan Daya (Watt): ";
    cin >> daya;
    cout << "Masukkan Kecepatan (RPM): ";
    cin >> rpm;

    float torsi = (9550 * daya) / rpm;
    cout << "Torsi Motor = " << torsi << " Nm\n";
}
