#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, k;
        string s;
        cin >> n >> x >> k >> s;

        long long pos = x;
        long long t0 = 0;
        bool hit = false;
        for(int i = 0;i<n;i++){
            if(t0 >=  k) break;
            t0++;
            if(s[i] == 'R') pos++;
            else pos--;
            if(pos == 0){
                hit = true;
                break;
            }
        }

        if(!hit || t0 > k){
            cout << 0 << endl;
            continue;
        }

        long long rem = k - t0;

        if(rem == 0){
            cout << 1 << endl;
            continue;
        }

        pos = 0;
        long long m = 0;
        bool found = false;
        for(int i = 0;i<n;i++){
            if(s[i] == 'R') pos++;
            else pos--;
            m++;
            if(pos == 0){
                found = true;
                break;
            }
        }

        if(!found){
            cout << 1 << endl;
        } else{
            long long total = 1 + rem / m;
            cout << total << endl;
        }
    }
    
    return 0;
}