// https://codeforces.com/problemset/problem/139/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int n;
    cin >> n;

    int hash[7];

    for(int i=0; i<7; i++) cin >> hash[i];

    int s = 0, c = 0;
    while(s<n){
        s += hash[c]; c++;
        if(c == 7){
            c = 0;
        }
    }

    if(c == 0){
        cout << 7 << endl;
    }else{
        cout << c << endl;
    }
    
return 0;
}