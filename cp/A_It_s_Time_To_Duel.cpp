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
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool fg1 = true;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                fg1 = false;
                break;
            }
        }
        if(fg1){
            cout << "YES" << endl;
            continue;
        }
        if(n == 2 && arr[0] == arr[1]){
            cout << "YES" << endl;
            continue;
        }
        bool fg = false;

        if(n > 2){
            for(int i = 0; i < n - 1; i++){
                if(arr[i] == 0 && arr[i + 1] == 0){
                    fg = true;
                    break;
                }
            }
        }

        if(fg){
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}