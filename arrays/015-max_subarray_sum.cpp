// Problem Statement: Given an array of integers, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum. A subarray is a contiguous part of an array.
// https://leetcode.com/problems/maximum-subarray/description/

#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int>&arr, int n){
    int sum = 0, maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        sum += arr[i];
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    if(maxi < 0) return 0;
    else{
        return maxi;
    }
}

vector<int> maxiSum(vector<int>&arr, int n){
    int sum = 0, maxi = INT_MIN;
    int start = 0, end = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
            end = i;
        }
        if(sum < 0){
            sum = 0;
            start = i+1;
        } 
    }
    vector<int> ans;
    ans.push_back(maxi);
    ans.push_back(start);
    ans.push_back(end);
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << maxSum(arr, n) << endl;
    vector<int> ans = maxiSum(arr, n);
    cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    return 0;
}