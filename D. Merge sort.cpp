#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted arrays
vector<int> merge(vector<int>&left, vector<int>&right) {
    vector<int> sorted_array;
    int i,j;
    i = j = 0;
    // Merging proccess
    while (i < (int)left.size() && j < (int)right.size()) {
        if (left[i] < right[j]) {
            sorted_array.push_back(left[i]);
            ++i;
        } else {
            sorted_array.push_back(right[j]);
            ++j;
        }
    }

    /// remaining from left
    while (i < (int)left.size()) {
        sorted_array.push_back(left[i]);
        ++i;
    }

    /// remainint from right
    while (j < (int)right.size()) {
        sorted_array.push_back(right[j]);
        ++j;
    }

    return sorted_array;
}


vector<int> mergeSort(vector<int>& a) {
    if (a.size() <= 1)
        return a;

    int mid = a.size() >>1;

    vector<int> left(a.begin(), a.begin() + mid);  
    vector<int> right(a.begin() + mid, a.end());    

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    scanf("%d",&n);
    vector<int>a(n);
    for(auto &it:a)
        scanf("%d",&it);
    
    vector<int>ans = mergeSort(a);
    for(auto it:ans)
        printf("%d ",it);





    return 0;
}