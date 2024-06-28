#include <iostream>
using namespace std;

int main(){

    int a,b,hasil,pilihan;

    cout<<"Masukan nilai a : "; cin>>a;
    cout<<"Masukan nilai b : "; cin>>b;
    cout<<endl;

    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;
    cout<<endl;

    switch(pilihan){
        case 1:
            hasil=a+b;
            cout<<"Hasil Penjumlahan : "<<hasil<<endl;
            break;
        case 2:
            hasil=a-b;
            cout<<"Hasil Pengurangan : "<<hasil<<endl;
            break;
        case 3:
            hasil=a*b;
            cout<<"Hasil Perkalian : "<<hasil<<endl;
            break;
        case 4:
            if (b != 0) {
                hasil = a / b;
                cout << "Hasil pembagian: " << hasil << endl;
            } else {
                cout << "Pembagian dengan nol tidak dapat dilakukan." << endl;
            }
            break;
        case 5:
            hasil=a%b;
            cout<<"Hasil Modulus : "<<hasil<<endl;
            break;
        default :
            cout<<"Tidak Ada"<<endl;
            break;
    }
    return 0;
}