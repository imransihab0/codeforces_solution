// https://codeforces.com/problemset/problem/96/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cin >> s;

    bool flag = true;

    if(s[0] == '1'){
        bool flag = true;
    }else{
        bool flag = false;
    }

    int MAX = 1, tmp = 1;

    for(int i=1; i<s.size(); i++){

        if(s[i] == s[i-1]){
            tmp++;
            if(tmp >= 7){
                cout << "YES" << endl;
                return 0;
            }
        }else{
            tmp = 1;
        }
        
    }

    cout << "NO" << endl;
    
return 0;
}