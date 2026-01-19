#include <iostream>
#include <string>
#include <fstream>
#include "function.h"
using namespace std;

int main(){
    int pilihan;

    do{
    tampilanAwal();

    cout << "Masukkan Pilihan Anda: ";
    cin >> pilihan;
    cout << endl;

    switch(pilihan) {
        case 1:
            pemasukanSaldo();
            break;
        case 2: 
            pengeluaranSaldo();
            break;
        case 3:
            cekSaldo();
            break;
        case 4:
            riwayatTransaksi();
            break;
        case 5:
            break;
        case 6:
            break;
        default:
        cout << "Anda belum memilih" << endl;
        }
    }while(pilihan != 6);

    return 0;
}
