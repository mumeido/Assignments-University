#include <iostream>
#include <string>

using namespace std;

string kondisi;
int nilai1, nilai2;

void program() {

cout << "====== Program Nilai Mahasiswa ======" << endl;
cout << endl;
cout << " Masukan nilai pertama : ";
cin >> nilai1;
cout << " Masukkan nilai kedua : ";
cin >> nilai2;

    if (nilai2 >= 60 && nilai1 >= 60) {
        cout << " Anda DITERIMA " << endl;
    }else {
        cout << " Anda tidak DITERIMA " << endl;
    }

}

void cabang() {
    char lanjut ='y';

    while (true)
    {
        program();

        cout << " Apakah anda ingin mengulang program ? (y/n) : ";
        cin >> lanjut;
        if (lanjut == 'n')
        {
            cout << " ====== PROGRAM BERAKHIR ====== ";
            break;
        }
        cin.get();
        cout << endl;
    }
}

int main () {

cabang();
    return 0;
}