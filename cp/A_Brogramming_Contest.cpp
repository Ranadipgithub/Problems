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
        int count = 0;
        for(int i = 0;i<n-1;i++){
            if(s[i+1] != s[i]){
                count++;
            }
        }
        int ans = s[0] == '1'? 1+count: count;
        cout << ans << endl;
    }
    return 0;
}