// https://codeforces.com/problemset/problem/1352/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    int n, l, _l, c = 0;
    cin >> n;
    string s = to_string(n), temp = ""; l = s.size(); _l = l;
    for(int i=0; i<_l; i++)
    {
        if(s[i] != '0')
        {
            temp += s[i];
            for(int i=0; i<l-1; i++) temp += '0';
            temp += ' '; c++;
        }
        l--;
    }
    cout << c << endl << temp << endl;
}

int32_t main(){
    FastIO();
    
    int t;
    cin >> t;
    while(t--) solve();
    
return 0;
}