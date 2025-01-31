#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op, vector<string>&v){
    if(ip.size() == 0){
        v.push_back(op);
        return;
    }
    unordered_set<char> s;
    for(int i = 0;i<ip.size();i++){
        if(s.find(ip[i]) == s.end()){
            s.insert(ip[i]);
            string ip1 = ip.substr(0,i) + ip.substr(i+1);
            string op1 = op + ip[i];
            solve(ip1, op1, v);
        }
    }
}

int main(){
    string ip;
    cout << "Enter the string: ";
    cin >> ip;
    string op = "";
    vector<string> v;
    solve(ip, op, v);
    for(auto x:v){
        cout << x << endl;
    }
}