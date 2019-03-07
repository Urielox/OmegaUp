#include <bits/stdc++.h>

using namespace std;

map <string,int> AMISTADES;
 string actual,actuali;
int cuantos,i,j;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> cuantos;
    vector<vector<int> > relaciones (cuantos,vector<int>(cuantos));

    for(i=0;i<cuantos;i++){
        cin >> actual;
        AMISTADES[actual]=i;
    }
    for(i=0;i<cuantos;i++){
        for(j=0;j<cuantos;j++){
            cin >> relaciones[i][j];
        }
    }
    cin >> cuantos;
    for(i=0;i<cuantos;i++){
        cin >> actual >> actuali;
        cout << relaciones[AMISTADES[actual]][AMISTADES[actuali]] << endl;
    }


    return 0;
}
/// XDDD