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
        if(n == 1){
            cout << a[0] << " " << a[0] << endl;
            continue;
        }
        bool fg1 = true, fg2 = true;
        for(int i = 0;i<n;i++){
            if(a[i] > 0){
                fg1 = false;
                break;
            }
        }
        for(int i = 0;i<n;i++){
            if(a[i] != 0){
                fg2 = false;
                break;
            }
        }
        
        if(fg2){
            cout << -1 << endl;
            continue;
        }
        sort(a.begin(), a.end());
        if(fg1){
            cout << a[0] << " " << a[1] << endl;
            continue;
        } 
        cout << a[n-2] << " " << a[n-1] << endl;
    }
    return 0;
}