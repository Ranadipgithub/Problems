#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr, int n){
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if(it.second == 1){
            return it.first;
        }
    }
    return -1;
}

int solve2(vector<int> arr, int n){
    int ans = 0;
    for(int bitIdx = 0; bitIdx < 32; bitIdx++){
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] & (1 << bitIdx)){
                cnt++;
            }
        }
        if(cnt % 3 != 0){
            ans = ans | (1 << bitIdx);
        }
    }
    return ans;
}

int solve3(vector<int> arr, int n){
    sort(arr.begin(), arr.end());
    for(int i = 1;i<n; i+=3){
        if(arr[i] != arr[i-1]) return arr[i-1];
    }
    return arr[n-1];
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = solve3(arr, n);
    cout << ans << endl;
    return 0;
}