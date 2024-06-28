#include <iostream>
using namespace std;

int main () {

    string MerkHP     = "Vivo Y15";
    string warna      = "Phantom Black";
    string OS         = "Funtouch OS 9";
    string Prosesor   = "Octa-core 2.0GHz";
    string Baterai    = "5000 mAH";
    string Ram        = "4GB";
    string Storage    = "64GB";
    int Harga         = 2350000;
    bool fastCharging = false;
    bool Fingerprint  = true;

    cout << "Merk Hp          : " << MerkHP << endl;
    cout << "Warna            : " << warna << endl;
    cout << "Operating System : " << OS << endl;
    cout << "Prosesor         : " << Prosesor << endl;
    cout << "Baterai          : " << Baterai << endl;
    cout << "Ram              : " << Ram << endl;
    cout << "Storage          : " << Storage << endl;
    cout << "harga            : Rp " << Harga <<endl;
    cout << "Fast Charging    : ";
        if (fastCharging) {
        cout << "Perangkat mendukung fast charging." << endl;
        } else {
        cout << "Perangkat tidak mendukung fast charging." << endl;
        }

    cout << "Finger Print     : ";
        if (Fingerprint) {
        cout << "Perangkat mendukung Finger Print." << endl;
        } else {
        cout << "Perangkat tidak mendukung Finger Print." << endl;
        }

    return 0;
}