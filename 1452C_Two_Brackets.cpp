// https://codeforces.com/problemset/problem/1452/C
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "Yes" << endl
#define pn cout << "No" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
	int fo = 0, to = 0, tm = 0;
	string s;
	cin >> s;

	if(s == "")
	{
		py;
		return;
	}

	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == '(') fo++;
		else if(s[i] == '[') to++;
		else if(s[i] == ')')
		{
			if(fo >= 1)
			{
				tm++;
				fo--;
			}
		}
		else if(s[i] == ']')
		{
			if(to >= 1)
			{
				tm++;
				to--;
			}
		}
	}

	cout << tm << endl;

}

int32_t main(){
	FastIO();
	
	int n;
	cin >> n;
	while(n--) solve();
	
return 0;
}