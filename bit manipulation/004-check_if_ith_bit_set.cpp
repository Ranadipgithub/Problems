#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin >> n >> i;
    if(n & (1 << i)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}