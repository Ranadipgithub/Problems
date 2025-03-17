#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long ans;
        
        if(n % 2 == 0) {
            long long d = k - 1;
            ans = n / d;
            if(n % d != 0) {
                ans++; 
            }
        } else {
            if(n <= k) {
                ans = 1;
            } else {
                long long d = k - 1;
                long long moves = (n - k) / d;
                if((n - k) % d != 0) {
                    moves++;
                }
                ans = 1 + moves;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
