#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long m = n/2;
        long long ans = n*(m*(m+1)/2) - (m*(m+1)*(2*m+1)/6) + m+1;
        cout << ans << endl;
    }

    return 0;
}
