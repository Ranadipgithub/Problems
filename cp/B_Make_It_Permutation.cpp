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
        vector<pair<int, pair<int, int>>> vec;

        vec.push_back({1, {2, n}});
        for(int i = 2; i <= n-1; i++){
            vec.push_back({i, {1, i}});
            vec.push_back({i, {i+1, n}});
        }
        vec.push_back({n, {1, n}});

        cout << (2*n - 2) << endl;
        for(auto& it : vec){
            cout << it.first << " " << it.second.first << " " << it.second.second << endl;
        }
    }
    return 0;
}
