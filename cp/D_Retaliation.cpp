#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t; 
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n+1);
        for(long long i = 1; i <= n; i++){
            cin >> a[i];
        }
        long long num = 2 * a[1] - a[2];
        long long den = n + 1;
        if(num < 0 || num % den != 0){
            cout << "NO" << endl;
            continue;
        }
        long long y = num / den;
        long long x = a[1] - n * y;
        if(x < 0){
            cout << "NO" << endl;
            continue;
        }
        bool fg = true;
        for(long long i = 1;i<=n;i++){
            if(i * x + (n - i + 1) * y != a[i]){
                fg = false;
                break;
            }
        }
        if(!fg){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
    return 0;
}
