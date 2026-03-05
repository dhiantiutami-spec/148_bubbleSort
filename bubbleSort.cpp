#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi variable global array a dengan ukuran 20
int n; //Deklarasi variable global n untuk menyimpan banyaknya elemen

void input (){ //procedur untuk 
    while (true){
        cout << "Masukkan banyaknya elemen pada array : "; 
        cin >> n; //Input dari pengguna
    }
}