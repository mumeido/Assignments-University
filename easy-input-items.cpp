#include <iostream>
#include <string>

using namespace std;

struct item {
	
	int harga,unit,hargaT;
	string barang;
	
};

char lanjut;

void program() {
	struct item item1, item2;
	
	cout << "Masukan barang nama barang pertama : ";
	cin >> item1.barang;
	cout << "Masukan harga barang : Rp. ";
	cin >> item1.harga;
	cout << "Masukan banyak barang : ";
	cin >> item1.unit;
	cout << "=================================== \n";
	item1.hargaT = item1.harga * item1.unit;
	cout << "Nama barangnya adalah : " << item1.barang << endl;
	cout << "Harga barang per-unit adalah : Rp. " << item1.harga << endl;
	cout << "Harga total adalah : Rp. " << item1.hargaT << endl;
	cout << "Jumlah unit tersedia : " << item1.unit << endl;
}

void cabang() { // fungsi perulangan dan kondisi percabangannya
	
	while(true) {
	
	cout <<"Lanjut menginput data ? (y/n) : ";
	cin >> lanjut;
	
	if (lanjut == 'y') {
		program();
	} else if ( lanjut == 'n') {
		break;
	
	}
}
}

int main(){
	
	program();
	
	cabang();
	
	cin.get();
	return 0;
}
