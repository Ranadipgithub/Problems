#include<bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> arr, int n){
    vector<int> res(n);
    for(int i = 0;i<n-1;i++){
        int next = -1;
        for(int j = i+1; j<n;j++){
            if(arr[j] > arr[i]){
                next = arr[j];
                res[i] = next;
                break;
            }
        }
    }
    res[n-1] = -1;
    return res;
}

vector<int> better(vector<int> arr, int n){
    stack<int> st;
    vector<int> res(n);
    for(int i = n-1;i>=0;i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        res[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> res = better(arr, n);
    for(int i=0; i<n; i++){
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}