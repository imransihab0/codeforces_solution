// https://codeforces.com/problemset/problem/467/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t, s = 0;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        if((b-a)>=2){
            s++;
        }
    }

    cout << s << endl;
    
return 0;
}