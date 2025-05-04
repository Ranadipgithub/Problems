#include<bits/stdc++.h>
using namespace std;

long long minSum2(long long x){
    if(x == 0) return 2;
    if((x & (x-1)) != 0){
        return x;
    } else{
        return x+2;
    }
}

long long minSum3(long long x){
    if(x == 0) return 0;
    long long pc = __builtin_popcount(x);
    if(pc >=3) return x;
    else return x+2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n, x;
        cin >> n >> x;
        if(n==1 && x==0){
            cout << -1 << endl;
            continue;
        }
        
        if(x==0){
            if(n%2==0){
                cout << n << endl;
            } else {
                cout << (n+3) << endl;
            }
            continue;
        }
        if(x == 1){
            cout << 5 << endl;
            continue;
        }
        long long ans = 0;
        if(n%2 == 1){
            if(n >= 3){
                ans = (n-3) + minSum3(x);
            } else {
                ans = (n-1) + x;
            }
        } else{
            ans = (n-2) + minSum2(x);
        }
        cout << ans << endl;
    }
    return 0;
}