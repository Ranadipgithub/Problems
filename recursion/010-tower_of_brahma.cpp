#include<bits/stdc++.h>
using namespace std;

void solve(int n, int s, int d, int h, int &count){
    if(n == 1){
        count++;
        cout << "moving disk 1 from " << s << " to " << d << endl;
        return;
    }

    solve(n-1, s, h, d, count);
    cout << "moving disk " << n << " from " << s << " to " << d << endl;
    count++;
    solve(n-1, h, d, s, count);
}

int main(){
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    int s = 1, h = 2, d = 3;
    int count = 0;
    solve(n, s, d, h, count);
    cout << "Total number of moves: " << count << endl;
    return 0;
}