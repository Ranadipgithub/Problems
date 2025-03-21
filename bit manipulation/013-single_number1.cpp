// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     map<int, int> mpp;
//     for(int i = 0; i < n; i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it: mpp){
//         if(it.second == 1){
//             cout << it.first << endl;
//             break;
//         }
//     }
//     return 0;
// }

// Optimal Approach

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i = 0;i<n;i++){
        ans = ans ^ arr[i];
    }
    cout << ans << endl;
    return 0;
}