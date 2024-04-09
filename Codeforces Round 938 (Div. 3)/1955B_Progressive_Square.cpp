// https://codeforces.com/contest/1955/problem/B
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();

    int t;
    cin >> t;

    while(t--)
    {
        int n, c, d, mv = LLONG_MAX;
        cin >> n >> c >> d;

        vector<int> arr(n*n), _arr;
        for(int i=0; i<n*n; i++)
        {
            cin >> arr[i];
            if(arr[i] <= mv) mv = arr[i];
        }

        int tmp = mv;

        for(int i=0; i<n; i++)
        {
            mv = tmp;
            for(int j=0; j<n; j++)
            {
                _arr.push_back(mv);
                mv += d;
            }
            tmp += c;
        }

        sort(arr.begin(), arr.end());
        sort(_arr.begin(), _arr.end());

        bool flag = true;
        for(int i=0; i<n*n; i++)
        {

            if(arr[i] != _arr[i]) 
            {
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    
return 0;
}