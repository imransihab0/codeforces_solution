// https://codeforces.com/contest/1978/problem/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout

void solve()
{
	int n, max = 0; cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) cin >> arr[i];
	for(int i=0; i<n-1; i++) if(arr[i]>max) max = arr[i];
	cout << max + arr[n-1] << endl;
}

int32_t main()
{
	FastIO();

	int t; cin >> t;
	while(t--) solve();

	return 0;
}