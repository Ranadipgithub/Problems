#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        if(k < n-1){
            cout << -1 << endl;
            continue;
        }
        long long gcd = k - (n-2);
        vector<long long> arr(n, 1);
        arr[0] = gcd;
        arr[1] = gcd*2;
        for(long long i = 2;i<n;i++){
            arr[i] = 2*gcd + (i-1);
        }
        for(long long i = 0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}