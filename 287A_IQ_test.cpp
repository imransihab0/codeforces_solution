// https://codeforces.com/contest/287/problem/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout

int32_t main()
{
	FastIO();
	
	int n = 4;
	char arr[n][n];
	for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> arr[i][j];

	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(arr[i][j] == arr[i][j+1])
			{
				if( (arr[i][j] == arr[i+1][j]) && (arr[i][j] == arr[i+1][j+1]) )
				{
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}

	// again check for posibilites
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(arr[i][j] == arr[i][j+1])
			{
				if( (arr[i][j] == arr[i+1][j]) || (arr[i][j] == arr[i+1][j+1]) )
				{
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}

	// reverse check on the last line
	for(int i=3; i>=1; i--)
	{
		for(int j=0; j<n-1; j++)
		{
			if(arr[i][j] == arr[i][j+1])
			{
				if((arr[i-1][j] == arr[i][j]) || (arr[i-1][j+1] == arr[i][j]))
				{
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}

	cout << "NO" << endl;

	return 0;
}