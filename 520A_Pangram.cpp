// https://codeforces.com/problemset/problem/520/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();

    int n;
    cin >> n;
    
    string s, _s, hash = "abcdefghijklmnopqrstuvwxyz";
    set<char> st;
    cin >> s;

    for(char &i:s) st.insert(tolower(i));

    for(char i:st) _s.push_back(i);

    if(_s == hash) cout << "YES" << endl;

    else cout << "NO" << endl;
    
return 0;
}