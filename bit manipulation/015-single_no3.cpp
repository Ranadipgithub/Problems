#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int xorr = 0;
    for(int i = 0;i<n;i++){
        xorr = xorr ^ arr[i];
    }
    int rightmost_set_bit = (xorr & xorr - 1) ^ xorr;
    int b1 = 0, b2 = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] & rightmost_set_bit){
            b1 = b1 ^ arr[i];
        }else{
            b2 = b2 ^ arr[i];
        }
    }
    cout << b1 << " " << b2 << endl;
    return 0;
}