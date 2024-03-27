// https://codeforces.com/contest/1926/problem/0
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int c = 0, _c = 0;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'A'){
                c++;
            }else{
                _c++;
            }
        }

        if(c>_c){
            cout << "A" << endl;
        }else{
            cout << "B" << endl;
        }
    }
    
return 0;
}