#include <bits/stdc++.h>
using namespace std;

vector<int> rotated(const vector<int>& b) {
    if (b.empty()) return {}; 

    int mini = *min_element(b.begin(), b.end());

    int minIdx = -1;
    for (int i = 0; i < b.size(); ++i) {
        if (b[i] == mini) {
            minIdx = i;
            break;
        }
    }

    vector<int> c;
    for (int i = minIdx; i < b.size(); ++i) {
        c.push_back(b[i]);
    }
    for (int i = 0; i < minIdx; ++i) {
        c.push_back(b[i]);
    }

    return c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        vector<int> b(m);
        for (int i = 0; i < m; ++i)
            cin >> b[i];

        if(m == 1){
            for(int i = 0; i < n; i++){
                if(a[i] > b[0]){
                    a[i] = b[0];
                }
            }
            for(int x : a)
                cout << x << ' ';
            cout << "\n";
            continue;
        }

        int mini = *min_element(b.begin(), b.end());
        vector<int> min_rot = rotated(b);

        int idx = -1;
        for (int i = 0; i <= n - m; i++) {
            vector<int> sub(a.begin() + i, a.begin() + i + m);
            if (min_rot < sub) {
                idx = i;
                break;
            }
        }

        if (idx == -1) {
            for (int x : a)
                cout << x << ' ';
            cout << "\n";
            continue;
        }

        for (int i = idx; i < n - m + 1; i++) {
            a[i] = mini;
        }

        for (int i = n - m + 1; i < n; i++) {
            a[i] = min_rot[i - (n - m)];
        }
        
        for (int x : a)
            cout << x << ' ';
        cout << "\n";
    }
    return 0;
}
