#include <iostream>
using namespace std;

int main(){

    int angka1;
    int angka2;
    int angka3;

    cout << "Angka pertama : ";
    cin >> angka1;

    cout << "Angka kedua : ";
    cin >> angka2;

    cout << "Angka ketiga : ";
    cin >> angka3;

    if(angka1 > angka2 && angka3){
        cout << "Angka terbesar : " << angka1 <<endl;
    }else if(angka2 > angka3 && angka1){
        cout << "Angka terbesar : " << angka2 <<endl;
    }else if(angka3 > angka1 && angka2){
        cout << "Angka terbesar : " << angka3 <<endl;
    }else{
    }

    return 0;
}
