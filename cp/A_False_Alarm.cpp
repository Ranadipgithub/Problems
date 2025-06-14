#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int idx = -1;
        for(int i = 0;i<n;i++){
            if(arr[i] == 1){
                idx = i;
                break;
            }
        }
        for(int i = idx; i< idx+x;i++){
            if(arr[i] == 1) arr[i] = 0;
        }
        bool fg = true;
        for(int i = 0;i<n;i++){
            if(arr[i] == 1) fg = false;
        }
        if(fg){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    return 0;
}