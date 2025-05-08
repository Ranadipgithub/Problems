// Problem statement: Two sum

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&arr, int n, int k){
    map<int, int> mpp;
    for(int i = 0;i<n;i++){
        int num = arr[i];
        int more = k - num;
        if(mpp.find(more) != mpp.end()){
            return {i, mpp[more]};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> ans = twoSum(arr, n, k);
    for(int i = 0;i<2;i++){
        cout << ans[i] << " ";
    }
    return 0;
}