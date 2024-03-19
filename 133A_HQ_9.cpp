// https://codeforces.com/problemset/problem/133/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();

    string s;
    cin >> s;

    bool flag = false;

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            cout << "YES" << endl;
            flag = true;
            return 0;
        }
    }

    if(!flag){
        cout << "NO" << endl;
    }
    
return 0;
}