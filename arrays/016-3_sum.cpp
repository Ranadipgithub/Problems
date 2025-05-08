// Problem Statement: Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

//Notice that the solution set must not contain duplicate triplets.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> three_sum(vector<int> arr, int n){
    set<vector<int>> st;
    for(int i = 0;i<n;i++){
        set<int> hashset;
        for(int j = i+1;j<n;j++){
            int third = -(arr[i] + arr[j]);
            if(hashset.find(third) != hashset.end()){
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

vector<vector<int>> three_sum1(vector<int> arr, int n){
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i = 0;i<n;i++){
        int j = i+1, k = n-1;
        while(j<k){
            int sum = arr[i]+ arr[j]+ arr[k];
            if(sum < 0){
                j++;
            } else if(sum > 0){
                k--;
            } else{
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++, k--;
                while(arr[j] == arr[j-1] && j<k) j++;
                while(arr[k] == arr[k+1] && j<k) k--;
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    vector<vector<int>> ans = three_sum1(arr, n);
    for(auto it: ans){
        cout << "[";
        for(auto i: it){
            cout << i << " ";
        }
        cout << "]";
    }
    cout << endl;
    return 0;
}