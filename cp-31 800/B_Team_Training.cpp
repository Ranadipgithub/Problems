#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        sort(a.begin(), a.end(), greater<int>());
        
        int cnt = 0;      
        int n1 = 0;
        for(int i = 0; i < n; i++){
            n1++;
            if(n1 * a[i] >= x){
                cnt++;
                n1 = 0;
            }
        }
        
        cout << cnt << endl;
    }
    return 0;
}
