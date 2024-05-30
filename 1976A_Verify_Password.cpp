// https://codeforces.com/contest/1976/problem/A
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
    cin >> n;
    string s;
    cin >> s;
    string num = "", let = "";
    if(s.size() == 1)
    {
        py;
        return;
    }

    for(int i=0; i<s.size() - 1; i++)
    {
        if(isalpha(s[i] && isdigit(s[i+1])))
        {
            pn;
            return;
        }
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i])) let += s[i];
        else num += s[i];
    }

    sort(num.begin(), num.end());
    sort(let.begin(), let.end());

    string _s = num+let;

    if(s == _s) py;
    else pn;

}

int32_t main(){
    FastIO();
    
    int t;
    cin >> t;
    while(t--) solve();
    
return 0;
}