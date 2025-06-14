#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i <n; i++){
            cin >> a[i];
        }
        bool fg = false;
        for(int x:a){
            if(x%3 == 0){
                fg = true;
                break;
            }
        }
        if(fg){
            cout << "Yes"<<endl;
            continue;
        }
        if(n>= 3){
            cout << "Yes"<<endl;
            continue;
        }
        if(n== 1){
            cout << "No"<<endl;
        }
        else {
            if((a[0] + a[1]) % 3 == 0) cout << "Yes"<<endl;
            else cout << "No"<<endl;
        }
    }
    return 0;
}
