// https://codeforces.com/contest/1969/problem/A
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
        int n; cin >> n;
        int arr[n+1];
        for(int i=1; i<=n; i++) cin >> arr[i];
        bool flag = false;
        
        for(int i=1; i<=n; i++) if( i == arr[arr[i]] ) flag = true;

        if(flag) cout << 2 << endl;
        else cout << 3 << endl;
    }
    
return 0;
}