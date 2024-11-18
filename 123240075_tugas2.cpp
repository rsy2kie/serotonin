#include <iostream>
using namespace std;
int main () {

int jml_proyek;
double waktu_kerja,upah_perjam;
double total_bayaran = 0;

    cout << "Masukkan jumlah proyek yang ingin anda kerjakan (Angka lebih dari 0) : ";
    cin >> jml_proyek; cout << endl;

for (int i =0; i < jml_proyek; i++) {
    cout << "PROYEK" << i + 1 << endl;
    cout << "Masukkan jumlah jam kerja untuk proyek ini: ";
    cin >> waktu_kerja;
    cout << "Masukkan upah per jam untuk proyek ini (dalam rupiah): ";
    cin >> upah_perjam;

double bayaranproyek = waktu_kerja * upah_perjam;

    total_bayaran += bayaranproyek;
    cout << "Bayaran untuk proyek" << i + 1 << "adalah : Rp." << bayaranproyek;
    cout << endl << endl;
}
cout << "Total bayaran dari seluruh proyek freelancer adalah: Rp." << total_bayaran << endl;

return 0;

}