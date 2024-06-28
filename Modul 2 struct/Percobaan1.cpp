#include <iostream>
using namespace std;
struct mahasiswa{
  string nama;
  int usia;
  float ipk;
  };
  
int main(){
 mahasiswa mhs;

  mhs.nama ="Andi";
  mhs.usia = 21;
  mhs.ipk = 3.5;

  cout<<"Nama : " << mhs.nama<<endl;
  cout<<"Usia : " << mhs.usia<<endl;
  cout<<"IPK  : " << mhs.ipk<<endl;

 system("pause");
 return 0;
}