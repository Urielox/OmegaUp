#include <bits/stdc++.h>

using namespace std;
long long int num,c;
int main()
{
    cin >> num;
    if(num%2 == 0){
        num /=2;
        c++;
    } else {
        num+=1;
        c++;
    }
    if(num >= 100){
        num/=100;
        c++;
    } else if(num >= 10){
        num /=10;
        c++;
    }
    if(num %3 == 0){
        num -= 1;
        c++;
    }

    cout << num << " " << c;
    return 0;
}