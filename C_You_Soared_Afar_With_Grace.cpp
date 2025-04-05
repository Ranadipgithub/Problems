#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (long long i = 0; i < n; ++i) {
        cin >> b[i];
    }
    
    vector<pair<long long, long long>> res;
    for(long long i = 0;i<n;i++){
        long long t = b[n-i-1];
        if(a[i] == t){
            continue;
        }
        long long idx = i+1;
        while(idx < n && a[idx] != t){
            ++idx;
        }
        if(idx == n){
            cout << -1 << endl;
            return;
        }
        swap(a[i], a[idx]);
        swap(b[i], b[idx]);
        res.push_back({i+1, idx+1});
    }
    
    bool fg = false;
    for(long long i = 0;i<n;i++){
        if(a[i] != b[n-i-1]){
            fg = true;
            break;
        }
    }
    if(fg){
        cout << -1 << endl;
        return;
    }

    cout << res.size() << endl;
    for(auto [i, j] : res){
        cout << i << " " << j << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}