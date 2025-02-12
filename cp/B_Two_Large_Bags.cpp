#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        set<int> st;
        map<int, int> fq;
        for(int i = 0;i<n;i++){
            st.insert(v[i]);
            fq[v[i]]++;
        }
        while(!st.empty()){
            int min = *st.begin();
            if(fq[min] == 1){
                cout << "NO" << endl;
                return;
            }
            fq[min+1] += fq[min] - 2;
            st.erase(min);
            if(fq[min+1]){
                st.insert(min+1);
            }
            fq[min] = 0;
        }
        cout << "YES" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}