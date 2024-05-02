// https://codeforces.com/contest/1968/problem/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int find_y(int x) 
{
    int y = 1;
    for (int i = 2; i < x; ++i) if ((__gcd(x, i) + i) > (__gcd(x, y) + y)) y = i;
    return y;
}

int32_t main(){
    int t;
    cin >> t;

    while(t--) 
    {
        int x; cin >> x;
        cout << find_y(x) << endl;
    }

    return 0;
}
