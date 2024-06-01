// https://codeforces.com/problemset/problem/580/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int n, c = 0; cin >> n;
    int max = 0, _lar = 0, tmp;

    while(n--)
    {
        cin >> tmp;
        if(tmp>=_lar)
        {
            _lar = tmp;
            c++;
        }
        else 
        {
            _lar = tmp;
            c = 1;
        }
        if(max<=c) max = c;
    }

    cout << max << endl;
    
return 0;
}