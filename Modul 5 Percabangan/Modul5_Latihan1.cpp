#include <iostream>
using namespace std;

int main (){
    int nilai;

    cout<<"Masukan Sebuah Nilai : ";
    cin>>nilai;

    if(nilai<0) {
        nilai *= nilai;
        cout<<"Nilai Berubah : "<< nilai << endl;
    } else {
        cout<<"Nilai Tetap : " << nilai << endl;
    }

    return 0;
}