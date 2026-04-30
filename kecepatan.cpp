#include <iostream>
using namespace std;

void hitungKecepatan() {
    float tegangan, konstantaMotor;
    cout << "\n[Hitung Kecepatan Motor DC Berdasarkan Tegangan]\n";
    cout << "Masukkan Tegangan (Volt): ";
    cin >> tegangan;
    cout << "Masukkan Konstanta Motor (Volt per RPM): ";
    cin >> konstantaMotor;

    float rpm = tegangan / konstantaMotor;
    cout << "Perkiraan Kecepatan Motor DC = " << rpm << " RPM\n";
}
