#include <iostream>
using namespace std;

int n = 0, mayor = 0, menor = 0, centro = 0; 
int dias[0];

bool Jala(int num){
	int suma = 0;
	bool checar;
	for(int i = 0; i < n;i++){
		suma += dias[i]-num;
		if(suma < 0 ){
			checar = false;
			break;
		}
		else{
			checar = true;
		}
	}
	
	return checar;
}

int main(int argc, char** argv) {
	bool checar = false;
	cin >> n;
	dias[n];
	
	for(int i = 0; i < n; i++){
		cin >> dias[i];
	}
	mayor = dias[0];
	centro = mayor /2;
	do{
		checar = Jala(centro);
		cout << mayor << " " << menor << " " << centro << " " << checar << endl;		//if(centro == mayor){
			if(checar == false){
				mayor = centro-1;
				centro = ((mayor+menor)/2)+1;
			}
			else{
				menor = centro;
				centro = ((mayor + menor)/2)+1;
			}
	//	}
	}
	while(menor < mayor);
	
	cout<< menor << endl;
}

