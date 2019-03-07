#include <bits/stdc++.h>

using namespace std;
vector<int> mios,suyos;
int mio,suyo,N,i;
unsigned long long int suma;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    mios.resize(N+3);
    suyos.resize(N+3);
    for(i=0;i<N;i++){
        cin >> mios[i];
    }
    for(i=0;i<N;i++){
        cin >> suyos[i];
    }
    sort(mios.begin(),mios.begin()+N);
    sort(suyos.begin(),suyos.begin()+N);
    mio = suyo = N-1;
    while(suyo>=0 && mio>=0){
        if(mios[mio] <= suyos[suyo]){
            suyo--;
        } else {
            suyo--;
            suma+= mios[mio];
            mio--;
        }
    }
    cout << suma << '\n';
    return 0;
}