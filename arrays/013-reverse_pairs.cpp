// problem statement: Given an array of integers, find the number of reverse pairs in the array. A reverse pair is defined as (i, j) such that i < j and arr[i] > 2 * arr[j].
// https://leetcode.com/problems/reverse-pairs/description/

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    int i = low, j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= high) temp.push_back(arr[j++]);

    for (int k = low; k <= high; k++) {
        arr[k] = temp[k - low];
    }
}

int countPairs(vector<int>& arr, int low, int mid, int high) {
    int cnt = 0;
    int j = mid + 1;
    for (int i = low; i <= mid; i++) {
        while (j <= high && (long long)arr[i] > 2LL * arr[j]) {
            j++;
        }
        cnt += (j - (mid + 1));
    }
    return cnt;
}

int mergeSort(vector<int>& arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = low + (high - low) / 2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += countPairs(arr, low, mid, high);
    merge(arr, low, mid, high);
    return cnt;
}
 
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = mergeSort(arr, 0, n - 1);
    cout << ans << endl;
    return 0;
}
