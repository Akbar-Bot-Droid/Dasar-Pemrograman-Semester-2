#include <iostream>

using namespace std;

int main() {
    int tinggi, lebar;

    cout<<"Masukkan tinggi piramida: ";
    cin>>tinggi;

    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j < tinggi * 2; j++) {
            if (i + j <= tinggi || i + j >= tinggi + i * 2)
                cout << "- ";
            else
                cout << "* ";
        }
        cout << endl;
    }

    return 0;
}