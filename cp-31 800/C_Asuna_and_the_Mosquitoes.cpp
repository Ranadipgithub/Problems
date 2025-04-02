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
        for(long long i = 0; i < n; i++) cin >> arr[i];
        long long oc = 0, ec = 0;
        for(long long i = 0;i<n;i++){
            if(arr[i]%2 == 0) ec++;
            else oc++;
        }
        long long maxi = *max_element(arr.begin(), arr.end());
        if(oc==0||ec==0){
            cout << maxi << endl;
            continue;
        }
        long long sum = accumulate(arr.begin(), arr.end(), 0LL);
        cout << max(maxi, sum-(oc-1)) << endl;
    }
    return 0;
}