// problem statment: Given a binary array, find the maximum number of consecutive 1s in this array.
// https://leetcode.com/problems/max-consecutive-ones/description/
// Example 1:
// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int cnt = 0, maxCnt = 0;;
    for(int i = 0;i<n;i++){
        if(arr[i] == 1){
            cnt++;
            maxCnt = max(maxCnt, cnt);
        } else {
            cnt = 0;
        }
    }
    cout << maxCnt << endl;
    return 0;
}