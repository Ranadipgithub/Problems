#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    int i = 0, j = 0, k = left;
    long long cnt = 0;
    
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
            cnt += (n1 - i);
        }
    }
    
    while(i < n1) {
        arr[k++] = L[i++];
    }
    while(j < n2) {
        arr[k++] = R[j++];
    }
    
    return cnt;
}

long long solve(vector<int>& arr, int left, int right) {
    long long cnt = 0;
    if(left < right) {
        int mid = left + (right - left) / 2;
        cnt += solve(arr, left, mid);
        cnt += solve(arr, mid + 1, right);
        cnt += merge(arr, left, mid, right);
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        long long cnt = solve(arr, 0, n - 1);
        cout << cnt << endl;
    }
    return 0;
}