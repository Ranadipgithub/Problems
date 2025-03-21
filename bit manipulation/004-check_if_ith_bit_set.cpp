#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin >> n >> i;
    // if(n & (1 << i)) cout << "Yes" << endl; // using left shift
    if((n >> i) & 1) cout << "Yes" << endl; // using right shift
    else cout << "No" << endl;
    return 0;
}