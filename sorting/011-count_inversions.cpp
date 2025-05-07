#include<bits/stdc++.h>
using namespace std;

int merge(vector<int>& arr, int low, int mid, int high) {
    int i = low, j = mid + 1;
    vector<int> a;
    int cnt = 0;
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            a.push_back(arr[i]);
            i++;
        } else {
            a.push_back(arr[j]);
            cnt += mid-i+1;
            j++;
        }
    }
    while (i <= mid) {
        a.push_back(arr[i]);
        i++;
    }
    while (j <= high) {
        a.push_back(arr[j]);
        j++;
    }
    for (int k = low; k <= high; k++) {
        arr[k] = a[k - low];
    }
    return cnt;
}

int mergeSort(vector<int>& arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = low + (high - low) / 2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int low = 0, high = n-1;
    int ans = mergeSort(arr, low, high);
    cout << ans << endl;
    return 0;
}