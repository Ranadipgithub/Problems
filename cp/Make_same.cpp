#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        
        int a0[3] = {0,0,0};
        for (char c : s1) a0[0] += (c == '0');
        for (char c : s2) a0[1] += (c == '0');
        for (char c : s3) a0[2] += (c == '0');
        
        int total = a0[0] + a0[1] + a0[2];
        
        if(total != 0 && total != N && total != 2 * N && total != 3 * N){
            cout << -1 << endl;
            continue;
        }
        
        if(total == 0 || total == 3 * N){
            cout << 0 << endl;
            continue;
        }
        
        int k = total / N;
        int ops = 0;
        
        if(k == 1) {
            int best = max({a0[0], a0[1], a0[2]});
            ops = N - best;
        }
        else if(k == 2) {
            int best = 0;
            best = max(best, a0[0] + a0[1]);
            best = max(best, a0[0] + a0[2]);
            best = max(best, a0[1] + a0[2]);
            ops = 2 * N - best;
        }
        
        cout << ops << endl;
    }
    return 0;
}