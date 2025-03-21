#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    // for(int i=1;i<=n;i++){
    //     ans = ans^i;
    // }
    if(n%4 == 0){
        ans = n;
    }else if(n%4 == 1){
        ans = 1;
    }else if(n%4 == 2){
        ans = n+1;
    }else{
        ans = 0;
    }
    cout<<ans<<endl;
}