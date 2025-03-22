#include<bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> arr, int n){
    vector<int> res(n, -1);
    for(int i = 0;i<n;i++){
        for(int j = i+1; j<i+n-1;j++){
            int idx = j%n;
            if(arr[idx] > arr[i]){
                res[i] = arr[idx];
                break;
            }
        }
    }
    return res;
}

vector<int> optimal(vector<int> arr, int n){
    stack<int> st;
    vector<int> res(n, -1);
    for(int i = 2*n-1; i>=0; i--){
        while(!st.empty() && st.top() <= arr[i%n]){
            st.pop();
        }
        if(i<n){
            res[i] = st.empty() ? -1 : st.top();
        }
        st.push(arr[i%n]);
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
    vector<int> res = optimal(arr, n);
    for(int i=0; i<n; i++){
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}