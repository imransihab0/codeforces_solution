// https://codeforces.com/contest/1955/problem/A
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
        int n, k;
        cin >> n >> k;

        vector<int> v;
        for(int i=0; i<n; i++) 
        {
            int x; cin >> x;
            v.push_back(x);
        }

        bool flag = true;
        for(int i=0; i<k; i++){
            if(flag)
            {
                v[0]--;
                flag = !flag;
            }
            else
            {
                v[v.size() - 1]--;
                flag = !flag;
            }

            if(v[0] <= 0) v.erase(v.begin());
            if(v[v.size() - 1] <= 0) v.pop_back();
        }
        cout << v.size() << endl;
    }
    
return 0;
}