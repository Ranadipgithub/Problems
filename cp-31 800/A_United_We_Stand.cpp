#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool fg = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) {
                fg = false;
                break;
            }
        }

        if (fg) {
            cout << -1 << endl;
            continue;
        }

        sort(arr.begin(), arr.end());

        vector<int> b, c;
        int sm = arr[0];

        int i = 0;
        while (i < n && arr[i] == sm) {
            b.push_back(arr[i]);
            i++;
        }

        while (i < n) {
            c.push_back(arr[i]);
            i++;
        }

        cout << b.size() << " " << c.size() << endl;
        for (int num : b) cout << num << " ";
        cout << endl;
        for (int num : c) cout << num << " ";
        cout << endl;
    }

    return 0;
}
