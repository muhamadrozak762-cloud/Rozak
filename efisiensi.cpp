#include <iostream>
using namespace std;

void hitungEfisiensi() {
    float dayaKeluar, dayaMasuk;
    cout << "\n[Hitung Efisiensi Motor DC]\n";
    cout << "Masukkan Daya Keluar (Watt): ";
    cin >> dayaKeluar;
    cout << "Masukkan Daya Masuk (Watt): ";
    cin >> dayaMasuk;

    float efisiensi = (dayaKeluar / dayaMasuk) * 100;
    cout << "Efisiensi Motor = " << efisiensi << " %\n";
}
