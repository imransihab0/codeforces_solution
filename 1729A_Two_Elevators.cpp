// https://codeforces.com/problemset/problem/1729/A
// @handle: imransihab

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x, y;
        x = a - 1;
        y = abs(b-c)+c-1;
        
        if(x<y) cout << 1 << endl;
        else if(x>y) cout << 2 << endl;
        else if(x==y) cout << 3 << endl;
    }
    
return 0;
}