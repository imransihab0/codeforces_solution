// https://codeforces.com/problemset/problem/122/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;

bool isLucky(int n){
    while(n>0){
        int t = n%10;
        n /= 10;
        if(t != 4 && t != 7){
            return false;
        }
    }
    return true;
}

int main(){
    
    int n;
    cin >> n;

    isLucky(n) ? (cout << "YES" << endl) : (n%4 == 0 || n%7 == 0 || n%47 == 0) ? (cout << "YES" << endl) : (cout << "NO" << endl);
    
return 0;
}