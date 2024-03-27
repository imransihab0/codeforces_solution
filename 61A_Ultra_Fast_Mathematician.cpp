// https://codeforces.com/contest/61/problem/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string a, b, MAIN;
    cin >> a >> b;

    for(int i=0; i<a.size(); i++){
        if(a[i] == b[i]){
            MAIN.push_back('0');
        }else{
            MAIN.push_back('1');
        }
    }

    cout << MAIN << endl;
    
return 0;
}