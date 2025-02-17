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
        for(long long i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        vector<long long> pos(n,0);
        vector<long long> neg(n,0);
        long long posSum = 0;
        long long negSum = 0;

        for(long long i = 0;i<n;i++){
            if(arr[i] > 0) posSum += arr[i];
            else negSum -= arr[i];

            pos[i] = posSum;
            neg[i] = negSum;
        }
        long long ans = max(posSum, negSum);
        for(long long i = 0;i<n;i++){
            ans = max(ans, pos[i] + negSum - neg[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
