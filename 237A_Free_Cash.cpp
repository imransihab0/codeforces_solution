// https://codeforces.com/problemset/problem/237/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int t, c = 1, _c = 1, h, m, fh, fm;
    cin >> t;
    cin >> fh >> fm;

    while(--t)
    {
        cin >> h >> m;
        if(h == fh && m == fm)
        {
            c++;
            if(c>_c) _c = c;
        }
        else c = 1;
        fh = h; fm = m;
    }

    cout << _c << endl;
    
return 0;
}