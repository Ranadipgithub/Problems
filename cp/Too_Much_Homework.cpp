#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    bool flag = false;
    for(int i = 10;i>=0;i--){
        if(x + y*i >= 100){
            flag = true;
            break;
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}