#include <bits/stdc++.h>
using namespace std;
int n;
vector<string>chess,tst;
vector<vector<string>>ans;
bool check(int row, int col){
    // Test For Row
    for(int i = row,j = 0;j<tst[0].size();j++)
        if(tst[i][j] == 'Q')
            return false;

    // Test For Col
    for(int i = 0,j = col;i<tst[0].size();i++)
        if(tst[i][j] == 'Q')
            return false;

    // Test From Left Diagnol
    for(int i = row,j = col;i>=0&&j>=0;i--,j--)
        if(tst[i][j] == 'Q')
            return false;
    // Test From Right Diagnol
    for(int i = row,j = col;i < tst.size()&&j>=0;i++,j--)
        if(tst[i][j] == 'Q')
            return false;
    
    return true;
       
}
void solve(int numQ){
    if(numQ == n)
    {
        ans.push_back(tst);
        return;
    }
    for(int i=0;i<n;i++)
        if(check(i,numQ)){
            tst[i][numQ] = 'Q';
            solve(numQ + 1);
            tst[i][numQ] = '.';
        }

}
int main(){
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        string row(n,'.');
        tst.push_back(row);
    }
    solve(0);
    for(int i=0;i<ans.size();i++)
        for(auto it:ans[i])
            cout<< it <<endl;
    

    return 0;
}