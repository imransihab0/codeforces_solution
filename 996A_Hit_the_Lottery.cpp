// https://codeforces.com/problemset/problem/996/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int n; cin >> n;
    int bills = 0, tmp = 0;
    bills += n/100;
    tmp = n%100; n = tmp;
    bills += n/20;
    tmp = n%20; n = tmp;
    bills += n/10;
    tmp = n%10; n = tmp;
    bills += n/5;
    tmp = n%5; n = tmp;
    bills += n/1;
    
    cout << bills << endl;
    
return 0;
}