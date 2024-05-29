// https://codeforces.com/problemset/problem/1971/D
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    string s, _s; cin >> s;
    _s = s; sort(_s.begin(), _s.end());
    if(_s == s) cout << 1 << endl;
    else
    {
        int c = 0;
        if(s.size() == 2 && s[0] != s[1]) cout << 2 << endl;
        else
        {
            for(int i=0; i<s.size()-1; i++) if(s[i] != s[i+1]) c++;
            if(c == 0 || c == 1) cout << c+1 << endl;
            else cout << c << endl;
        } 
    }
}

int32_t main(){
    FastIO();
    
    int t; cin >> t;
    while(t--) solve();
    
return 0;
}