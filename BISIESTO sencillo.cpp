#include <bits/stdc++.h>

using namespace std;
long long int N,i;
char chairo;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    while(cin >> N){
    
    
    if((N%4==0 && N%100!=0) || (N%100 == 0 && N%400 == 0)) {
        cout << 'S' << '\n';
    } else {
        cout << 'N' << '\n';
    }
    }
    

    return 0;
}
