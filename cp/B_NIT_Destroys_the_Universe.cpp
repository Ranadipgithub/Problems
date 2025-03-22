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

        int x = -1;
        for(int i = 0;i<n;i++){
            if(arr[i] != 0){
                x = i;
                break;
            }
        }
        if(x == -1){
            cout << 0 << "\n";
            continue;
        }

        int y = -1;
        for(int i = n-1;i>=0;i--){
            if(arr[i] != 0){
                y = i;
                break;
            }
        }

        bool fg = true;

        for(int i = x; i<=y; i++){
            if(arr[i] == 0){
                fg = false;
                break;
            }
        }

        if(fg){
            cout << 1 << "\n";
            continue;
        }
        else{
            cout << 2 << "\n";
            continue;
        }
    }
    return 0;
}
