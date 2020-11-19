#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <cstring>

#define alphacnt 26 
#define a_kecil 97
#define a_besar 64
#define z_kecil a_kecil + alphacnt 
#define z_besar a_besar + alphacnt

using namespace std;

char str[100];
char c;

//  Fungsi untuk menghitung jumlah kata yang dimasukkan

void j_kata(){
	int i, spasi = 0;
	
	for (i = 0; str[i]; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			spasi++;
		}
	}
	cout << "Jumlah Kata = " << spasi + 1 << endl;
}

// prototipe fungsi menghitung jumlah karakter
void j_karakter(char kar, int count[]);


int main()
{
	int counter[alphacnt];
	int x;

	cout << "Masukkan kalimat : ";
	gets(str);
	j_kata();

	printf ("Jumlah karakter adalah %u \n", (unsigned)strlen(str));

	for (x = 0; x < alphacnt; x++)
	{
		counter[x] = 0;
	}

	for (x = 0; str[x] != '\0'; x++)
	{
		j_karakter(str[x], counter);
	}

	for (x = 0; x < alphacnt; x++)
	{
		printf("%c=%d\n", x + a_kecil, counter[x]);
	}
	return 0;
}

// fungsi menghitung jumlah karakter
void j_karakter(char kar, int count[]){
	int count_idx;

	if ((kar >= a_besar) && (kar <= z_besar))
	{
		kar += a_kecil - a_besar - 1;
	}
	if ((kar >= a_kecil) && (kar <= z_kecil))
	{
		count_idx = (char)kar - a_kecil;
		count[count_idx]++;
	}
}