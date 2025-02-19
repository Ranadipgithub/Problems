#include <bits/stdc++.h>
using namespace std;

vector<int> solve(const vector<int>& arr, int i, int j) {
    if (i == j)
        return { arr[i] };

    vector<int> res;
    for (int k = i; k < j; k++) {
        vector<int> left = solve(arr, i, k);
        vector<int> right = solve(arr, k + 1, j);
        for (int x : left) {
            for (int y : right) {
                res.push_back(max(0, x - y));
                res.push_back(max(0, y - x));
            }
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> result = solve(arr, 0, n - 1);
        int ans = 0;
        for (int x : result) {
            ans = max(ans, x);
        }
        cout << ans << endl;
    }

    return 0;
}
