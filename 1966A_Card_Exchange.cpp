// https://codeforces.com/contest/1966/problem/A
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
        int n, k, tmp;
        cin >> n >> k;
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            m[tmp]++;
        }

        vector<int> max;
        for(auto it = m.begin(); it != m.end(); it++) if(it->second > 0) max.push_back(it->second);

        sort(max.begin(), max.end(), greater<int>());
        
        if(max[0] < k) cout << n << endl;
        else cout << k - 1 << endl;
      
    }
    
return 0;
}