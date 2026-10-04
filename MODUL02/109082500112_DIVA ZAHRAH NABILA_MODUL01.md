# <h1 align="center">Laporan Praktikum Modul 2 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Kedua)- ... </h1>
<p align="center">[Diva Zahrah Nabila] - [109082500112]</p>

## Unguided 

# Dasar Teori
## A.	Array
###     Array merupakan kumpulan data dengan nama yang sama dan setiap elemen bertipe data sama. Untuk mengakses setiap komponen / elemen array berdasarkan indeks dari setiap elemen. 

## B.	Pointer dan Alamat Memori
###     Pointer adalah variabel khusus yang berisi nilai integer dalam format heksadesimal untuk menyimpan alamat memori dari variabel lain. Karena semua data program komputer disimpan dalam sel memori yang memiliki alamat unik, pointer memungkinkan program untuk langsung menunjuk dan mengakses nilai dari variabel di alamat tersebut. Pointer juga dapat digunakan untuk mengakses elemen pada array maupun karakter pada string.

## C.	Fungsi
###     Fungsi merupakan blok dari kode yang dirancang untuk melaksanakan tugas khusus dengan tujuan membuat program lebih terstruktur, mudah dipahami, dan menghindari pengulangan kode. Fungsi umumnya memerlukan masukan yang disebut parameter, memproses masukan tersebut, dan memberikan hasil akhir berupa nilai balik (return value).

## D.	Prosedure
###     Prosedur adalah sebutan untuk fungsi yang tidak mengembalikan nilai akhir, yang dalam bahasa C++ dideklarasikan dengan tipe void. Prosedur hanya mengeksekusi instruksi atau tugas tertentu yang ada di dalam blok kodenya tanpa memberikan return value kepada pemanggilnya.

## E.   Parameter Fungsi
###     Parameter adalah nilai masukan untuk fungsi atau prosedur, yang terbagi menjadi parameter formal (variabel saat fungsi didefinisikan) dan parameter aktual (nilai saat fungsi dipanggil). Terdapat tiga metode pengiriman parameter: Call by Value (menyalin nilai, tidak mengubah variabel asli), Call by Pointer (mengirim alamat memori untuk mengubah nilai variabel asli menggunakan pointer), dan Call by Reference (mengirim alamat melalui referensi rujukan untuk mengubah nilai asli tanpa simbol pointer tambahan saat pemanggilan). 


# GUIDED 1
### Source code: 

```cpp
#include <iostream>
using namespace std;
int main(){
    int x, y;
    int *px;
    x=87;
    px=&x;
    y= *px;
    
    cout<<"Alamat x= "<<&x<<endl;
    cout<<"Isi px= "<<px<<endl;
    cout<<"Isi x= "<<x<<endl;
    cout<<"Nilai yang ditunjuk px= "<<*px<<endl;
    cout<<"Nilai y= "<<y<<endl;
    return 0;
}
``` 

### Penjelasan:Kode program tersebut mendefinisikan variabel x dengan nilai tertentu dan sebuah pointer px yang menyimpan alamat memori dari x. Selanjutnya, program menyalin nilai yang ditunjuk oleh px ke dalam variabel y, dan diakhiri dengan menampilkan alamat memori beserta nilai dari masing-masing variabel tersebut ke layar.


### GUIDED 2	
### Source code: 

```cpp
#include <iostream>
#define MAX 5
using namespace std;
int main(){
    int i, j; 
    float nilai_total, rata_rata;
    float nilai[MAX];
    static int nilai_tahun [MAX][MAX]=
    {   {0,2,2,0,0},
        {0,1,1,1,0},
        {0,3,3,3,0},
        {4,4,0,0,4},
        {5,0,0,0,5}
    };
    for (i=0; i<MAX;i++){
        cout<<"masukan nilai ke-"<<i+1<<endl;
        cin>>nilai[i];
    } 
    cout<<"\ndata nilai siswa: \n";
    for (i=0; i<MAX;i++)
        cout<<"nilai k-"<<i+1<<nilai[i]<<endl;
    cout<<"\nnilai tahunan: \n";
    
    for (i=0;i<MAX;i++){
        for (j=0; j<MAX;j++)
            cout<<nilai_tahun[i][j];
        cout<<"\n";
    }
    return 0;
}

```

### Penjelasan: Kode program tersebut meminta lima inputan nilai yang disimpan ke dalam array satu dimensi, lalu menampilkannya kembali sebagai data nilai siswa. Setelah itu, program akan membaca dan menampilkan sekumpulan angka dari sebuah array dua dimensi yang sudah didefinisikan sebelumnya sebagai data nilai tahunan.


