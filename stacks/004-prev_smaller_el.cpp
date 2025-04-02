#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin >> arr[i];
    stack<int> st;
    vector<int> res(n);
    for(int i = 0;i<n;i++){
        while(!st.empty() && st.top() >= arr[i]){
            st.pop();
        }
        res[i] = st.empty()? -1: st.top();
        st.push(arr[i]);
    }
    for(int i = 0;i<n;i++){
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}