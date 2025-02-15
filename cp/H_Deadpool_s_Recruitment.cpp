#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, double> &a, const pair<int, double> &b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return a.first < b.first; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;

    vector<pair<int, double>> p;

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        double op1 = (a * t1) * (100 - k) / 100.0 + b * t2;
        double op2 = (b * t1) * (100 - k) / 100.0 + a * t2;

        double hmax = max(op1, op2);

        p.push_back({i + 1, hmax});
    }

    sort(p.begin(), p.end(), compare);

    for (const auto &p : p) {
        cout << p.first << " " << fixed << setprecision(2) << p.second << endl;
    }

    return 0;
}
