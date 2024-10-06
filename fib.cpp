#include <bits/stdc++.h>
using namespace std;
long long fib(int n, long long res=0){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
    
}
int main(){
    /*
    1 1
    2 1
    3 2
    */
    int n;
    cin>>n;
    cout<<fib(n);
    

    return 0;
}