#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    if(a+b > c && b+c > a && c+a > b){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}