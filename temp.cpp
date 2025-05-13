#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }
    vector<string> res;
    for(int i = 0;i<n;i++){
        string first = v[i];
        string second = i < n-1? v[i+1]: v[0];
        string temp = string(1, first[0]) + string(1, second[second.length()-1]);
        res.push_back(temp);
    }
    for(int i = 0;i<n;i++){
        cout << res[i] << " ";
    }
    return 0;
}