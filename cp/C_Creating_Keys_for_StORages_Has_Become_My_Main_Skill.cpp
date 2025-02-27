#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n, x;
        cin >> n >> x;
        if(n == 1){
            cout << x << endl;
            continue;
        }
        
        long long m = 0;
        while(m < n && ((m & ~x) == 0)) {
            m++;
        }
        
        vector<long long> ans;
        if(n <= m) {
            long long Or = 0;
            for (long long i = 0; i < n; i++){
                ans.push_back(i);
                Or |= i;
            }
            if(Or != x)
                ans[n-1] = x;
        } else {
            for (long long i = 0; i < m; i++){
                ans.push_back(i);
            }
            bool fg = false;
            for (int i = 0; i< ans.size(); i++){
                if(ans[i] == x) {
                    fg = true;
                    break;
                }
            }
            if(!fg){
                ans.push_back(x);
            }
                
            while(ans.size() < n){
                ans.push_back(0);
            }
        }
        
        for (long long i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
