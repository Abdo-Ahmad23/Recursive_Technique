#include <bits/stdc++.h>
using namespace std;



void rec(int n,int sum1,int sum2,int cnt =0 ,string res=""){
    
    if(res.size() == 2*n){
        if(sum1 == sum2){
            cout << res << endl;
            
        }
            
    }

    if(sum1 > sum2)
        rec(n,sum1,sum2 + 1,cnt + 1, res + "1");
    else
        rec(n,sum1 + 1,sum2 ,cnt + 1 ,res + "0");

}


int main(){
    int n;
    cin >> n;
    rec(n,0,0);

    return 0;
}