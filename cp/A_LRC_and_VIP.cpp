#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n+2);
        for(int i = 1;i<=n;i++){
            cin >> arr[i];
        }
        bool fg = true;
        for(int i = 1;i<n;i++){
            if(arr[i] != arr[i+1]){
                fg = false;
            }
        }
        if(fg){
            cout << "No" << endl;
            continue;
        }

        vector<int> pre(n+2, 0);
        vector<int> suf(n+2, 0);
        for(int i = 1;i<=n;i++){
            pre[i] = gcd(pre[i-1], arr[i]);
        }
        for(int i = n;i>=1;i--){
            suf[i] = gcd(suf[i+1], arr[i]);
        }

        int idx = -1;
        for(int i = 1;i<=n;i++){
            int x = gcd(pre[i-1], suf[i+1]);
            if(x != arr[i]){
                idx = i;
                break;
            }
        }
        cout << "Yes" << endl;
        for(int i = 1;i<=n;i++){
            cout << (i == idx? 1:2) << (i == n? "\n":" ");
        }
    }
    return 0;
}
