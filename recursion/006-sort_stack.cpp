#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int temp){
    if(s.size() == 0 || s.top() <= temp){
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s, temp);
    s.push(val);
}

void sort(stack<int> &s){
    if(s.size() == 1){
        return;
    }
    int temp = s.top();
    s.pop();
    sort(s);
    insert(s, temp);
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

    sort(s);

    for(int i=0; i<5; i++){
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}