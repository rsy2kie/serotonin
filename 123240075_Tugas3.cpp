#include <iostream>
#include <iomanip>
using namespace std;

int hitungFaktorial(int n) {
    return (n <= 1) ? 1 : n * hitungFaktorial(n - 1);
}

int hitungPermutasi(int n, int r) {
    return (r == 0) ? 1 : n * hitungPermutasi(n - 1, r - 1);
}

int hitungKombinasi(int n, int r) {
    if (r == 0 || r == n) 
        return 1;
    return hitungKombinasi(n - 1, r - 1) + hitungKombinasi(n - 1, r);
}

void cetakBorder() {
    cout << "=========================================\n";
}

void tampilkanHeader(const string &judul) {
    cetakBorder();
    cout << "| " << setw(38) << left << judul << "|\n";
    cetakBorder();
}

int main() {
    int pilihan;
    char kembali;
    
    do {
        tampilkanHeader("MENU UTAMA");
        cout << "| 1. Faktorial                         |\n";
        cout << "| 2. Permutasi                         |\n";
        cout << "| 3. Kombinasi                         |\n";
        cout << "| 4. Keluar                            |\n";
        cetakBorder();
        cout << "Pilih opsi: ";
        cin >> pilihan;

        if (pilihan == 1) {
            int n;
            tampilkanHeader("Hitung Faktorial");
            cout << "| Masukkan nilai n: ";
            cin >> n;
            if (n < 0) {
                cout << "| Error: Nilai tidak boleh negatif     |\n";
            } else {
                cout << "| Hasil: " << n << "! = " << hitungFaktorial(n) << endl;
            }
            cetakBorder();
        } else if (pilihan == 2) {
            int n, r;
            tampilkanHeader("Hitung Permutasi");
            cout << "| Rumus : " << endl;
            cout << "| P = n! / (n-r)!" << endl;
            cout << "| Masukkan nilai n: ";
            cin >> n;
            cout << "| Masukkan nilai r: ";
            cin >> r;
            if (n < r || n < 0 || r < 0) {
                cout << "| Error: Nilai n dan r tidak valid     |\n";
            } else {
                cout << "| Hasil: " << n << "P" << r << " = " << hitungPermutasi(n, r) << endl;
            }
            cetakBorder();
        } else if (pilihan == 3) {
            int n, r;
            tampilkanHeader("Hitung Kombinasi");
            cout << "| Rumus : " << endl;
            cout << "| n! / ((n-r)! r!)" << endl;
            cout << "| Masukkan nilai n: ";
            cin >> n;
            cout << "| Masukkan nilai r: ";
            cin >> r;
            if (n < r || n < 0 || r < 0) {
                cout << "| Error: Nilai n dan r tidak valid     |\n";
            } else {
                cout << "| Hasil: " << n << "C" << r << " = " << hitungKombinasi(n, r) << endl;
            }
            cetakBorder();
        } else if (pilihan != 4) {
            tampilkanHeader("Pesan Error");
            cout << "| Pilihan tidak valid. Coba lagi.      |\n";
            cetakBorder();
        }

        if (pilihan != 4) {
            cout << "Kembali ke menu utama? (y/n): ";
            cin >> kembali;
            if (kembali == 'n' || kembali == 'N') {
                break;
            }
        }
    } while (pilihan != 4);

    tampilkanHeader("Program selesai");
    return 0;
}
