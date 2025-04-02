#include<bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        long long oa = 0, ob = 0;
        for(long long i= 0;i<n;i++){
            if(i%2==0){
                if(a[i]=='1')oa++;
                if(b[i]=='1')ob++;
            }else{
                if(a[i]=='1')ob++;
                if(b[i]=='1')oa++;
            }
        }
        long long ca = n/2;
        long long cb = 0;
        if(n%2==0)cb=n/2;
        else cb=(n+1)/2;
        if(oa<=ca && ob<=cb) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
