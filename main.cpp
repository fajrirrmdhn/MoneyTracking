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
    
    int saldo = cekSaldo();

    switch(pilihan) {
        case 1:
            pemasukanSaldo();
            break;
        case 2: 
            pengeluaranSaldo();
            break;
        case 3:
            cout << "Saldo Anda Saat Ini : " << saldo << endl;
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
