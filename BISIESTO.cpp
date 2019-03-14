#include <bits/stdc++.h>

using namespace std;
long long int N,M,i;
char chairo;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> M;
    for(i=0;i<M;i++){
        cin >> N;
    if((N%4==0 && N%100!=0) || (N%100 == 0 && N%400 == 0)) {
        cout << 'S' << '\n';
    } else {
        cout << 'N' << '\n';
    }
    }
    

    return 0;
}