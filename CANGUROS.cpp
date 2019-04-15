#include <bits/stdc++.h>

using namespace std;
int comida,N,i,canguritos,formados;
char izard;
queue<int> cola;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> comida >> N;
    for(i=0;i<N;i++){
        cin >> izard;
        if(izard == 'N'){
            cin >> canguritos;
            cola.push(canguritos);
            formados++;
        } else if(izard == 'A'){
            canguritos = cola.front(); cola.pop();
            comida= comida- canguritos -1;
            formados--;
        } else if(izard== 'C'){
            cout << formados << '\n';
        } else {
            cout << comida << '\n';
        }
    }
    return 0;
}