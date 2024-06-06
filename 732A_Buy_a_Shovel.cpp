// https://codeforces.com/problemset/problem/732/A
// @handle: imransihab0
// at [ Jun/07/2024 02:41UTC+6 ]

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int k, _k = 1, r;
    cin >> k >> r;

    while(true)
    {
        if((_k*k % 10) == 0 || ((_k*k - r) % 10) == 0) break;
        _k++;
    }

    cout << _k << endl;
    
return 0;
}
