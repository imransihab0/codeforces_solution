// https://codeforces.com/problemset/problem/510/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int n, m;
    cin >> n >> m;
    bool flag = true;
    for(int i=0; i<n; i++)
    {
        if((i+1)%2 == 0)
        {
            if(flag)
            {
                for(int j=0; j<m; j++)
                {
                    if(j == m-1) cout << "#";
                    else cout << ".";
                }cout << endl;
                flag = false;
            }
            else
            {
                for(int j=0; j<m; j++)
                {
                    if(j == 0) cout << "#";
                    else cout << ".";
                }cout << endl;
                flag = true;
            }
        }
        else
        {
            for(int j=0; j<m; j++) cout << "#";
            cout << endl;
        }
    }
    
return 0;
}