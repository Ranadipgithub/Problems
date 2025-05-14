#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,m,a,b;
        cin >> n >> m >> a >> b;
        int num = m-n*a;
        int den = b-a;
        if(num > n*den || num < 0){
            cout << "NO" << endl;
        }
        else if(num%den == 0){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    } 
    return 0;
}