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
        bool fg = true;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                bool left = i > 0 && s[i-1] == '1';
                bool right = i < n-1 && s[i+1] == '1';
                if(!left && !right){
                    fg = false;
                    break;
                }
            }
        }
        for(int i = 1;i<n; i++){
            if(s[i-1] == '0' && s[i] == '1' && s[i+1] == '0'){
                fg = false;
                break;
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}