#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans = 0;
        unordered_set<int> st;
        int l = 0;

        while(l < n){
            int r = l;
            if (!st.empty()) {
                int m = st.size();
                unordered_set<int> visited;
                while(r < n && m > 0){
                    if (st.count(a[r]) && !visited.count(a[r])) {
                        visited.insert(a[r]);
                        m--;
                    }
                    r++;
                }
                if (m > 0) break;  
                r--;              
            }
            ans++;
            st.clear();
            for(int i = l; i <= r; i++){
                st.insert(a[i]);
            }
            l = r+1;
        }
        cout << ans << endl;
    }
    return 0;
}
