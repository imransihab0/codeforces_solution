// https://codeforces.com/problemset/problem/1907/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
	FastIO();

	int t;
	cin >> t;

	while(t--)
	{
		string s;
		char hash[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
		cin >> s;
		int n = s[1] - '0';
		
		// for vertical
		for (int i = 1; i <= 8; i++)
		{
			if((char)hash[i-1] != s[0])
			{
				cout << hash[i-1] << n << endl;
			}
		}
		// for horizontal
		for (int i = 1; i <= 8; i++)
		{
			if(i != n)
			{
				cout << s[0] << i << endl;
			}
		}

	}

	return 0;
}