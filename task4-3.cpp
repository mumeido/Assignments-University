#include <iostream>

using namespace std;

char huruf;


int main(){

do {
    cout << "======= SELAMAT DATANG ====== \n";
cout << "Masukkan huruf yang anda inginkan : ";
cin >> huruf;

if (huruf == 'A'||huruf == 'I'||huruf == 'U'||huruf == 'E'||huruf == 'O'){

    cout << "Huruf " << huruf << " adalah huruf VOKAL" << endl;
    break;
}else if( huruf == 'a'||huruf == 'i'||huruf == 'u'||huruf == 'e'||huruf == 'o') {
    cout << "Huruf " << huruf << " adalah huruf VOKAL" << endl;
    break;
}else{
    cout << "Huruf " << huruf << " adalah huruf KONSONAN" << endl;
    break;
}
} while(true);

    cin.get();
    return 0;

}