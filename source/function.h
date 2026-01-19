#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int saldo = 0;
string kategori;
void tampilanAwal(){
    cout << "===============================" << endl;
    cout << "     APLIKASI PELACAK UANG     " << endl;
    cout << "===============================" << endl;
    cout << "          1.Pemasukan          " << endl;
    cout << "         2.Pengeluaran         " << endl;
    cout << "          3.Cek Saldo          " << endl;
    cout << "      4.Riwayat Transaksi      " << endl;
    cout << "          5.Arus Kas           " << endl;
    cout << "       6.Keluar Program        " << endl;
    cout << "===============================" << endl;
}

void simpanKeFile(string jenis, int jumlah, string kategori = ""){
    ofstream dataFile;
    dataFile.open("database.txt", ios::app);
        if(jenis == "Pemasukan"){
            dataFile << "Pemasukan:" << jumlah << endl;
        }else if(jenis == "Pengeluaran"){
            dataFile << "Pengeluaran:" << jumlah << " (Kategori:" << kategori << ")" << endl;
        }
        dataFile.close();
    }
    

void pemasukanSaldo(){
    int masuk;
    cout << "Masukkan Jumlah Pemasukan: ";
    cin >> masuk;

    saldo += masuk;
    simpanKeFile("Pemasukan", masuk); 
    cout << endl;
}

void pengeluaranSaldo(){
    int keluar;
    cout << "Masukkan Jumlah Pengeluaran: ";
    cin >> keluar;

    cout << "Masukkan Kategori: ";
    cin.ignore(); 
    getline(cin, kategori); 
    
    saldo -= keluar;
    simpanKeFile("Pengeluaran", keluar, kategori);
    cout << endl;
}

void cekSaldo(){
    cout << "Saldo Anda Saat Ini: " << saldo << endl;
    cout << endl;
}

void riwayatTransaksi(){
    ifstream dataFile;
    string data;
    string nama;
    
    dataFile.open("database.txt");
    
    getline(dataFile, data);
    // data.append("\n" + data);
    // cout << data << endl;
    while(!dataFile.eof()){
        dataFile >> nama;
        cout << nama << " " << endl;
    }

    dataFile.close();
} 
