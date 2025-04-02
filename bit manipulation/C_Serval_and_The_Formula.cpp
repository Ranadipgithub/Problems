#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x == y){
            cout << -1 << endl;
            continue;
        }
        int maxi = max(x, y);
        int pos = 32 - __builtin_clz(maxi);  
        int k = (1 << pos) - maxi;         
        cout << k << endl;
    }
    return 0;
}
