#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n), b(n);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }
        for(long long i = 0; i < n; i++){
            cin >> b[i];
        }
        long long pivot = -1;
        long long pi = -1;
        for(long long i = 0;i<n;i++){
            if(a[i] == b[0]){
                pivot = a[i];
                pi = i;
                break;
            }
        }
        vector<pair<long long, long long>> p;
        for (long long j = 0; j < n; j++){
            p.push_back({abs(a[j] - pivot), a[j]});
        }
        sort(p.begin(), p.end());
        bool fg = true;
        long long ans = -1;
        for (long long j = 0; j < n; j++){
            if (p[j].second != b[j]){
                fg = false;
                break;
            }
        }
        if (fg){
            cout << pi+1 << endl;
        } else {
            cout << -1 << endl;
        }
        
    }
    return 0;
}