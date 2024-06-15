// https://codeforces.com/problemset/problem/1902/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	set<char> st;
	for(auto c:s) st.insert(c);
	if(st.size() > 1) py;
	else
	{
		if(st.begin() == '0') py;
		else pn;
	}
}

int32_t main()
{
	FastIO();

	int t; cin >> t;
	while(t--) solve();

	return 0;
}