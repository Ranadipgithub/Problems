#include<bits/stdc++.h>
using namespace std;

int solve(int n, int k){
    if(n==1 && k==1){
        return 0;
    }
    int mid = pow(2, n-1)/2;
    if(k<=mid){
        return solve(n-1,k);
    } else{
        return solve(n-1, k-mid)^1;
    }
}

int main(){
    int n, k;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> k;
    cout << solve(n, k) << endl;
    return 0;
}