#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (long long i = 0; i < n; ++i) {
        cin >> b[i];
    }
    vector<pair<long long, long long>> res;
    for(long long i = 0;i<n;i++){
        if(a[i] == b[i]){
            if(n%2 == 0){
                cout << -1 << endl;
                return;
            }
            swap(a[i], a[n/2]);
            swap(b[i], b[n/2]);
            if(i != n/2) res.push_back({i+1, n/2+1});
        }
    }
    
    for(long long i = 0;i<n;i++){
        long long t = b[n-i-1];
        if(a[i] == t){
            continue;
        }
        long long idx = i+1;
        while(idx < n && a[idx] != t){
            idx++;
        }
        if(idx == n){
            cout << -1 << endl;
            return;
        }
        swap(a[i], a[idx]);
        swap(b[i], b[idx]);
        // for(long long i = 0;i<n;i++){
        //     cout << a[i] << " ";
            
        // }
        // cout << endl;
        // for(long long i = 0;i<n;i++){
        //     cout << b[i] << " ";
        // }
        // cout << endl;
        res.push_back({i+1, idx+1});
    }
    
    bool fg = false;
    for(long long i = 0;i<n;i++){
        if(a[i] != b[n-i-1]){
            fg = true;
            break;
        }
    }
    if(fg){
        cout << -1 << endl;
        return;
    }

    cout << res.size() << endl;
    for(auto [i, j] : res){
        cout << i << " " << j << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}



















// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     long long n;
//     cin >> n;
//     vector<long long> a(n), b(n);
//     for (long long i = 0; i < n; ++i) {
//         cin >> a[i];
//     }
//     for (long long i = 0; i < n; ++i) {
//         cin >> b[i];
//     }
//     unordered_map<long long,long long> mp;
//     mp.reserve(n*2);
//     for (long long i = 0; i < n; ++i) mp[a[i]] = i;
//     vector<pair<long long, long long>> res;
//     for(long long i = 0;i<n;i++){
//         if(a[i] == b[i]){
//             if(n%2 == 0){
//                 cout << -1 << endl;
//                 return;
//             }
//             swap(a[i], a[n/2]);
//             swap(b[i], b[n/2]);
//             mp[a[i]] = i; mp[a[n/2]] = n/2;
//             if(i != n/2) res.push_back({i+1, n/2+1});
//         }
//     }
    
//     for(long long i = 0;i<n;i++){
//         long long t = b[n-i-1];
//         if(a[i] == t){
//             continue;
//         }
//         auto it = mp.find(t);
//         if(it == mp.end() || it->second <= i){
//             cout << -1 << endl;
//             return;
//         }
//         long long idx = it->second;
//         swap(a[i], a[idx]);
//         swap(b[i], b[idx]);
//         mp[a[i]] = i; mp[a[idx]] = idx;
//         res.push_back({i+1, idx+1});
//     }
    
//     bool fg = false;
//     for(long long i = 0;i<n;i++){
//         if(a[i] != b[n-i-1]){
//             fg = true;
//             break;
//         }
//     }
//     if(fg){
//         cout << -1 << endl;
//         return;
//     }

//     cout << res.size() << endl;
//     for(auto [i, j] : res){
//         cout << i << " " << j << endl;
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     long long t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
