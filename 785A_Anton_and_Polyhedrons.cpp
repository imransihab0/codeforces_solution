// https://codeforces.com/problemset/problem/785/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int t, s = 0;
    cin >> t;
    while(t--)
    {
        string _s;
        cin >> _s;
        if(_s == "Tetrahedron") s += 4;
        else if(_s == "Cube") s += 6;
        else if(_s == "Octahedron") s += 8;
        else if(_s == "Dodecahedron") s += 12;
        else if(_s == "Icosahedron") s += 20;
    }

    cout << s << endl;
    
return 0;
}