#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i = n-2;i>=0 && k > 0; i--){
            if(s[i] == '0' && s[i+1] == '1'){
                s[i] = '1';
                k--;
            }
        }
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '1'){
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}