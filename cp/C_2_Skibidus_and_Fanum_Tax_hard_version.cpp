#include <bits/stdc++.h>
using namespace std;

bool solve(vector<long long>& a, vector<long long>& b) {
    long long n = a.size();
    if (n == 0) return true;
    
    sort(b.begin(), b.end());
    
    long long orig1 = a[0];
    long long flip1 = b[0] - a[0];
    long long prev = min(orig1, flip1);
    
    for (long long i = 1; i < n; i++) {

        long long curra = a[i];
        bool b1 = (curra >= prev);

        int ptr = 0;
        long long flip = 0;
        int target = prev + a[i];
        auto it = lower_bound(b.begin(), b.end(), target);

        if (it != b.end()){
            ptr = distance(b.begin(), it);
            flip = b[ptr] - a[i];
        } else {
            flip = prev - 1;
        }

        bool b2 = (flip >= prev);

        if (!b1 && !b2){
            return false;
        }

        if (b1 && b2){
            prev = min(curra, flip);
        } else if (b1){
            prev = curra;
        } else {
            prev = flip;
        }
    }
    
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> b(m);
        for (long long i = 0; i < m; i++) {
            cin >> b[i];
        }

        cout << (solve(a, b) ? "YES" : "NO") << "\n";
    }

    return 0;
}
