#include <bits/stdc++.h>
using namespace std;
int cnt;
void rec(int n){
    if(n==1)
        return;
    // cout<<n<<' ';
    cnt++;
    if(n%2)
        return rec(3*n+1);
    else
        return rec(n/2);
}
int main(){
    int n;
    cin>>n;
    cnt=0;
    rec(n);
    cout<<cnt+1<<endl;

    return 0;
}