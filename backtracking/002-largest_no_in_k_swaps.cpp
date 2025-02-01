#include<bits/stdc++.h>
using namespace std;

void solve(string &s, int start, int k, string &res, int &count){
    if(k == 0 || start == s.size()-1){
        return;
    }
    char max_char = *max_element(s.begin()+start, s.end());
    for(int i = start+1;i<s.size();i++){
        if(s[i] == max_char && s[i] > s[start]){
            swap(s[start], s[i]);
            count++;
            if(s > res){
                res = s;
            }
            solve(s, start+1, k-1, res, count);
            swap(s[start], s[i]);
        }
    }
    solve(s, start+1, k, res, count);
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int k;
    cout<<"Enter the number of swaps: ";
    cin>>k;
    string res = s;
    int count = 0;
    solve(s, 0, k, res, count);
    cout<<res<<endl;
    cout << count<<endl;
}
