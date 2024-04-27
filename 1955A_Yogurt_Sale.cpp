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
        int a, b, c, ev = 0, od = 0, net = 0;
        cin >> a >> b >> c;
        od = a%2; ev = a - od;
        if((2*b)<=c)
        {
            net = a*b;
        }
        else
        {
            net += ((ev/2)*c);
            net += od*b;
        }
        cout << net << endl;
    }
    
return 0;
}