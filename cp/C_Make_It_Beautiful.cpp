#include <bits/stdc++.h>
using namespace std;

long long solve(long long val, long long& next) {
    if (val == -1 || val == LLONG_MAX) return -1;
    int pos = __builtin_ctzll(~val);
    if (pos > 62) return -1;
    next = val | (1LL << pos);
    return next - val;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        long long curr = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            curr += __builtin_popcountll(a[i]);
        }
        
        vector<long long> costs;
        for(int i = 0; i < n; i++){
            long long cur = a[i];
            for(int b = 0; b < 63; ++b) {
                long long next;
                long long cost = solve(cur, next);
                if (cost == -1 || cost <= 0) break; 
                costs.push_back(cost);
                cur = next; 
            }
        }
        sort(costs.begin(), costs.end());
        for(long long cost : costs){
            if(k >= cost){
                k -= cost;
                curr++;
            } else {
                break;
            }
        }
        cout << curr << endl;
    }
    return 0;
}