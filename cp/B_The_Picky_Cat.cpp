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
        vector<long long> a(n);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }
        long long cnt = 0;
        for(long long i = 0;i<n;i++){
            if(abs(a[i]) < abs(a[0])){
                cnt++;
            }
        }
        if(cnt <= n/2){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}