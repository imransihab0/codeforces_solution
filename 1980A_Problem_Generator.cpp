// https://codeforces.com/contest/1980/problem/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;

        unordered_map<char, int> pc;
        for (char c:a) pc[c]++;

        int np = 0;
        for (char i = 'A'; i <= 'G'; ++i) 
        {
            int e = pc[i];
            int required = m - e;
            if (required > 0) {
                np += required;
            }
        }

        cout << np << endl;
}

int32_t main(){
    FastIO();
    
    int t; cin >> t;
    while(t--) solve();
    
return 0;
}