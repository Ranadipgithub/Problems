// problem statement: Given an array of integers and an integer k, find the number of contiguous subarrays whose sum is equal to k.
// https://leetcode.com/problems/subarray-sum-equals-k/description/
// Example 1:
// Input: nums = [1,1,1], k = 2
// Output: 2
// Explanation: Because subarrays [1,1] and [1,1] meet the requirement (the subarray with index 0 will not be counted twice).

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr, int n, int k) {
    int cnt = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum == k) {
            cnt++;
            sum = 0;
        }
    }
    return cnt;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << solve(arr, n, k) << endl;
    return 0;
}