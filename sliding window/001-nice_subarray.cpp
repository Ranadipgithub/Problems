// Problem link: https://leetcode.com/problems/longest-nice-subarray/description/?envType=daily-question&envId=2025-03-18
// You are given an array nums consisting of positive integers.
//We call a subarray of nums nice if the bitwise AND of every pair of elements that are in different positions in the subarray is equal to 0.
//Return the length of the longest nice subarray.

// Brute Force Approach
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int len = 0, maxLen = 0;
//     for(int i = 0;i<n;i++){
//         int mask = 0;
//         for(int j = i;j<n;j++){
//             if(mask & arr[j] != 0){
//                 break;
//             }
//             mask |= arr[j];
//             maxLen = max(maxLen, j-i+1);
//         }
//     }
//     cout << maxLen << endl;
//     return 0;
// }

// Subarray having sum = k, subarray having sum divisible by k in these types of questions we can use sliding window approach

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int mask = 0, maxLen = 0;;
    int i = 0, j = 0;
    while(i<n && j < n){
        while((mask & arr[j]) != 0){
            mask ^= arr[i]; // to remove an element from mask/ to shrink the window we can use xor operation with that element
            i++;
        }
        mask |= arr[j];
        maxLen = max(maxLen, j-i+1);
        j++;
    }
    cout << maxLen << endl;
    return 0;
}

// learnings:-
// 1. To check all possible pairs having and equal to 0 we can use bitmasks 
// -> Use a bitmask variable to track the OR of the elements in the current subarray.
// -> As you expand right, check if (bitmask & nums[right]) == 0. If true, add nums[right] to the bitmask.
// -> If false, shrink the window by moving left forward and removing nums[left] from the bitmask until the condition is restored.
// 2. to remove an element from mask/ to shrink the window we can use xor operation with that element.