#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi variable global array a dengan ukuran 20
int n; //Deklarasi variable global n untuk menyimpan banyaknya elemen

void input (){ //procedur untuk 
    while (true){
        cout << "Masukkan banyaknya elemen pada array : "; 
        cin >> n;     //Input dari pengguna
        if (n <= 20)  // Jika n kurang dari atau sama dengan 20
            break;   // Keluar dari loop
        else {      // jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)  //looping i dimulai dari 0
        cout << "Data ke-" << (1+1) << ": "; //  Output ke Layar
        
}