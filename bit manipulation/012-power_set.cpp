#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, vector<vector<int>> &v, int n){
    int subsets = 1 << n;
    for(int i = 0;i<subsets; i++){
        vector<int> temp;
        for(int j = 0;j<n;j++){
            if(i & (1 << j)) temp.push_back(arr[j]);
        }
        v.push_back(temp);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<vector<int>> v;
    solve(arr, v, n);
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}