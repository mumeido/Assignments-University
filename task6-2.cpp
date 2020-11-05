#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string kode_kayu[5] = {"KAYU001", "KAYU002", "KAYU003", "KAYU004", "KAYU005"};
string jenis_kayu[3] = {"Jati", "Mahoni", "Pinus"};
string k_kayu,t_kayu;
string bulan[5] = {"Maret","Juli","September","Oktober","November"};
string tanggal[5] = { "3","20","17","22","5"};
int stock_awal[5] = {1,2,3,4,5}, panjang[4] = {30, 15, 23, 19}, tahun = 2020,banyak,stock_akhir;
char status;

class kayu_masuk {
    public:
    void KAYU001(){

        cout << "Kayu " << kode_kayu[0] << " terakhir masuk pada " << " " << tanggal[0] << " " << bulan[0] << " " << tahun << endl;
    }
    void KAYU002() {
        cout << "Kayu " << kode_kayu[1] << " terakhir masuk pada " << " " << tanggal[1] << " " << bulan[1] << " " << tahun << endl;
    }
    void KAYU003()
    {
        cout << "Kayu " << kode_kayu[2] << " terakhir masuk pada " << " " << tanggal[3] << " " << bulan[0] << " " << tahun << endl;
    }
    void KAYU004()
    {
        cout << "Kayu " << kode_kayu[3] << " terakhir masuk pada " << " " << tanggal[2] << " " << bulan[2] << " " << tahun << endl;
    }
    void KAYU005()
    {
        cout << "Kayu " << kode_kayu[4] << " terakhir masuk pada " << " " << tanggal[3] << " " << bulan[3] << " " << tahun << endl;
    }

}Kmasuk;

class kayu_keluar {
    public:
    void KAYU001(){
        cout << "Kayu " << kode_kayu[0] << " terakhir keluar pada " << " " << tanggal[1] << " " << bulan[1] << " " << tahun << endl;
        cout << endl;
    }
    void KAYU002()
    {
        cout << "Kayu " << kode_kayu[1] << " terakhir keluar pada " << " " << tanggal[0] << " " << bulan[4] << " " << tahun << endl;
        cout << endl;
    }
    void KAYU003()
    {
        cout << "Kayu " << kode_kayu[2] << " terakhir keluar pada " << " " << tanggal[4] << " " << bulan[3] << " " << tahun << endl;
        cout << endl;
    }
    void KAYU004()
    {
        cout << "Kayu " << kode_kayu[3] << " terakhir keluar pada " << " " << tanggal[0] << " " << bulan[4] << " " << tahun << endl;
        cout << endl;
    }
    void KAYU005()
    {
        cout << "Kayu " << kode_kayu[4] << " terakhir keluar pada " << " " << tanggal[2] << " " << bulan[4] << " " << tahun << endl;
        cout << endl;
    }
}Kkeluar;


int main()
{

    do {
    cout << "\t\t ====== DATABASE KAYU SHI DHO MUK THI ====== \n";
Tabel:
    cout << setw(6) << "Code" << setw(16) << "Jenis" << setw(17) << "Panjang" << setw(17) << "Harga" << setw(20) << "Stock" << endl;
    cout << setw(5) << kode_kayu[0] << setw(15) << jenis_kayu[0] << setw(15) << panjang[2] << "m" << setw(15) << "Rp. " << 5000000 << setw(15) << stock_awal[1] << endl;
    cout << setw(5) << kode_kayu[1] << setw(15) << jenis_kayu[2] << setw(15) << panjang[2] << "m" << setw(15) << "Rp. " << 3500000 << setw(15) << stock_awal[0] << endl;
    cout << setw(5) << kode_kayu[2] << setw(15) << jenis_kayu[2] << setw(15) << panjang[1] << "m" << setw(15) << "Rp. " << 4000000 << setw(15) << stock_awal[3] << endl;
    cout << setw(5) << kode_kayu[3] << setw(15) << jenis_kayu[1] << setw(15) << panjang[0] << "m" << setw(15) << "Rp. " << 2400000 << setw(15) << stock_awal[4] << endl;
    cout << setw(5) << kode_kayu[4] << setw(15) << jenis_kayu[0] << setw(15) << panjang[1] << "m" << setw(15) << "Rp. " << 4200000 << setw(15) << stock_awal[2] << endl;
    cout << endl;
    cout << "Masukkan kode kayu : ";cin >> k_kayu;

    if ( k_kayu == kode_kayu[0]) {
        Kmasuk.KAYU001();
        Kkeluar.KAYU001();
    }else if ( k_kayu == kode_kayu[1]){
        Kmasuk.KAYU002();
        Kkeluar.KAYU002();
    }else if ( k_kayu == kode_kayu[2]){
        Kmasuk.KAYU003();
        Kkeluar.KAYU003();
    }else if ( k_kayu == kode_kayu[3]) {
        Kmasuk.KAYU004();
        Kkeluar.KAYU004();
    }else if ( k_kayu == kode_kayu[4]){
        Kmasuk.KAYU005();
        Kkeluar.KAYU005();
    }else {
        cout << "Silahkan masukan kode kayu yang benar !";
    }
    
    cout << "Apakah anda ingin menambah stock kayu ? : (Y/N) ";
    cin >> status;

    if (status == 'Y' || status == 'y') {
        cout << "masukkan kode item : ";
        cin >> t_kayu;
        cout << "masukkan berapa banyak : ";
        cin >> banyak;

        if (t_kayu == kode_kayu[0]){
           stock_awal[1] = stock_awal[1] + banyak;
           goto Tabel;
        }else if ( t_kayu == kode_kayu[1]){
            stock_awal[0] = stock_awal[0] + banyak;
            goto Tabel;
        }else if ( t_kayu == kode_kayu[2]){
            stock_awal[3] = stock_awal[3] + banyak;
            goto Tabel;
        }else if ( t_kayu == kode_kayu[3]) {
            stock_awal[4] = stock_awal[4] + banyak;
            goto Tabel;
        }else if ( t_kayu == kode_kayu[4]) {
            stock_awal[2] = stock_awal[2] + banyak;
            goto Tabel;
        }

    }else if ( status == 'N' || status == 'n'){
        cout << "\t\t ====== Program berhenti ======";
        break;
    }
    }while(true);
    return 0;
}

