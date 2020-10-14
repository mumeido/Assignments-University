#include<iostream>

using namespace std;


int main(){

     int n;
     int p=1; // deret akan dimulai dari 1
     
     
	 cout << "Masukan suku ke-n : " ;
	 cin >> n;    // user meng-input suku ke-n                                    
      
	  while(n!=0){
             if(p % 2 != 0){
                   cout << p << " ";
                  n--;
             }
	p++; } //p selalu bertambah setiap perulangan
	
	cin.get();
	return 0;
}
