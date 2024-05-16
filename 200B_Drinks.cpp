// https://codeforces.com/problemset/problem/200/B
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int n, _n;
    cin >> n; _n = n;
    double s = 0;
    while(n--)
    {
        double tmp; cin >> tmp;
        s += (1.0*tmp)/100;
    }

    cout << s/_n*100 << endl;
    
return 0;
}