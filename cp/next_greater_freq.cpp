#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    map<int, int> fq;
    for(int i = 0; i < n; i++){
        fq[arr[i]]++;
    }
    vector<int> res;
    stack<int> st;
    for(int i = n-1;i>=0;i++){
        if(st.empty()){
            res.push_back(-1);
        }
            
    }
    
}