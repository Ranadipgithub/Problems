// Given an integer n, print all the n digit numbers in increasing order, such that their digits are in strictly
// increasing order(from left to right).

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v, int n, vector<int> &res)
{
    if (n == 0)
    {
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ans = ans * 10 + v[i];
        }
        res.push_back(ans);
        return;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (v.empty() || i > v.back())
        {
            v.push_back(i);
            solve(v, n - 1, res);
            v.pop_back();
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;
    vector<int> v;
    vector<int> res;
    solve(v, n, res);
    cout << "The n digit numbers in increasing order are: ";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}