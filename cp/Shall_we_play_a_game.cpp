#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long modex(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while(exp > 0) {
        if(exp & 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long ans = 0;
        if(n % 2 == 1){
            ans = modex(2, n-1, MOD);
        } else {
            ans = (3*modex(2, n-2, MOD))%MOD;
        }
        cout << ans << endl;
    }
    return 0;
}
