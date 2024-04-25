// https://codeforces.com/problemset/problem/1560/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
	FastIO();

	vector<int> v;
	for(int i = 1; i<=2000; i++)
	{
		if(i%3 == 0)
		{
			continue;
		}
		else if(i%10 == 3)
		{
			continue;
		}
		else
		{
			v.push_back(i);
		}
	}

	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		cout << v[n-1] << endl;
	}

	return 0;
}