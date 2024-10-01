#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;


long long fPower(long long base,long long power,long long res=1){

    // base case
    if(power == 0)
        return res % mod;
        
    base %=mod;

    if(power & 1)
        return fPower((base * base) % mod, power >> 1 ,((res % mod) * base) % mod);

    else 
        return fPower((base * base) % mod , power >> 1 , res);

}

int main() {
    
    long long a , b;
    scanf("%lld %lld", &a , &b);
    long long res = fPower(a , b);
    printf("%lld\n", res);
    return 0;
}