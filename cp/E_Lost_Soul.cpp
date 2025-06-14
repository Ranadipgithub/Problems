#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int ans = -1;
        for(int i = n-1;i>=0;i--){
            if(a[i] == b[i]){
                ans = i+1;
                break;
            }
        }
        for(int i = n-1;i>=1;i--){
            if((a[i] == b[i-2])){
                b[i-1] = a[i];
                break;
            } else if(b[i] == a[i-2]){
                a[i-1] = b[i];
                break;
            } else if(a[i] == b[i-3]){
                b[i-2] = a[i];
                break;
            } else if(b[i] == a[i-3]){
                a[i-2] = b[i];
                break;
            }
        }
        int res = 0;
        for(int i = n-1;i>=1;i--){
            if((a[i] == a[i-1]) || (b[i] == b[i-1])){
                res = i;
                break;
            } else if((a[i] == a[i-2]) || (b[i] == b[i-2])){
                res = i-1;
                break;
            }
        }
        cout << max(ans, res) << endl;
    }
    return 0;
}