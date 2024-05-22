// https://codeforces.com/problemset/problem/155/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int n, c = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    
    if(n == 1) 
    {
        cout << 0 << endl;
        return 0;
    }

    int max_score = arr[0];
    int min_score = arr[0];
    
    for(int i=1; i<n; i++) 
    {
        if(arr[i] > max_score) 
        {
            c++;
            max_score = arr[i];
        }
        if(arr[i] < min_score) 
        {
            c++;
            min_score = arr[i];
        }
    }

    cout << c << endl;

    return 0;
}