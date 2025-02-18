#include<bits/stdc++.h>
using namespace std;

int  main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        vector<vector<long long>> a(n, vector<long long>(m));
        long long maxi = 0;
        for (long long i = 0; i < n; i++){
            for (long long j = 0; j < m; j++){
                cin >> a[i][j];
                maxi = max(maxi, a[i][j]);
            }
        }
        
        vector<bool> p(maxi+1, false);
        vector<bool> adj(maxi+1, false);
        
        for (long long i = 0; i < n; i++){
            for (long long j = 0; j < m; j++){
                p[a[i][j]] = true;
            }
        }
        
        for (long long i = 0; i < n; i++){
            for (long long j = 0; j < m; j++){
                long long col = a[i][j];
                if(i+1 < n && a[i+1][j] == col)
                    adj[col] = true;
                if(j+1 < m && a[i][j+1] == col)
                    adj[col] = true;
            }
        }
        
        long long S = 0, best = 0, dist = 0;
        for (long long x = 1; x <= maxi; x++){
            if(p[x]){
                dist++;
                long long cost = (adj[x] ? 2 : 1);
                S += cost;
                best = max(best, cost);
            }
        }
        
        if(dist == 1){
            cout << 0 << endl;
        } else {
            cout << S - best << endl;
        }
    }
    return 0;
}

