#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        string s1 = s;
        reverse(s1.begin(), s1.end());

        bool fg = true;
        for (int i = 1; i < n; i++) {  
            if (s[i] != s[i - 1]) {
                fg = false;
                break;
            }
        }

        if (fg) {
            cout << "NO" << endl;
            continue;
        } else if(!fg && k != 0){
            cout << "YES" << endl;
            continue;
        } else if(!fg && k == 0){
            int i = 0;
            bool flag = false;
            while (i < n && s[i] == s1[i]) {
                i++;
            }
            if (i < n) { 
                flag = (s[i] < s1[i]);
            }
            cout << (flag ? "YES" : "NO") << endl;
            continue;
        } 
    }
    return 0;
}
