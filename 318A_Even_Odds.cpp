// https://codeforces.com/problemset/problem/318/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 1e12;
vector<int> v;

int32_t main(){
    FastIO();
    
    int n, k;
    cin >> n >> k;

    int m = ceil(n/2.0);

    if(k>m)
    {
        cout << (k-m)*2 << endl;
    }
    else
    {
        cout << (k*2)-1 << endl;
    }
    
return 0;
}