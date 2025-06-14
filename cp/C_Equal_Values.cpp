#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> curr(n+1, 0), maxi(n+1, 0); 
        for (int i = 0; i < n; i++) {
            int v = a[i];
            if (i == 0 || a[i] != a[i-1]) {
                curr[v] = 1;
            } else {
                curr[v] += 1;
            }
            maxi[v] = max(maxi[v], curr[v]);
        }

        long long ans = LLONG_MAX;
        for (int v = 1; v <= n; v++) {
            if (maxi[v] > 0) {
                long long cost = (long long)(n - maxi[v]) * v;
                ans = min(ans, cost);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
