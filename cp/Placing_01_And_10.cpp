#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x == y){
            cout << x+y << "\n";
        } else if(x > y){
            cout << x+y + (x-y-1) << endl;
        } else{
            cout << x+y + (y-x-1) << endl;
        }
    }
    return 0;
}