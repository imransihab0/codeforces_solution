// https://codeforces.com/problemset/problem/25/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout

int32_t main()
{
	FastIO();
	int n; cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) cin >> arr[i];

	int hash[] = {0, 0};

	for(int i=0; i<n; i++)
	{
		if(arr[i]%2 == 0) hash[0]++;
		else hash[1]++;
	}

	if(hash[0] == 1)
	{
		for(int i=0; i<n; i++) 
		{
			if(arr[i]%2 == 0)
			{
				cout << ++i << endl;
				break;
			}
		}
	}
	else
	{
		for(int i=0; i<n; i++) 
		{
			if(arr[i]%2 == 1)
			{
				cout << ++i << endl;
				break;
			}
		}
	}

	return 0;
}