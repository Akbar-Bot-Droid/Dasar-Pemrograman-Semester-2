#include <iostream>
using namespace std;

int main (){

    string nama               = "AKBAR EKA SAPUTRA";
    string alamat             = "Dsn Ngepung, Ds Ngepung, Kec. Patianrowo, Kab. Nganjuk";
    int usia                  = 19;
    char jeniskelamin         = 'L';
    bool bekerja              = true;
    int pengeluaran        = 500000;
    bool BisaMengendaraiMotor = true;

    cout << "Nama                   : " << nama << endl;
    cout << "Alamat                 : " << alamat << endl;
    cout << "Usia                   : " << usia << endl;
    cout << "Jenis Kelamin          : " << jeniskelamin << endl;
    cout << "Sudah Bekerja          : ";
        if (bekerja) {
        cout << "Sudah" << endl;
        } else {
        cout << "Belum" << endl;
        }

    cout << "Pengeluaran Per Bulan  : Rp " << pengeluaran << endl; 
    cout << "Bisa Mengendarai Motor : ";
    if (BisaMengendaraiMotor) {
        cout << "Bisa" << endl;
        } else {
        cout << "Tidak" << endl;
        }

    return 0;
}