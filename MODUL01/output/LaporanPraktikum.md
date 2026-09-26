# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)- ... </h1>
<p align="center">[Diva Zahrah Nabila] - [109082500112]</p>

## Unguided 

# Dasar Teori
## A.	Abstract Data Type (ADT)
###    ADT adalah konsep yang mendefinisikan suatu tipe data beserta operasinya tanpa menjelaskan detail implementasinya. 

## B.	STRUKTUR DATA
###     Struktur data merujuk pada cara data diatur dan disimpan di dalam komputer atau penyimpanan lainnya agar dapat diakses dan dimanipulasi dengan efisien[1]. 

## C.	Linked List
###     Linked list dan array memiliki kesamaan dasar, yaitu keduanya merupakan struktur data yang berfungsi untuk menyimpan sekumpulan elemen data [2]. Namun, keduanya memiliki strategi alokasi memori yang sangat berbeda. Jika array mengalokasikan memori untuk seluruh elemennya sekaligus dalam satu blok memori yang berurutan, linked list mengalokasikan memori untuk setiap elemennya secara terpisah dan independen. Setiap blok elemen mandiri ini disebut sebagai "simpul" atau node. Struktur keseluruhan linked list dibangun dengan saling menghubungkan node-node tersebut menggunakan pointer (penunjuk), ibarat rantai yang saling bertaut.

##    D.	Pointer
###     Pointer adalah variable yang menyimpan Alamat dari variabel atau objek lain di memori.Operator penting dalam pointer yaitu *, &, dan . 
###       •	Simbol * digunakan untuk mengakses nilai yang berada pada alamat yang ditunjuk pointer.
###       •	Simbol & digunakan untuk mendapatkan nilai.
###       •	Simbol -> digunakan untuk mengakses anggota dari object/struct yang ditunjuk pointer.


# Guided
### 1.	Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.
### source code:
```cpp

#include<iostream>
using namespace std;
int main(){
    float a, b, tambah, kurang, kali, bagi; 
    cin>>a;
    cin>>b;
    tambah = a + b;
    kurang= a-b;
    kali= a*b;
    bagi=a/b;
    cout<<"Hasil penjumlahan: "<<tambah<<endl;
    cout<<"Hasil pengurangan: "<<kurang<<endl;
    cout<<"Hasil pengurangan: "<<kali<<endl;
    cout<<"Hasil pembagian: "<<bagi;
    return 0;
}
 
``` 

### Penjelasan: Kode program tersebut meminta dua inputan bilangan yang di definisikan sebagai variabel a dan b, yang kemudian akan dilakukan operasi matematika seperti penjumlahan, pengurangan, perkalian dan pembagian dari bilangan a dan b. Setelah itu program akan menampilkan hasil dari perhitungannya. 

### 2.	Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100.   
 
### Source code: 

```cpp
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
        cout<<"Angka harus rentang 0-100";
    }
    return 0;
}

```

### Penjelasan: Program ini meminta inputan bilangan bulat dari 0-100, kemudian mengubah inputan dari angka menjadi tulisan. Angka dari 1 sampai 9 menggunakan switch case, angka berikutnya menggunakan if-else. Konsep yang digunakan untuk inputan bilangan puluhan dipisah tiap digitnya menggunakan div dan modulo. Sedangkan untuk inputan belasan menggunakan modulo. Angka diluar 0-100 akan menampilkan output "Angka harus rentang 0-100".



### 3. Buatlah program yang dapat memberikan input dan output sbb
### source code: 
```cpp

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"input: ";
    cin>>n;

    for ( int i = n; i >= 0 ;i--){
        for ( int s = 0; s < n - i ; s++){
            cout<<"  ";
        }
        for (int j= i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<" * ";
         for ( int j = 1; j <= i; j++){
            cout<<" "<< j;
        }
        cout<<endl;
    }
    return 0 ;
}
```

### penjelasan: Program ini menggunakan konsep perulangan bersarang (nested loop) untuk membentuk pola cermin simetris. Perulangan utama mengatur perpindahan baris secara menurun, sementara perulangan di dalamnya mencetak komponen dari kiri ke kanan: spasi (agar letak bintang sejajar), deret angka kiri yang menurun, karakter bintang * sebagai poros tengah, dan deret angka kanan yang menaik. Proses ini berulang dan menyusut sampai baris paling bawah hanya menyisakan satu bintang



