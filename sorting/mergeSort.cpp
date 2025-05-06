#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    int i = low, j = mid + 1;
    vector<int> a;
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            a.push_back(arr[i]);
            i++;
        } else {
            a.push_back(arr[j]);
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
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
