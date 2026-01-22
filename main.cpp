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
    int arusKasMasuk = nilaiArusKasMasuk();
    int arusKasKeluar = nilaiArusKasKeluar();
    int arusKas = arusKasMasuk - arusKasKeluar;

    switch(pilihan) {
        case 1:
            pemasukanSaldo();
            break;
        case 2: 
            pengeluaranSaldo();
            break;
        case 3:
            cout << "===============================" << endl;
            cout << "Saldo Anda Saat Ini : " << saldo << endl;
            break;
        case 4:
            riwayatTransaksi();
            break;
        case 5:
            cout << "===============================" << endl;
            cout << "Pemasukan: " << arusKasMasuk << endl;
            cout << "Pengeluaran: " << arusKasKeluar << endl;
            cout << "Arus Kas: " << arusKas << endl;
            break;
        case 6:
            break;
        default:
        cout << "===============================" << endl;
        cout << "Anda belum memilih" << endl;
        }
    }while(pilihan != 6);

    return 0;
}
