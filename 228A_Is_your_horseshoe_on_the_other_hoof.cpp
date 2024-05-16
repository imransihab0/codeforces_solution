// https://codeforces.com/problemset/problem/228/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int t = 4;
    set<int> s;
    while(t--)
    {
        int tmp; cin >> tmp;
        s.insert(tmp);
    }

    cout << 4-s.size() << endl;
    
return 0;
}