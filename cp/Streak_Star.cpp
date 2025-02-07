#include <bits/stdc++.h>
using namespace std;

int solve(const vector<int>& arr) {
    int maxS = 1;
    int ps = 1;
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] >= arr[i - 1]) {
            ps++;
            maxS = max(maxS, ps);
        } else {
            ps = 1;
        }
    }
    return maxS;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int ps = solve(a);
        int maxS = ps;
        
        for (int i = 0; i < n; ++i) {
            int value = a[i];
            a[i] *= x;
            int newS = solve(a);
            maxS = max(maxS, newS);
            a[i] = value; 
        }
        
        cout << maxS << endl;
    }
    
    return 0;
}
