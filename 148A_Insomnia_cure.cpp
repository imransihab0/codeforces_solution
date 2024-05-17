// https://codeforces.com/problemset/problem/148/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int k, l, m, n, d, s = 0;
    cin >> k >> l >> m >> n >> d;

    if(k == 1 || l == 1 || m == 1 || n == 1) s = d;
    else for(int i=1; i<=d; i++) if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0) s++;

    cout << s << endl;
    
return 0;
}