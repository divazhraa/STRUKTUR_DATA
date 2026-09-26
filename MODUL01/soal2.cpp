#include<iostream>
using namespace std;
string ubah(int x){
    switch(x){
        case 1: return "satu";
        case 2 : return "dua";
        case 3 : return "tiga";
        case 4 : return "empat";
        case 5 : return "lima";
        case 6 : return "enam";
        case 7 : return "tujuh";
        case 8 : return "delapan";
        case 9 : return "sembulan";
       default: return "";
    }
}
int main(){
    int angka;
    cin>>angka;
    
    if (angka == 0 ){
        cout <<angka; cout<<" : ";
        cout<<"nol";
    }
    else if (angka == 10 ){
        cout << angka; cout << " : ";
        cout << "sepuluh";
    }
    else if (angka==11){
        cout << angka; cout << " : ";
        cout << "sebelas";
    }
    else if (angka == 100){
        cout << angka; cout << " : "; 
        cout << "seratus";
    }
    else if (angka>=1 && angka <= 9){
        cout << angka; cout << " : "; 
        cout << ubah(angka);
    }
    else if (angka > 11 && angka <= 19 ){
        cout << angka; cout << " : "; 
        cout << ubah(angka % 10); cout << " belas ";
    }
    else if ( angka >= 20 && angka <=99){
        int puluhan = angka /10;
        int satuan = angka %10;
        cout << angka; cout << " : "; 
        cout << ubah(puluhan); cout << " puluh ";
        if (satuan != 0 ){
            cout<<ubah(satuan);
        }
    }
    else{
        cout<<"Angka harus rentang 1-100";
    }
    return 0;
}