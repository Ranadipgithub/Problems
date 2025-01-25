#include<bits/stdc++.h>
using namespace std;

void deleteMid(stack<int> &s, int k){
    if(k == 1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    deleteMid(s, k-1);
    s.push(temp);
}

int main(){
    int n;
    cout << "Enter the size of the stack: ";
    cin >> n;
    stack<int> s;
    cout << "Enter the elements of the stack: ";
    
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        s.push(x);
    }

    int k = n/2 + 1;

    deleteMid(s, k);

    for(int i=0; i<5; i++){
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}