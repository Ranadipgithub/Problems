#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n), b(n);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }
        for(long long i = 0; i < n; i++){
            cin >> b[i];
        }
        long long min_a = *min_element(a.begin(), a.end());
        long long max_b_val = *max_element(b.begin(), b.end());
        long long max_b = max_b_val + 1; 
        long long min_b = *min_element(b.begin(), b.end());
        
        long long suma = accumulate(a.begin(), a.end(), 0);
        long long sumb = accumulate(b.begin(), b.end(), 0);
        
        vector<long long> fqb(max_b - min_b, 0);
        for(auto x : b){
            fqb[x - min_b]++;
        }
        
        vector<long long> sorta = a, sortb = b;
        sort(sorta.begin(), sorta.end());
        sort(sortb.begin(), sortb.end());
        if(sorta == sortb){
            cout << max_b << endl;
            continue;
        }
        
        bool found = false;
        for(long long i = max_b; i <= min_a; i++){
            vector<long long> fq(max_b - min_b, 0);
            bool valid = true;
            for(long long j = 0; j < n; j++){
                long long modVal = a[j] % i;
                if(modVal < min_b || modVal >= max_b){
                    valid = false;
                    break;
                }
                fq[modVal - min_b]++;
            }
            if(!valid)
                continue;
            
            if(fq == fqb){
                cout << i << endl;
                found = true;
                break;
            }
        }
        if(!found)
            cout << -1 << endl;
    }
    return 0;
}
