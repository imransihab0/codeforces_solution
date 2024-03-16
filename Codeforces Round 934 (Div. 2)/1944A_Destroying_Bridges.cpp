// https://codeforces.com/contest/1944/problem/A
// handle: @imransihab

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    FastIO();

    int t;
    cin >> t;

    while(t--){

        int n, k;
        cin >> n >> k;

        int b = n-1;
        
        if(k>=b) cout << 1 << endl;

        else cout << n << endl;

    }
    
return 0;
}
