#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> base = {2, 3, 5, 7, 11};
    int n = base.size();
    vector<vector<ll>> rows;
    rows.push_back(base);

    for(int i = 1; i < n; i++){
        const auto &below = rows[i-1];
        vector<ll> current;
        for(int i = 0; i+1 < below.size(); i++){
            current.push_back(below[i] + below[i+1]);
        }
        rows.push_back(current);
    }

    ll answer = rows[3][2 - 1];

    cout << answer << endl;
    return 0;
}