### GUIDED 3
### source code: 
```cpp
#include <iostream>
using namespace std;
int maks3(int a, int b, int c);
int main(){
    int x,y,z;
    cout<<"masukan nilai bilangan ke-1=";
    cin>>x;
    cout<<"masukan nilai bilangan ke-2=";
    cin>>y;
    cout<<"masukan nilai bilangan ke-3";
    cin>>z;
    cout<<"nilai maksimumnya adalah="<<maks3(x,y,z);
    return 0;
}
int maks3(int a, int b, int c){
    int temp_max = a;
    if (b> temp_max)
    temp_max = b ;
    if(c>temp_max)
    temp_max = c;
    return (temp_max);
}
```

### penjelasan: Kode program tersebut meminta tiga inputan bilangan yang kemudian dikirimkan ke dalam sebuah fungsi bernama maks3. Di dalam fungsi tersebut, ketiga bilangan akan dibandingkan dengan operasi logika untuk mencari nilai terbesarnya. Setelah itu, program utama akan menerima pengembalian nilai dan menampilkan hasil nilai maksimum tersebut.


### GUIDED 4
### source code: 
```cpp
#include<iostream>
using namespace std;

void tulis (int x);
int main(){
    int jum;
    cout<< "jumlah baris kata=";
    cin>>jum;
    tulis(jum);
    return 0;
}

void tulis (int x){
    for (int i=0; i<x; i++)
    cout<<"baris ke-"<<i+1<<endl;
}
```

### penjelasan: Kode program tersebut meminta satu inputan bilangan sebagai penentu jumlah baris yang kemudian dikirimkan ke dalam sebuah prosedur bernama tulis. Di dalam prosedur tersebut, program akan melakukan perulangan untuk mencetak kalimat secara berurutan sesuai dengan batas jumlah baris yang telah diinputkan pengguna.


### GUIDED 5
### source code: 
```cpp
#include<iostream>
using namespace std;

void tukarValue(int x, int y){
    int temp = x;
    x= y;
    y= temp;
}

void tukarPointer(int *x, int *y){
    int temp= *x;
    *x = *y;
    *y = temp;
}

void tukarReference(int &x, int &y){
    int temp = x;
    x = y ;
    y =  temp;
}
int main(){
    int a = 4, b=6;
    tukarValue(a,b);
    cout<<"setelah call by Value        -> a = "<<a<<", b= "<<b<<"(tetap)"<<endl;

    tukarPointer(&a,&b);
    cout<<"setelah call by Pointer      -> a = "<<a<<", b= "<<b<<"(Berubah!)"<<endl;

    tukarReference(a, b);
    cout<<"setelah call by Reference    -> a = "<<a<<", b= "<<b<<"(Berubah Lagi!)"<<endl;

    return 0;
}
```

### penjelasan: Kode program tersebut mendefinisikan dua variabel yang kemudian akan dilakukan operasi penukaran nilai melalui tiga fungsi berbeda, yaitu menggunakan metode pass by value, pass by pointer, dan pass by reference. Setelah memanggil masing-masing fungsi, program akan menampilkan hasilnya untuk membuktikan metode parameter mana yang berhasil mengubah nilai asli dari variabel tersebut.




