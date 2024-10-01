#include <bits/stdc++.h>
using namespace std;
int n,q,l,r;
vector<int>a;
void bs(int target,int mid){
    if(l>r)
    {
        cout<<-1<<endl;
        return;
    }
    
    if(a[mid]==target){
        cout<<mid+1<<endl;
        return;
    }  
    else if(a[mid]>target)
        r=mid-1;
    else
        l=mid+1;
    bs(target,(l+r)>>1);
}
int main(){
    scanf("%d",&n);
    a.resize(n);
    for(auto &it:a)
        scanf("%d",&it);;
    
    scanf("%d",&q);
    int x;
    while(q--)
    {
        scanf("%d",&x);
        l=0,r=a.size();
        bs(x,0);
    }
    return 0;
}