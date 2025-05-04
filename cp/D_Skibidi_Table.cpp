#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(a[i] == 0){
                cnt++;
            }
        }
        if(cnt == n){
            cout << 1 << endl; 
            continue;
        } 
        if(n == k && n-cnt > 0){
            cout << 0 << endl; 
            continue;
        }

        int ans = 1;
        int maxi = *max_element(a.begin(), a.end());
        
    }
    return 0;
}