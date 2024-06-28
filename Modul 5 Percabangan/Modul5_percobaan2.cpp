#include <iostream>
using namespace std;

int main() {

    string username = "admin", password = "12345", temp_username, temp_password;

    cout<<"masukan Username : ";
    cin>>temp_username;

    cout<<"Masukan Password : ";
    cin>>temp_password;

    if (temp_username == username){
        if (temp_password == password){
            cout<<"Selamat Anda Berhasil Login"<<endl;
        } else {
            cout<<"Mohon Maaf, Login Tidak berhasil"<<endl;
        } 
    } else {
        cout<<"Mohon Maaf, Login Tidak berhasil"<<endl;
    }
    
    cout<<" "<<endl;
    return 0;
}