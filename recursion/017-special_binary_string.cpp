// Given a positive integer n. Your task is to generate a string list of all n-bit binary numbers where, 
// for any prefix of the number, there are more or an equal number of 1's than 0's. The numbers should be 
// sorted in decreasing order of magnitude.

#include<bits/stdc++.h>
using namespace std;

void solve(int n, string op, int ones, int zeros, vector<string> &res){
    if(n == 0){
        res.push_back(op);
        return;
    }
    string op1 = op;
    op1.push_back('1');
    solve(n-1, op1, ones+1, zeros, res);
    if(ones > zeros){
        string op2 = op;
        op2.push_back('0');
        solve(n-1, op2, ones, zeros+1, res);
    }
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    string op = "";
    int ones = 0;
    int zeros = 0;
    vector<string> res;
    solve(n, op, ones, zeros, res);
    for(int i=res.size()-1; i>=0; i--){
        cout << res[i] << endl;
    }
}
