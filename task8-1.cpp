#include <iostream>
using namespace std;
 
int main () {
int i;
float sum = 0, max = 0, min = 0;
int data[25];
 

for(i=0; i<25; i++) {
	cout << "nilai mahasiswa ke " << i + 1  << " : ";
	cin >> data[i];
}


cout << "\n Nilai dari ke-25 Mahasiswa adalah : \n";
max = min = data[0];
for(i=0; i<25; i++) {
	cout << "Nilai mahasiswa ke " << i+ 1 << " : " << data[i] << endl; 
	sum += data[i];
	if (max < data[i]) {
		max = data[i];
}
if (min > data[i]) {
	min = data[i];
}
}
cout << " \t ===============================================";
cout << "\t\t Jumlah data : " << sum << endl;
cout << "\t Rata-rata : " << sum/25 << endl;
cout << "\t terkecil :" << min << endl;
cout << "\t terbesar : " << max << endl;

 
return 0;
}