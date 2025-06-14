#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        vector<ll> a(3, 0);
        long long ans = 0;
        while (true) {
            sort(a.begin(), a.end());
            if (a[0] >= x) break;
            a[0] = min(x, 2*a[1]+1);
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
