#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	bool checar2 = false;
	int cantidad = 0, suma = 0, n,m;
	cin >> n;
	int ccaja[n];
	cin>> m;
	
	for(int i =0; i < n; i++){
		cin >> ccaja[i];
	}
	
	for(int i = 0; i < n; i++){
		if(suma > cantidad){
			cantidad = suma;
		}
		suma = 0;
		for(int j = 0; j < m; j++){
			if(i+m> n){
				checar2 = true;
				break;
			}
			else{
				suma += ccaja[j+i];
			}
		}
		if(checar2 == true){
			break;
		}
	}
	
	cout << cantidad << endl;
}
