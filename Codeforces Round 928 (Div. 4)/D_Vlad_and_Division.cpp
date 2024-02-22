// https://codeforces.com/contest/1926/problem/D
// @handle: imransihab0
// could not solve this

#include<bits/stdc++.h>
using namespace std;

string toBin(unsigned long long int &n){
    string s;
    if(n == 0){
        return "0";
    }
    while(n>0){
        if((n%2) == 0){
            s.push_back('0');
        }else{
            s.push_back('1');
        }
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    
    int t;
    cin >> t;

    while(t--){
        unsigned long long int n;
        cin >> n;
        cout << toBin(n) << endl;
    }
    
return 0;
}