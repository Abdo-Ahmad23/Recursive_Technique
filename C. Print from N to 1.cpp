#include <bits/stdc++.h>
using namespace std;
vector<int>ans;
void rec(int n){
    if(n<=0)
        return;
    ans.push_back(n%10);
    return rec(n/10);
}
int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(auto &it:a)
        cin>>it;
    for(auto it:a){
        ans.clear();
        rec(it);
        for(auto itt:ans)
            cout<<itt<<' ';
        cout<<endl;
    }
    

    return 0;
}