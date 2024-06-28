#include <iostream>
using namespace std;

int main(){
    int bil;

    cout<<"Masukan sebuah bilangan : ";
    cin>>bil;
    cout<<" "<<endl;
    
    if (bil >=0)
        cout<<bil<<" Adalah bilangan POSITIF"<<endl;
    else
        cout<<bil<<" Adalah bilangan NEGATIF"<<endl;

    system ("pause");
    return 0;
}