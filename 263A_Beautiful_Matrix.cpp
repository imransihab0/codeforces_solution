// https://codeforces.com/problemset/problem/263/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b, s = 0;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            int t;
            cin >> t;
            if(t == 1){
                a = i;
                b = j;
            }
        }
    }

    s += ((abs(3-a))+(abs(3-b)));

    cout << s << endl;
    
return 0;
}