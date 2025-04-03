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
        if(n == 1){
            cout << arr[0] << endl;
            continue;
        }
        long long maxi = LLONG_MIN;
        long long idx = -1;
        for(long long i = 0;i<n;i++){
            long long x;
            if(i%2 == 0){
                x = (n-1)/2;
            } else{
                x = (n-3)/2;
            }

            if(arr[i] + x > maxi){
                maxi = arr[i]+x;
                idx = i;
            }
        }
        // long long ans1 = maxi + (idx/2);
        // long long ans2 = ans1+(n-idx-1)/2;
        // cout << maxi + (n-1)/2 << endl;
        cout << maxi << endl;
    }
    return 0;
}