// https://codeforces.com/problemset/problem/1504/A
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
        string s;
        cin >> s;

        bool isA = false;

        set<char> c;

        for(char i:s)
        {
            c.insert(i);
        }

        if(c.size() == 1 && *c.begin() == 'a') isA = true;

        string one = "a"+s, two = s+"a", _one = one, _two = two;
        reverse(_one.begin(), _one.end());
        reverse(_two.begin(), _two.end());

        if(isA) pn;
        else
        {
            if(one != _one)
            {
                py;
                cout << one << endl;
            }
            else if(two != _two)
            {
                py;
                cout << two << endl;
            }
            else pn;
        }                
    }
    
return 0;
}