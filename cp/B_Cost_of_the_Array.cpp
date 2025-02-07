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
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        int ans = 0;
        if(n == k){
            for (int i = 1; i < (n + 1) / 2+1; i++){
                if(a[2*i - 1] != i){
                    ans = i;
                    break;
                } else{
                    ans = i+1;
                }
            }
        }
        else{
            for(int i = 1;i<=n-k+1; i++){
                if(a[i] != 1) ans = 1;
                else ans = 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
