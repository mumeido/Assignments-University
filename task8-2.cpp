#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main() {
    char str[30][60], t[20];
    int i,j;
    cout << "Masukkan  kata Bahasa inggris  " << endl;
    for ( i=0; i<30; i++){
        cout << "Kata ke " << i + 1 << " : ";
        cin >> str[i];
    }
    for (i =0; i<30; i++){
        for ( j = 1; j<30; j++){
            if(strcmp(str[j-1],str[j]) >0) {
                strcpy(t, str[j-1]);
                strcpy(str[j-1],str[j]);
                strcpy(str[j], t);
            }
        }
    }
    cout << "\n kata dalam urutan alphabet : \n";
    for ( i=0; i <30; i++){
        cout << str[i] << "\t";
    }
    getch();

}