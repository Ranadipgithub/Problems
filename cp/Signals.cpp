#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll T1, T2, K;
        cin >> T1 >> T2 >> K;

        vector<ll> A(T1);
        for (ll i = 0; i < T1; ++i) {
            cin >> A[i];
        }

        vector<ll> B(T2);
        for (ll i = 0; i < T2; ++i) {
            cin >> B[i];
        }

        ll G = gcd(T1, T2);
        vector<unordered_map<ll, ll>> A_freq(G), B_freq(G);

        for (ll i = 0; i < T1; ++i) {
            ll r = i % G;
            A_freq[r][A[i]]++;
        }

        for (ll j = 0; j < T2; ++j) {
            ll r = j % G;
            B_freq[r][B[j]]++;
        }

        ll total_pairs = 0;
        for (ll r = 0; r < G; ++r) {
            auto& a_map = A_freq[r];
            auto& b_map = B_freq[r];

            for (auto& [val, a_count] : a_map) {
                if (b_map.count(val)) {
                    total_pairs += a_count * b_map[val];
                }
            }
        }

        ll denominator = T2 / G;
        ll M = (K / T1) / denominator;

        ll result = total_pairs * M;
        result = result % (1LL << 32); 

        cout << result << '\n';
    }

    return 0;
}