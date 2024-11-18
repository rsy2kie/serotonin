#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct DataMahasiswa {
    string nama;
    int nim;
    double nilaiAlgoritma, nilaiBasisData;
};

int main() {
    DataMahasiswa mahasiswa[100];
    int totalMahasiswa = 0;
    int pilihanMenu;

    while (true) {
        cout << "\nPilih Menu:\n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Tampilkan Data Mahasiswa\n";
        cout << "3. Keluar\n";
        cout << "Masukkan pilihan Anda (1-3): ";
        cin >> pilihanMenu;

        if (pilihanMenu == 1) {
            int jumlahBaru;
            cout << "Berapa data yang ingin Anda tambahkan : ";
            cin >> jumlahBaru;

            for (int i = 0; i < jumlahBaru; ++i) {
                cout << "\nMasukkan data mahasiswa ke-" << totalMahasiswa + 1 << ":\n";
                cout << "Nama: ";
                cin.ignore();
                getline(cin, mahasiswa[totalMahasiswa].nama);
                cout << "NIM: ";
                cin >> mahasiswa[totalMahasiswa].nim;

                do {
                    cout << "Nilai Algoritma (0-100): ";
                    cin >> mahasiswa[totalMahasiswa].nilaiAlgoritma;
                    if (mahasiswa[totalMahasiswa].nilaiAlgoritma < 0 || mahasiswa[totalMahasiswa].nilaiAlgoritma > 100) {
                        cout << "Nilai tidak valid. Harus antara 0-100.\n";
                    }
                } while (mahasiswa[totalMahasiswa].nilaiAlgoritma < 0 || mahasiswa[totalMahasiswa].nilaiAlgoritma > 100);

                do {
                    cout << "Nilai Basis Data (0-100): ";
                    cin >> mahasiswa[totalMahasiswa].nilaiBasisData;
                    if (mahasiswa[totalMahasiswa].nilaiBasisData < 0 || mahasiswa[totalMahasiswa].nilaiBasisData > 100) {
                        cout << "Nilai tidak valid. Harus antara 0-100.\n";
                    }
                } while (mahasiswa[totalMahasiswa].nilaiBasisData < 0 || mahasiswa[totalMahasiswa].nilaiBasisData > 100);

                totalMahasiswa++;
            }

        } else if (pilihanMenu == 2) {
            cout << "\nDaftar Data Mahasiswa:\n";
            cout << "=========================================================================\n";
            cout << left << setw(25) << "Nama" << setw(15) << "NIM" 
                 << setw(20) << "Nilai Algoritma" << setw(20) << "Nilai Basis Data" << endl;
            cout << "=========================================================================\n";

            for (int i = 0; i < totalMahasiswa; ++i) {
                cout << left << setw(25) << mahasiswa[i].nama 
                     << setw(15) << mahasiswa[i].nim 
                     << setw(20) << mahasiswa[i].nilaiAlgoritma 
                     << setw(20) << mahasiswa[i].nilaiBasisData << endl;
            }

        } else if (pilihanMenu == 3) {
            cout << "\nProgram selesai. Terima kasih!\n";
            break;

        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }

    return 0;
}
