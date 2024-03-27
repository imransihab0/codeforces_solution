// https://codeforces.com/contest/110/problem/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;

bool isLucky(string &s){
    int c = 0;
    for(auto i:s){
        if(i == '4' || i == '7'){
            c++;
        }
    }
    if( c == 4 || c == 7 ){
        return true;
    }else{
        return false;
    }
}

int main(){
    
    string s;
    cin >> s;

    int l = s.size();
    string sl = to_string(l);

    if(isLucky(s)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
return 0;
}