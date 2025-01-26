#include<bits/stdc++.h>
using namespace std;

void solve(int n, int s, int d, int h){
    if(n == 1){
        cout << "moving disk 1 from " << s << " to " << d << endl;
        return;
    }
    solve(n-1, s, h, d);
    cout << "moving disk " << n << " from " << s << " to " << d << endl;
    solve(n-1, h, d, s);
}

int main(){
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    int s = 1, h = 2, d = 3;
    solve(n, s, d, h);
    return 0;
}