#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &v, int index, int k, int &ans){
    if(v.size() == 1){
        ans = v[0];
        return v[0];
    }
    index = (index + k) % v.size();
    v.erase(v.begin() + index);
    return solve(v, index, k, ans);
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    vector<int> v;
    for(int i=1; i<=n; i++){
        v.push_back(i);
    }
    int index = 0;
    int ans = -1;
    k = k-1;
    int fans = solve(v, index, k, ans);
    cout << ans << endl;
}