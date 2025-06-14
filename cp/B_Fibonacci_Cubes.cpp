#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<int> fib(n+1);
        fib[1] = 1;
        fib[2] = 2;
        for(int i = 3; i <= n; i++){
            fib[i] = fib[i-1] + fib[i-2];
        }

        string ans;

        for(int i = 0; i < m; i++){
            int w, l, h;
            cin >> w >> l >> h;
            if(w < fib[n] || l < fib[n] || h < fib[n]){
                ans += '0';
            } else {
                if((w >= fib[n] + fib[n-1]) || (l >= fib[n] + fib[n-1]) || (h >= fib[n] + fib[n-1]) ){
                    ans += '1';
                } else {
                    ans += '0';
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
