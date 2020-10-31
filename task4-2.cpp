#include <iostream>

using namespace std;

string bulan[13] = {" ", "Januari", "Februari", "Maret" , "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober" , "November", "Desember"};
int angka;

int main() {

do {
    cout << " Masukkan nomor bulan : ";
    cin >> angka;
    
    if (angka < 1)
    {
        cout << "Tidak ada bulan ke - " << angka << endl;
        break;
    }
    else if (angka > 12)
    {
        cout << "Tidak ada bulan ke-" << angka << endl;
        break;
    }
    else{
        cout << "Bulan ke- " << angka << " Adalah " << bulan[angka] << endl;
        break;
    }
}
while (angka > 0);
    cin.get();
    return 0;
}