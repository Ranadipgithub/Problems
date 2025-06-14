#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans(n);
        if(n == 2){
            cout << "1 2" << endl;
            continue;
        }
        ans[0] = 2;
        ans[1] = 1;
        ans[2] = 3;
        int idx = 3;
        for(int i = 5; i <= n; i += 2){
            ans[idx++] = i;
            if (idx < n) {
                ans[idx++] = i - 1;
            }
        }
        if(idx < n){
            ans[idx++] = n;
        }
        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}