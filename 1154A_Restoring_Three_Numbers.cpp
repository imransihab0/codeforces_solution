// https://codeforces.com/problemset/problem/1154/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int arr[4];
    for(int i=0; i<4; i++) cin >> arr[i];
    sort(arr, arr+4);

    int b = arr[0] + arr[1] - arr[3],
        a = arr[0] - b,
        c = arr[1] - b;

    cout << b << " " << a << " " << c << endl;
    
return 0;
}