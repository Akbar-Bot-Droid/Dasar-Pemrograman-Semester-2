#include <iostream>
using namespace std;
struct VIVO{
    string nama;
    string spesifikasi;
    int harga;
    string warna[2];
    };

int main(){
    VIVO data; 

    data.nama ="VIVO Y15";
    data.spesifikasi = "4/64 GB";
    data.harga = 2350000;
    data.warna[0]= "Phantom Black";
    data.warna[1]= "Burgundy Red";

    cout<<"Nama        : " << data.nama<<endl;
    cout<<"Spesifikasi : " << data.spesifikasi<<endl;
    cout<<"Harga       : Rp " << data.harga<<endl;
    cout<<"warna       : 1. " << data.warna[0]<<endl;
    cout<<"              2. " << data.warna[1]<<endl;

 system("pause");
 return 0;
}