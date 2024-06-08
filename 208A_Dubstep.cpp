// https://codeforces.com/problemset/problem/208/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define el cout << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    string s, _s = ""; cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            _s += " ";
            i += 2;
        }
        else _s += s[i];
    }

    bool flag = true;
    
    for(int i=0; i<_s.size(); i++)
    {
        if(_s[i] == ' ' && flag) 
        {
            cout << " ";
            flag = false;
        }
        else if(isalpha(_s[i]))
        {
            cout << _s[i];
            flag = true;
        }
    } el;
    
return 0;
}