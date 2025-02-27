#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;
        
        long long cnt1 = 0, cnt2 = 0;
        
        for(int i = 0;i<n;i++){
            if(s[i] == '-') cnt1++;
            else if(s[i] == '_') cnt2++;
        }
        
        if(cnt1 < 2 || cnt2 < 1){
            cout << 0 << endl;
            continue;
        }
        
        long long a = cnt1 / 2;         
        long long b = cnt1 - a;       
        long long ans = (long long) cnt2 * a * b;
        
        cout << ans << endl;
    }
    
    return 0;
}
