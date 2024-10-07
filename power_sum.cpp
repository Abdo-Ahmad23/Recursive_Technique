#include <bits/stdc++.h>
using namespace std;
int target, p,cnt;
vector<int>a,ans;
void rec(long long i , long long sum ){
    if(i == a.size()){
        return;
    }
    if(sum == target)
        cnt++;
    if(sum + pow(a[i] , i) <= target)
        rec(i + 1, sum + pow(a[i] , i));
    
    rec(i + 1, sum);
        

}

int main(){
    a.resize(50);
    for(int i=0;i<50;i++)
        a[i] = i + 1;
    
    scanf("%d %d", &target,&p);
    cnt = 0;
    rec(0,0);
    printf("%d",cnt);
    
    return 0;
}