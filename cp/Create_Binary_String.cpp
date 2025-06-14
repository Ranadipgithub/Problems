#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n,a,b,c,d;
        cin >> n >> a >> b >> c >> d;
        long long ans = 0;
        for(long long i = 0;i<=n;i++){
            long long temp = a*i + b*(n-i) + max(c, d)*(i*(n-i));
            ans = max(ans, temp);
        }
        cout << ans << endl;
    }
    return 0;
}