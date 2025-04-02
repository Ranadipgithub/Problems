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
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int count = 0;
        vector<vector<int>> res;
        bool fg = true;
        for(int i = 0;i<n;i++){
            if(arr[i] == 0){
                fg = false;
                break;
            }
        }
        if(fg){
            cout << 1 << endl;
            cout << 1 << " " << n <<endl;
            continue;
        }
        bool fg1 = true;
        for(int i = 0;i<n;i++){
            if(arr[i] != 0){
                fg1 = false;
                break;
            }
        }
        if(fg1){
            cout<<3<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<2<<" "<<n-1<<endl;
            cout<<1<<" "<<2<<endl;
            continue;
        }
        if(arr[0] != 0){
            cout << 2 << endl;
            cout << 2 << " " << n << endl;
            cout << 1 << " " << 2 << endl;
            continue;
        }
        else if(arr[n-1] != 0){
            cout << 2 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << 1 << " " << 2 << endl;
            continue;
        } else{
            cout<<3<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<2<<" "<<n-1<<endl;
            cout<<1<<" "<<2<<endl;
            continue;
        }
    }
    return 0;
}