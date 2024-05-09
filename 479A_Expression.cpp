// https://codeforces.com/problemset/problem/479/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int arr[3];
    for(int i=0; i<3; i++) cin >> arr[i];
    int a, b, c, d, e;

    a = arr[0] * arr[1] * arr[2];
    b = arr[0] * (arr[1] + arr[2]);
    c = (arr[0] + arr[1]) * arr[2];
    d = (arr[2] + arr[1]) * arr[0];
    e = arr[2] + arr[1] + arr[0];

    int m[] = {a, b, c, d, e};
    sort(m, m+5);
    cout << m[4] << endl;
    
return 0;
}