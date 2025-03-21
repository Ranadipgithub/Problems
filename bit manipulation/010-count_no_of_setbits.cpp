#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    // while(n > 0){
    //     if(n%2 == 1) count++;
    //     n = n / 2;
    // }

    // while(n > 0){
    //     count += n & 1;
    //     n = n >> 1;
    // }

    while(n > 0){
        n = n & (n-1);
        count++;
    }
    
    cout << count << endl;
    return 0;
}