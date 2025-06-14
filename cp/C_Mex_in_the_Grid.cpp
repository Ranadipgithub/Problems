#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n, -1));

        int r = (n % 2 ? (n-1)/2 : n/2 - 1);
        int c = (n % 2 ? (n-1)/2 : n/2 - 1);
        const int dr[4] = {0, 1, 0, -1};
        const int dc[4] = {1, 0, -1, 0};
        int dir = 0;        
        int len = 1;         
        int steps = 0;   
        int cnt = 0;         

        for(int val = 0; val < n*n; ++val){
            grid[r][c] = val;
            if(val == n*n - 1) break;  
            r += dr[dir];
            c += dc[dir];
            steps++;
            if(steps == len){
                steps = 0;
                dir = (dir + 1) % 4;
                cnt++;
                if(cnt == 2){
                    cnt = 0;
                    len++;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << grid[i][j] << (j+1<n ? ' ' : '\n');
            }
        }
    }
    
    return 0;
}
