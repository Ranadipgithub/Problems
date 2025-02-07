#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;  

    while (T--) {
        string s1, s2;
        cin >> s1 >> s2; 

        int n = s1.size();
        int m = s2.size();

        int ptr = m - 1;
        int ans = 0;
        int rm = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (ptr >= 0 && s1[i] == s2[ptr]) {
                ptr--; 
            } else {
                ans += (i + 1 - rm); 
                rm++;
            }
        }

        if (ptr >= 0) {
            cout << -1 << endl; 
        } else {
            cout << ans << endl;
        }
    }

    return 0;
}
