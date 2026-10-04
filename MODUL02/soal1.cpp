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