// https://codeforces.com/problemset/problem/443/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    string s;
    getline(cin, s);
    set<char> c;
    for(int i=0; i<s.size(); i++) if(s[i]>='a' && s[i]<='z') c.insert(s[i]);
    cout << c.size() << endl;
    
return 0;
}