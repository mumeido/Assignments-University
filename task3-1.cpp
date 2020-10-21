#include <iostream>
#include <string>

using namespace std;

void program() {

struct Data{
string plat,jenis;
char *nama,*alamat,*kota;
	
}mobil;
	
mobil.plat = " AD 617 USS ";
cout << "Plat Nomor Kendaraan : " << mobil.plat << endl;
mobil.jenis = "SEDAN";
cout << "Jenis Kendaraan : " << mobil.jenis << endl;
mobil.nama = "Universitas Sahid Surakarta";
cout << "Nama Pemilik : " << mobil.nama << endl;
mobil.alamat = "Jl. Adisucipto No. 154";
cout << "Alamat : " << mobil.alamat << endl;
mobil.kota = "Surakarta";
cout << "Kota : " << mobil.kota << endl; 
}

int main() {
	
program();

	cin.get();
	return 0;
}
