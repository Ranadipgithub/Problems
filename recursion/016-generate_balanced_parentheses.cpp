#include<bits/stdc++.h>
using namespace std;

void solve(int open, int close, string op){
    if(open == 0 && close == 0){
        cout << op << endl;
        return;
    }
    if(open < 0 || close < 0){
        return;
    }
    if(open < close){
        string op1 = op;
        string op2 = op;
        op1.push_back('(');
        op2.push_back(')');
        solve(open-1, close, op1);
        solve(open, close-1, op2);
    } else if(open == close){
        string op1 = op;
        op1.push_back('(');
        solve(open-1, close, op1);
    } else{
        string op1 = op;
        op1.push_back(')');
        solve(open, close-1, op1);
    }
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (n < 0) {
        cout << "Invalid input! n must be >= 0." << endl;
        return 0;
    }
    int open = n;
    int close = n;
    string op = "(";
    solve(open-1, close, op);
}