// Suppose you have n integers labeled 1 through n. A permutation of those n integers perm (1-indexed) is considered a beautiful arrangement if for every i (1 <= i <= n), either of the following is true:

// perm[i] is divisible by i.
// i is divisible by perm[i].
// Given an integer n, return the number of the beautiful arrangements that you can construct.

#include <bits/stdc++.h>
using namespace std;

void perm(vector<int>& nums, int start, int& cnt) {
    if (start == nums.size()) {
        cnt++;
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);
        if ((nums[start] % (start + 1)) == 0 || ((start + 1) % nums[start]) == 0) {
            perm(nums, start + 1, cnt);
        }
        swap(nums[start], nums[i]);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 1; i <= n; i++){
        arr.push_back(i);
    }
    int cnt = 0;
    perm(arr, 0, cnt);
    cout << cnt << endl;
    return 0;
}