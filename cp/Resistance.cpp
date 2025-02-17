#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long p,q;
        cin >> p >> q;
        long long cnt = 0;
        while(p != q){
            if(p > q){
                p = p - q;
            } else{
                q = q - p;
            }
            cnt++;
        }
        cnt += p;
        cout << cnt << endl;
    }
    return 0;
}