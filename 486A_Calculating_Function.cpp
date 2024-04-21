// https://codeforces.com/problemset/problem/486/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int n;
    cin >> n;

    int _o, _e;
    if(n%2 == 0){
        _e = n/2; _o = _e;
    }else{
        _e = n/2; _o = _e+1;
    }

    int odd = _o*_o, even = _e*(_e+1);

    cout << even - odd << endl;
    
return 0;
}