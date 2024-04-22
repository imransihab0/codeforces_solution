// https://codeforces.com/problemset/problem/1957/A
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
        int n;
        map<int, int> m;
        cin >> n;

        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }

        int c = 0;

        for(auto it = m.begin(); it != m.end(); it++)
        {
             c+= (it->second)/3;
        }

        cout << c << endl;

    }
    
return 0;
}