// https://codeforces.com/problemset/problem/427/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int n, un = 0, count = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>10) arr[i] = 10;
        count += arr[i];
        if(count<0)
        {
            un++;
            count = 0;
        }
        // else if(count > 10) count = 10;
    }

    cout << un << endl;
    
return 0;
}