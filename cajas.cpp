#include <iostream>

using namespace std;

int cajas[1000001];

int main()
{
    int numCajas = 0;
    int entrada = 0;
    int mayor = 0;
    int contador = 0;

    cin >> numCajas;

    for(int i = 0; i < numCajas; i++){
        cin >> entrada;
        cajas[entrada] += 1;
        if(mayor < entrada){
            mayor = entrada;
        }
    }


    for(int i = 1; i<=mayor; i++){
        if(cajas[i] == 0){
            contador++;
        }
    }

    cout << (mayor-contador) << endl;
}
