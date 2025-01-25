#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int temp) {
    if (s.size() == 0) {
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s, temp);
    s.push(val);
}

void reverse(stack<int> &s) {
    if (s.size() == 1) {
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    insert(s, temp);
}

int main() {
    int n;
    cout << "Enter the size of the stack: ";
    cin >> n;
    stack<int> s;
    cout << "Enter the elements of the stack (from bottom to top): ";

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }

    reverse(s);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
