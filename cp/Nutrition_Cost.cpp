#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<int> arr(n), brr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            cin >> brr[i];
        }
        vector<int> temp(n, 1e9);
        for(int i = 0;i<n;i++){
            if(brr[i] < temp[arr[i]]){
                temp[arr[i]] = brr[i];
            }
        }
        int ans = 0;
        for(int i = 1;i<=n;i++){
            if(c- temp[i] > 0) ans += (c-temp[i]);
        }
        cout << ans << endl;
    }
    return 0;
}