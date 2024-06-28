#include <iostream>
using namespace std;

int main(){

    int sila;

    cout<<"Masukan sila ke- : ";
    cin>>sila;
    cout<<endl;

    switch(sila){
        case 1:
            cout<<"Ketuhanan yang maha esa"<<endl;
            break;
        case 2:
            cout<<"Kemanusiaan yang adil dan beradab"<<endl;
            break;
        case 3:
            cout<<"Persatuan Indonesia"<<endl;
            break;
        case 4:
            cout<<"Kerakyatan yang dipimpin oleh hkmat kebijaksanaan dalam permusyawaratan/perwakilan"<<endl;
            break;
        case 5:
            cout<<"Keadilan sosial bagi seluruh rakyat indonesia"<<endl;
            break;
        default :
            cout<<"Tidak Ada"<<endl;
            break;
    }
    return 0;
}