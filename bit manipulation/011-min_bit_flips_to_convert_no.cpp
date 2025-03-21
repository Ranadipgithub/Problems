#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int res = a^b;
    int cnt = 0;
    // for(int i = 0;i<31;i++){
    //     if(res & (1<<i)) cnt++;
    // }
    while(res > 0){
        res = res & (res-1);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}