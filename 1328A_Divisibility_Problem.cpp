// https://codeforces.com/problemset/problem/1328/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solution()
{
    int a, b, c = 0, i = 1;
    cin >> a >> b;  c = b;
    if(a%b == 0) cout << 0 << endl;
    else if(a < b) cout << b - a << endl;
    else if(a > b)
    {
        int tmp = ceil((double)a/b);
        cout << (tmp*b) - a << endl;
    }
}

int32_t main(){
    FastIO();
    
    int t;
    cin >> t;

    while(t--) solution();
    
return 0;
}