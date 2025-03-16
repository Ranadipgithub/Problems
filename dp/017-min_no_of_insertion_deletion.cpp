#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp;
    dp.resize(n+1, vector<int>(m+1, 0));

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }

    int lcs = dp[n][m];
    int ins = m - lcs;
    int del = n - lcs;
    cout << "Insertions: " << ins << ", Deletions: " << del << endl;
    return 0;
}

// heap pea
// 1 2 