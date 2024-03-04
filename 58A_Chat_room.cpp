// https://codeforces.com/problemset/problem/58/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s, _s, __s = "hello";
    int t = 0, r = 0;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o'){
            _s += (s[i]);
        }
    }

    for(int i=0; i<_s.size(); i++){
        if(_s[i] == __s[t]){
            t++;
            r++;
        }
        if(r == 5){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
        
return 0;
}