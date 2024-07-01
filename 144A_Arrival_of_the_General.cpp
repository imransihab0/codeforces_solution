// https://codeforces.com/problemset/problem/144/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout

int32_t main()
{
	FastIO();
	
	int n, max = INT_MIN, min = INT_MAX, isMx = -1; cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) 
	{
		cin >> arr[i];
		if(arr[i]>max) max = arr[i];
		if(arr[i]<min) min = arr[i];
	}

	int c = 0, mx = 0, mn = 0;
	for(int i=0; i<n; i++)
	{
		if(arr[i] == max && isMx == -1)
		{
			mx = i+1;
			isMx = 0;
		}
		if(arr[i] == min) mn = i+1;
	}

	c += (mx-1); c += (n-mn);
	if(mx>mn) c-=1;
	cout << c << endl;

	return 0;
}