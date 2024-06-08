// https://codeforces.com/problemset/problem/141/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    string s1, s2, d; cin >> s1 >> s2 >> d;

    s1.append(s2);

    sort(s1.begin(), s1.end());
    sort(d.begin(), d.end());

    if(s1 == d) py;
    else pn;
    
return 0;
}