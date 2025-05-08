// Problem Statement: You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// https://leetcode.com/problems/container-with-most-water/description/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr, int n){
    int left = 0, right = n-1;
    int maxArea = 1;
    while(left < right){
        int width = right - left;
        int area = min(arr[right], arr[left])*width;
        maxArea = max(area, maxArea);
        arr[left] < arr[right]? left++:right--;
    }
    return maxArea;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << solve(arr, n) << endl;
    return 0;
}