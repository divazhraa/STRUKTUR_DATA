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