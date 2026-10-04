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