#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        if(n == 1){
            int res = 0;
            for(int i = 0;i<k;i++){
                res = res*10 + 1;
            }
            if(isPrime(res)){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            continue;
        }
        else{
            if(k > 1){
                cout << "NO" << endl;
                continue;
            } else{
                if(isPrime(n)){
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
                continue;
            }
        }
        
    }
    return 0;
}