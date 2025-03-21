#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int minDiff = abs(a[0]);  
        for (int i = 1; i < n; i++) {  
            minDiff = min(minDiff, abs(a[i]));
        }

        cout << minDiff << endl;
        return 0;
    }
