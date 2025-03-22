#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n,e,m,r,j,w;
        cin >> n >> e >> m >> r >> j >> w;
        long long t1 = min(m, e/r);
        long long dist = t1*4;
        long long tleft = m - t1;
        long long sleft = e - t1*r;
        if(tleft > 0){
            long long t2 = min(tleft, sleft/j);
            dist += t2*2;
            tleft -= t2;
            sleft -= t2*j;
            if(tleft > 0){
                long long t3 = min(tleft, sleft/w);
                dist += t3;
                sleft -= t3*w;
            }
        }
        cout << (dist >= n ? 1 : 0) << endl;
    }
    return 0;
}