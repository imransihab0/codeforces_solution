// https://codeforces.com/problemset/problem/136/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fl(a, b) for (int i = a; i < b; i++)
#define fll(a) for (auto &i : a)
#define ssort(a) sort(a.begin(), a.end())
#define el cout << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> vp;

    fl(0, n)
    {
        int t; cin >> t;
        vp.pb({t, i+1});
    }
    ssort(vp);
    fll(vp) cout << i.second << " ";
    el;
}

int32_t main(){
    FastIO();
    
    // int t; cin >> t;
    // while(t--) 
    solve();
    
return 0;
}