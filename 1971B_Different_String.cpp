// https://codeforces.com/contest/1971/problem/B
// @handle: imransihab0

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
        string s, _s;
        cin >> s;
        _s = s;
        set<char> se;
        for(auto i:s)
        {
            se.insert(i);
        }
        if(se.size() == 1) pn;
        else
        {
            py;
            reverse(_s.begin(), _s.end());
            if(s == _s)
            {
                for(int i=0; i<_s.size()-1; i++)
                {
                    swap(_s[i], _s[i+1]);
                    if(s != _s)
                    {
                        cout << _s << endl;
                        break;
                    }
                }
            }
            else
            {
                cout << _s << endl;
            }
        }
    }
    
return 0;
}