#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Edge {
    int u, v;
    ll w;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        vector<Edge> E(m);
        for(int i = 0; i < m; i++){
            cin >> E[i].u >> E[i].v >> E[i].w;
        }
        // 1) sort edges by weight
        sort(E.begin(), E.end(),
             [](auto &A, auto &B){ return A.w < B.w; });

        ll ans = LLONG_MAX;
        int R = 0;

        // adjacency list once (we'll just skip edges outside [L..R])
        vector<vector<int>> adj(n+1);
        for(int i = 0; i < m; i++){
            adj[E[i].u].push_back(i);
            adj[E[i].v].push_back(i);
        }

        // helper to check connectivity via BFS using only edges in [L..R]
        auto can_connect = [&](int L){
            vector<char> vis(n+1, 0);
            queue<int> q;
            vis[1] = 1;
            q.push(1);
            while(!q.empty()){
                int u = q.front(); q.pop();
                if(u == n) return true;
                for(int ei : adj[u]){
                    if(ei < L || ei > R) continue;
                    int v = E[ei].u ^ E[ei].v ^ u;  // the other endpoint
                    if(!vis[v]){
                        vis[v] = 1;
                        q.push(v);
                    }
                }
            }
            return false;
        };

        // 2) two‐pointer over sorted edges
        for(int L = 0; L < m; L++){
            // make sure R >= L
            R = max(R, L);

            // grow R until 1--n becomes connected or we run out
            while(R < m && !can_connect(L)){
                R++;
            }
            // if connected under [L..R], record answer
            if(R < m && can_connect(L)){
                ans = min(ans, E[L].w + E[R].w);
            } else {
                // no point increasing L further if R==m
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
