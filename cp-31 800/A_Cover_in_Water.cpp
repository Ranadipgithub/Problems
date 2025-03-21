#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '.') count++;
        }
        int maxCount = 0, currentCount = 0;

        for (char c : s) {
            if (c == '.') {
                currentCount++;
                maxCount = max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }
        
        if(maxCount >= 3) cout << 2 << endl;
        else cout << count << endl;
    }
    return 0;
}





// int n, k;
//         cin >> n >> k;
//         vector<int> a(n);
//         for(int i = 0;i<n;i++){
//             cin >> a[i];
//         }
//         int ans = 0;
//         if(n == k){
//             for(int i = 1; i<n ;i++){
//                 if(a[2*i - 1] != i){
//                     ans = i;
//                 } else{
//                     ans = i+1;
//                 }
//             }
//         }
//         else{
//             for(int i = 1;i<n-k+1; i++){
//                 if(a[i] != 1) ans = 1;
//                 else ans = 2;
//             }
//         }
//         cout << ans << endl;