# Unguided
### 1. Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3.
```cpp
#include <iostream>
using namespace std;

void Matriks(int M[3][3], string nama){
    cout << "Matriks " << nama << ":\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << M[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main(){
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int tambah[3][3], kurang[3][3], kali[3][3];

    Matriks(A, "A");
    Matriks(B, "B");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            tambah[i][j] = A[i][j] + B[i][j];
            kurang[i][j] = A[i][j] - B[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            kali[i][j] = 0;
            for (int k = 0; k < 3; k++){
                kali[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    Matriks(tambah, "Penjumlahan (A + B)");
    Matriks(kurang, "Pengurangan (A - B)");
    Matriks(kali, "Perkalian (A x B)");

    return 0;
}
 
```
### Output 1
![Screenshot Output Unguided 1_!] (https://github.com/divazhraa/STRUKTUR_DATA/blob/main/MODUL02/OUTPUT/soal1.png)

### penjelasan unguided 1
[Kode program tersebut mendefinisikan dua buah matriks 3x3 yang disimpan dalam variabel A dan B, yang kemudian akan dilakukan operasi matematika berupa penjumlahan, pengurangan, dan perkalian antar kedua matriks tersebut menggunakan perulangan bersarang. Setelah itu, program akan memanggil sebuah fungsi khusus untuk menampilkan seluruh hasil dari perhitungan masing-masing operasi matriks tersebut ke layar.]


### 2. Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar nilai dari 3 variabel.

```cpp
#include <iostream>
using namespace std;

void tukarPointer(int *a, int *b, int *c){
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void tukarReference(int &a, int &b, int &c){
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main(){
    int x = 10, y = 20, z = 30;
    cout << "Kondisi Awal: x=" << x << ", y=" << y << ", z=" << z << "\n\n";
    tukarPointer(&x, &y, &z);
    cout << "Setelah Tukar Pointer: x=" << x << ", y=" << y << ", z=" << z << "\n";
    tukarReference(x, y, z);
    cout << "Setelah Tukar Reference: x=" << x << ", y=" << y << ", z=" << z << "\n";
    return 0;
}

```
### Output Unguided 2 :
![Screenshot Output Unguided 1_!] (https://github.com/divazhraa/STRUKTUR_DATA/blob/main/MODUL02/OUTPUT/soal2.png)


### penjelasan unguided 2
[Kode program tersebut mendefinisikan tiga variabel dengan nilai awal yang berbeda, yang kemudian akan dilakukan operasi penukaran nilai secara sirkular (berputar) menggunakan dua prosedur berbeda, yaitu dengan metode pass by pointer dan pass by reference. Setelah memanggil masing-masing prosedur, program akan menampilkan hasilnya ke layar untuk menunjukkan bahwa kedua metode tersebut berhasil mengubah nilai asli dari ketiga variabel tersebut.]

### 3. Diketahui sebuah array 1 dimensi sebagai berikut : array = {48, 2, 7 , 21, 5, 20, 77, 9, 10, 1}
### Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari
### array tersebut! Kerjakan soal dengan ketentuan :
#### - Untuk mencari nilai minimum dan maksimum, harus dibuat menjadi sebuah function.
#### - Untuk mencari rata-rata harus dibuat menjadi sebuah procedure.
#### - Buat output di fungsi utama (main) untuk menampilkan nilai rata-rata yang sudah didapatkan melalui procedure sebelumnya. (Gunakan metode pass by reference atau pass by pointer)
#### - Buat menu sederhana untuk menjalankan setiap procedure

### source code unguided 3
```cpp

#include <iostream>
using namespace std;
int cariMaksimum(int arr[], int size){
    int maks = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i] > maks){
            maks = arr[i];
        }
    }
    return maks;
}

int cariMinimum(int arr[], int size){
    int min = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

void hitungRataRata(int arr[], int size, float &rataRata){
    int total = 0;
    for (int i = 0; i < size; i++){
        total += arr[i];
    }
    rataRata = (float)total / size;
}

int main(){
    int arrA[] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    int n = sizeof(arrA) / sizeof(arrA[0]);
    int pilihan;
    float rataRata = 0;
    do{
        cout << "\n--- Menu Program Array ---\n";
        cout << "1. Tampilkan isi array\n";
        cout << "2. cari nilai maksimum\n";
        cout << "3. cari nilai minimum\n";
        cout << "4. Hitung nilai rata - rata\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan){
        case 1:
            cout << "Isi arrA: { ";
            for (int i = 0; i < n; i++){
                cout << arrA[i] << (i == n - 1 ? " " : ", ");
            }
            cout << "}\n";
            break;
        case 2:
            cout << "Nilai maksimum: " << cariMaksimum(arrA, n) << "\n";
            break;
        case 3:
            cout << "Nilai minimum: " << cariMinimum(arrA, n) << "\n";
            break;
        case 4:
            hitungRataRata(arrA, n, rataRata);
            cout << "Nilai rata-rata: " << rataRata << "\n";
            break;
        case 5:
            cout << "Program selesai.\n";
            break;
        default:
            cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 5);

    return 0;
}
```
### Output Unguided 3 :
![Screenshot Output Unguided 1_!] (https://github.com/divazhraa/STRUKTUR_DATA/blob/main/MODUL02/OUTPUT/soal3.png)


### penjelasan unguided 3
[Kode program tersebut mendefinisikan sebuah array satu dimensi beserta menu pilihan interaktif, yang kemudian akan memproses data array tersebut melalui berbagai fungsi dan prosedur untuk mencari nilai maksimum, nilai minimum, serta menghitung nilai rata-rata berdasarkan input pilihan pengguna. Setelah itu, program akan menampilkan hasil dari perhitungan yang dipilih tersebut ke layar, dan akan terus menampilkan ulang menu utama hingga pengguna memilih opsi untuk keluar dari program.]


# Kesimpulan
[Dapat disimpulkan bahwa praktikum ini membantu memahami konsep lanjutan pemrograman C++ melalui penggunaan array satu dan dua dimensi, fungsi, prosedur, serta manipulasi memori menggunakan pointer dan reference. Melalui berbagai program yang dikerjakan, praktikum ini melatih logika pemrograman dalam mengolah struktur data seperti matriks, memilih metode pengiriman parameter yang tepat, serta menyelesaikan masalah dengan menyusun kode yang lebih terstruktur dan efisien.]


### Referensi
#### Modul pembelajaran


