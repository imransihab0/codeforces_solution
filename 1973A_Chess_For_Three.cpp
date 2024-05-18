// https://codeforces.com/contest/1973/problem/A
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
        int a, b, c, sum = 0;
        cin >> a >> b >> c;
        sum = a+b+c;
        int arr[] = {a, b, c}; sort(arr, arr+3);
        if(sum%2 != 0) cout << -1 << endl;
        else cout << min(arr[0]+arr[1], sum/2) << endl;
    }
    
return 0;
}