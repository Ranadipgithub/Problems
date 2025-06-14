#include <bits/stdc++.h>
using namespace std;

long long solve(long long h, long long w){
    long long cnt = 0;
    while (h>1 || w>1) {
        if (h >= w) h = (h + 1)/2;
        else w = (w + 1)/2;
        cnt++;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        long long n,m,a,b;
        cin >> n >> m >> a >> b;
        long long H1 = min(a, n -a +1);  
        long long W1 = min(b, m -b +1);
        long long cntA = 1 + solve(H1, m);
        long long cntB = 1 + solve(n, W1);

        cout << min(cntA, cntB) << endl;
    }
    return 0;
}
