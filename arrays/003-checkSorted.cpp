// Problem Statement
// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

//There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 3 positions to begin on the element of value 3: [3,4,5,1,2].

// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            cnt++;
        }
    }
    if(arr[n-1] > arr[0]){
        cnt++;
    }
    if(cnt > 1){
        cout << "false" << endl;
    } else {
        cout << "true" << endl;
    }
    return 0;
}