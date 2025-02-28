#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int f1(ll x, int n, const vector<int> &b, int total, unordered_map<ll, int> &memo) {
    if(x <= n) return b[(int)x];
    if(memo.find(x) != memo.end()) return memo[x];
    if(x % 2 == 1) return memo[x] = total;
    return memo[x] = total ^ f1(x/2, n, b, total, memo);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        ll l, r; 
        cin >> n >> l >> r;
        
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        
        vector<int> b(n+1, 0);
        b[0] = 0;
        for(int i = 1; i <= n; i++){
            b[i] = b[i-1] ^ a[i];
        }
        
        int total = b[n];
        int ans;
        
        if(l <= n) {
            ans = a[l];
        } else {
            unordered_map<ll, int> memo;
            ans = f1(l/2, n, b, total, memo);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
