// https://codeforces.com/problemset/problem/723/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int a, b, c;
    cin >> a >> b >> c;

    int m[] = {a, b, c};
    sort(m, m+3);

    cout << (abs(m[0]-m[1]))+(abs(m[2]-m[1])) << endl;
    
return 0;
}