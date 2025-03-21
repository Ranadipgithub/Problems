// Convert a decimal number to binary number
// Time Complexity: O(logn)
// Space Complexity: O(logn)
// Procedure:
// 1. If n is 0, then return 0.
// 2. While n is greater than 0, do the following:
//     a. If the last bit of n is 1, then append 1 to the result.
//     b. Otherwise, append 0 to the result.
//     c. Divide n by 2.
// 3. Print the result.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string res = "";
    if(n == 0) res = "0";
    while(n > 0){
        if(n % 2 == 1) res += "1";
        else res += "0";
        n = n / 2;
    }
    cout << res << endl;
    return 0;
}