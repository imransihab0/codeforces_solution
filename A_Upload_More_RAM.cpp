// https://codeforces.com/contest/1987/problem/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout

void solve()
{
	int a, b; cin >> a >> b;
	if(b == 1) cout << a*b << endl;
	else if(a>=b) cout << b*(a-1)+1 << endl;
	else if(a<b) cout << (a*b+1)-b << endl;
}

int32_t main()
{
	FastIO();
	int t; cin >> t;
	while(t--) solve();
	return 0;
}