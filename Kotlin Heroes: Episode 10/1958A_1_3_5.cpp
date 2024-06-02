// https://codeforces.com/contest/1958/problem/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    int n; cin >> n;
    if(n>11) 
    {
        cout << 0 << endl;
        return;
    }
    int hash[] = {1, 2, 0, 1, 0, 0, 1, 0, 0, 0, 0};
    cout << hash[--n] << endl;
}

int32_t main(){
    FastIO();
    
    int t; cin >> t;
    while(t--) solve();
    
return 0;
}