#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(long long i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        long long ans = 1;
        long long mod = 998244353;
        for(long long i = 0;i<n;i++){
            if(arr[i] - i < 0){
                ans = 0;
                break;
            }
            ans = (ans * (arr[i] - i)) % mod;
        }
        cout << ans << endl;
    }
    return 0;
}