#include <iostream>
using namespace std;

int main() {
    string MerkHp[2][3] = {
        {"Vivo", "Oppo", "Infinix"},  
        {"Xiaomi", "Realme", "Samsung"}
    };

    cout << "Isi array 2x3 dimensi : " << endl;

    cout<<endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << MerkHp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}