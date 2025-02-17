#include <bits/stdc++.h>
using namespace std;

int solve(int L, vector<int>& a) {
    queue<pair<int, int>> q;  
    unordered_set<int> visited; 

    q.push({0, 0}); 
    visited.insert(0);

    while (!q.empty()) {
        int sum = q.front().first;
        int cnt = q.front().second;
        q.pop();

        for (int el : a) {
            int newSum = sum + el;
            
            if (newSum == L) return cnt + 1; 
            
            if (newSum < L && visited.find(newSum) == visited.end()) {
                q.push({newSum, cnt + 1});
                visited.insert(newSum);
            }
        }
    }
    return -1;  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int L, N;
        cin >> L >> N;

        vector<int> a(N);
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }

        cout << solve(L, a) << endl;
    }

    return 0;
}












// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--){
//         int l, n;
//         cin >> l >> n;
//         vector<int> a(n);
//         for(int i = 0; i < n; i++){
//             cin >> a[i];
//         }
//         sort(a.begin(), a.end());
//         unordered_map<int, int> mpp;
//         for(int i = 0;i<n;i++){
//             mpp[a[i]]++;
//         }
//         bool found = false;
//         for(int i = n-1;i>=0;i--){
//             int rem = l%a[i];
//             if(rem == 0){
//                 cout << l/a[i] << endl;
//                 found = true;
//                 break;
//             }
//             if(mpp.find(rem) != mpp.end()){
//                 int ans = l/a[i] + 1;
//                 cout << ans << endl;
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             cout << -1 << endl;    
//         }
//     return 0;
//     }
// }

