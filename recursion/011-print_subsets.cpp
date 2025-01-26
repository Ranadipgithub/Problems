#include<bits/stdc++.h>
using namespace std;

void solve(string s, string op){
    if(s.length() == 0){
        cout<<op<<endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(s[0]);
    s.erase(s.begin()+0);
    solve(s, op1);
    solve(s, op2);
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string op = "";
    solve(s, op);
}