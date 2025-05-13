#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n, m, p, q;
        cin >> n >> m >> p >> q;
        if (n% p!= 0) {
            cout << "YES"<<endl;
        }
        else {
            if (m == (n/p) * q)
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
        }
    }
    return 0;
}