# Unguided
### 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.
### source code unguided 1
```cpp

#include<iostream>
using namespace std;
int main(){
    float a, b, tambah, kurang, kali, bagi; 
    cin>>a;
    cin>>b;
    tambah = a + b;
    kurang= a-b;
    kali= a*b;
    bagi=a/b;
    cout<<"Hasil penjumlahan: "<<tambah<<endl;
    cout<<"Hasil pengurangan: "<<kurang<<endl;
    cout<<"Hasil pengurangan: "<<kali<<endl;
    cout<<"Hasil pembagian: "<<bagi;
    return 0;
}
 
```
### Output 1
![Screenshot Output Unguided 1_!] (https://github.com/divazhraa/struktur_data_semester3/blob/main/MODUL01/output/SOAL1.png)

![Screenshot Output Unguided 1_!] (https://github.com/divazhraa/struktur_data_semester3/blob/main/MODUL01P/output/SOAL1(JAM).png)


### penjelasan unguided 1
[Kode program tersebut meminta dua inputan bilangan yang di definisikan sebagai variabel a dan b, yang kemudian akan dilakukan operasi matematika seperti penjumlahan, pengurangan, perkalian dan pembagian dari bilangan a dan b. Setelah itu program akan menampilkan hasil dari perhitungannya.]


### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100.  
### source code unguided 2

```cpp
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
        cout<<"Angka harus rentang 0-100";
    }
    return 0;
}

```
### Output Unguided 2 :
![Screenshot Output Unguided 1_!] (https://github.com/divazhraa/struktur_data_semester3/blob/main/MODUL01/output/SOAL2.png)


### penjelasan unguided 2
[Program ini meminta inputan bilangan bulat dari 0-100, kemudian mengubah inputan dari angka menjadi tulisan. Angka dari 1 sampai 9 menggunakan switch case, angka berikutnya menggunakan if-else. Metode yang digunakan untuk inputan bilangan puluhan dipisah tiap digitnya menggunakan div dan modulo. Sedangkan untuk inputan belasan menggunakan modulo. Angka diluar 0-100 akan menampilkan output "Angka harus rentang 0-100".]

### 3. Buatlah program yang dapat memberikan input dan output sbb
### source code unguided 3
```cpp

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"input: ";
    cin>>n;

    for ( int i = n; i >= 0 ;i--){
        for ( int s = 0; s < n - i ; s++){
            cout<<"  ";
        }
        for (int j= i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<" * ";
         for ( int j = 1; j <= i; j++){
            cout<<" "<< j;
        }
        cout<<endl;
    }
    return 0 ;
}
```
### Output Unguided 3 :
![Screenshot Output Unguided 1_!] (https://github.com/divazhraa/struktur_data_semester3/blob/main/MODUL01/output/SOAL3.png)


### penjelasan unguided 3
[ Program ini menggunakan konsep perulangan bersarang (nested loop) untuk membentuk pola cermin simetris. Perulangan utama mengatur perpindahan baris secara menurun, sementara perulangan di dalamnya mencetak komponen dari kiri ke kanan: spasi (agar letak bintang sejajar), deret angka kiri yang menurun, karakter bintang * sebagai poros tengah, dan deret angka kanan yang menaik. Proses ini berulang dan menyusut sampai baris paling bawah hanya menyisakan satu bintang.]


# Kesimpulan
[Dapat disimpulkan bahwa praktikum ini membantu memahami dasar pemrograman C++ melalui penggunaan variabel, operator aritmatika, percabangan, fungsi, dan perulangan. Melalui ketiga soal yang dikerjakan, praktikum ini melatih logika pemrograman serta memahami cara menyelesaikan masalah dengan membuat program sederhana.]


### Referensi
#### [1] Ginting, S. H. N., dkk. (2023). Pengantar Struktur Data. Deli Serdang: PT. Mifandi Mandiri Digital.
#### [2] N. Parlante, "Linked List Basics," Stanford CS Education Library, Stanford, CA, Document 103, 2001. [Online]. Tersedia: http://cslibrary.stanford.edu/103/.


