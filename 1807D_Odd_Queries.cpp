// https://codeforces.com/problemset/problem/1807/D
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int t;
    cin >> t;

    while(t--)
    {
        int n, q;
        cin >> n >> q;

        int arr[n] = {0};
        for(int i=0; i<n; i++)
        {
             cin >> arr[i];
             if(i) arr[i] = arr[i-1] + arr[i];
        }

        while(q--)
        {
            int sum = 0;

            int l, r, k;
            cin >> l >> r >> k;

            if(l>1) sum = arr[r-1] - arr[l-2];
            else sum = arr[r-1];

            sum = (arr[n-1] - sum) + ((r-l+1)*k);

            if(sum%2 == 0) pn;
            else py;

        }

    }
    
return 0;
}