# MoneyTracking

Sebuah aplikasi sederhana untuk mencatat pemasukan dan pengeluaran. Proyek ini ditulis dengan C++ dan tersedia file utama `main.cpp` serta folder sumber (`source`) dan tempat penyimpanan data (`dataFile`).

## Fitur
- Mencatat pemasukan dan pengeluaran
- Menyimpan data ke folder `dataFile`
- Antarmuka baris perintah sederhana (CLI)
- Struktur kode yang mudah dikembangkan di folder `source`

> Catatan: Deskripsi fitur di atas generik — untuk detail perilaku dan format penyimpanan, lihat implementasi pada `main.cpp` dan file di folder `source`.

## Persyaratan
- Compiler C++ (mis. g++, clang++)
- Sistem operasi: Linux / macOS / Windows (dengan toolchain C++)

## Cara membangun dan menjalankan
1. Clone repositori:
   ```
   git clone https://github.com/fajrirrmdhn/MoneyTracking.git
   cd MoneyTracking
   ```

2. Kompilasi (cara cepat dengan g++):
   ```
   g++ main.cpp -o MoneyTracking
   ```

   Jika proyek menggunakan beberapa file di `source/`, Anda mungkin perlu menyesuaikan perintah kompilasi:
   ```
   g++ main.cpp source/*.cpp -o MoneyTracking
   ```

3. Jalankan program:
   ```
   ./MoneyTracking
   ```

## Struktur repositori
- `main.cpp`        — titik masuk aplikasi
- `source/`         — fungsi-fungsi
- `dataFile/`       — lokasi penyimpanan data pengguna (file data)
- `.vscode/`        — konfigurasi editor (opsional)
- `README.md`       — dokumentasi ini

## Format data
Data disimpan di folder `dataFile`. Format persis (CSV, JSON, atau teks) ditentukan oleh implementasi dalam `main.cpp` / file di `source/`. Untuk menyesuaikan atau memigrasi data, buka file sumber dan cari bagian pembacaan/penulisan file.

## Kontak
Pemilik repo: [fajrirrmdhn](https://github.com/fajrirrmdhn)

---