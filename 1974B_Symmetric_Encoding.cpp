// https://codeforces.com/problemset/problem/1974/B
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    int n;
    string s, _s = "";
    cin >> n;
    cin >> s;
    set<char> _set;
    for(int i=0; i<n; i++) _set.insert(s[i]);
    for(char i:_set) _s.push_back(i);
    map<char, char> mp;
    int m = _s.size();
    
    for(int i=0; i<=m/2; i++)
    {
        mp[_s[i]] = _s[m-i-1];
        mp[_s[m - i - 1]] = _s[i];
    }
    for(int i=0; i<s.size(); i++) cout << mp[s[i]];
    cout << endl;
}

int32_t main(){
    FastIO();
    
    int t;
    cin >> t;
    while(t--) solve();
    
return 0;
}