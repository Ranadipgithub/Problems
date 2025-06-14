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
        unordered_map<long long, long long> freq;
        for(long long i = 0; i < n; i++){
            freq[arr[i]]++;
        }
        sort(arr.begin(), arr.end());
        long long cnt = n;
        for(long long i = 0; i < n; i++){
            long long temp = arr[i];
            long long rem = n-(i+1);
            cnt = min(cnt, temp+ rem);
        }
        cout << cnt << endl;
    }
    return 0;
}