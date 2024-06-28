#include <iostream>
using namespace std;

int main(){
    string MerkHp[6]={"Vivo","Oppo","Infinix","Xiaomi","Realme","Samsung"};
    cout<<"Menampilkan secara manual : "<<endl;
    cout<<"Merk Hp Android : 1. "<<MerkHp[0]<<endl;
    cout<<"                  2. "<<MerkHp[1]<<endl;
    cout<<"                  3. "<<MerkHp[2]<<endl;
    cout<<"                  4. "<<MerkHp[3]<<endl;
    cout<<"                  5. "<<MerkHp[4]<<endl;
    cout<<"                  6. "<<MerkHp[5]<<endl;

    cout<<endl;
    
    cout<<"Menampilkan menggunakan for "<<endl;
    cout<<"Merk Hp Android : Vivo"<<endl;
    for (int i=1; i<6; i++)
    {     
        cout<<"                : "<<MerkHp[i]<<endl;
    }

    return 0;
}