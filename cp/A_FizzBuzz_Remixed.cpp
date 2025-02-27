#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;
        long long blk = n/15;
        long long rem = n%15;
        long long extra = min(rem + 1, 3LL);
        long long ans = blk * 3 + extra;
        cout << ans << endl;
    }
    return 0;
}
