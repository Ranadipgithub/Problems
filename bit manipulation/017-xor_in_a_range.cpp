#include<bits/stdc++.h>
using namespace std;  

int findXor1ton(int n){
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}

int main(){
    int l, r;
    cin >> l >> r;
    cout << (findXor1ton(r) ^ findXor1ton(l-1)) << endl;    
    return 0;
}