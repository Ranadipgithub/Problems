#include<bits/stdc++.h>
using namespace std;

void solve(string s, string op, vector<string> &res){
    if(s.length() == 0){
        res.push_back(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(s[0]);
    s.erase(s.begin()+0);
    solve(s, op1, res);
    solve(s, op2, res);
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string op = "";
    vector<string> res;
    solve(s, op, res);
    map<string, int> mpp;
    for(int i=0; i<res.size(); i++){
        mpp[res[i]]++;
    }
    for(auto i: mpp){
        cout << i.first << endl;
    }
}