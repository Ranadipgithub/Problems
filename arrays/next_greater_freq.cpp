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

        map<int, int> fq;
        for (int i = 0; i < n; i++) {
            fq[arr[i]]++;
        }

        stack<int> st;
        vector<int> res(n);
        
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && fq[arr[i]] >= fq[st.top()]) {
                st.pop(); 
            }
            res[i] = st.empty() ? -1 : st.top();
            st.push(arr[i]); 
        }

        for (int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
