#include<bits/stdc++.h>
using namespace std;

void solve(string s, int start, vector<string> &ans){
    if(start == s.size()-1){
        ans.push_back(s);
        return;
    }
    unordered_set<char> st;
    for(int i = start;i<s.size();i++){
        if(st.find(s[i]) == st.end()){
            st.insert(s[i]);
            swap(s[start], s[i]);
            solve(s, start+1, ans);
            swap(s[start], s[i]);
        }
    }
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    vector<string> ans;
    solve(s, 0, ans);
    for(auto x: ans){
        cout<<x<<endl;
    }
}