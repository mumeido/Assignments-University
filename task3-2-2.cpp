#include <iostream>
#include <conio.h>

using namespace std;

void core(){
  struct program1{
  char huruf[30],kata[30],angka[30];
  }program;
  
  cout << "Masukkan sebuah huruf = ";
  cin.getline(program.huruf,30);
  cout << "Masukkan sebuah kata = ";
  cin.getline(program.kata,30);
  cout << "Masukkan Angka = ";
  cin.getline(program.angka,30);
  cout << "==========================" << endl;
  cout << "Huruf yang anda pilih adalah : " << program.huruf << endl;
  cout << "dengan makna : " << program.kata << endl;
  cout << "dengan nilai : " << program.angka << endl;
  
}

void cabang(){
  char lanjut='y';

while(true) {
  core();
  
  cout <<"Apakah anda ingin mengulang program ? (y/n) : ";
  cin >> lanjut;
  if (lanjut == 'n') {
    cout << " ===== PROGRAM BERAKHIR ===== ";
    break;
  }
  cin.get();
  cout << endl;
}
  
}
int main() {
  cabang();
return 0;
}
