#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    long long x = *min_element(a.begin(), a.end());
    int cnt = count(a.begin(), a.end(), x);
    if(cnt >= 2){
        cout << "Yes" << endl;
        return;
    }
    vector<long long> mul;
    
    for(long long i = 0;i<n;i++){
        if(a[i]%x == 0){
            mul.push_back(a[i]);
        }
    }
    if(mul.size() < 2){
        cout << "No" << endl;
        return;
    }
    long long g = 0;
    bool fg = false;
    for(long long num : mul){
        if(num == x && !fg){
            fg = true;
            continue;
        }
        if(g == 0){
            g = num;
        } else{
            g = __gcd(g, num);
        }
    }
    if(g == x){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    };
    return 0;
}