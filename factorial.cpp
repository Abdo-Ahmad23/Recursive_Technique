#include <bits/stdc++.h>
using namespace std;
long long factorial(int n){
    if(n==1)
        return n;
    
    return factorial(n-1)*n;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;

    return 0;
}