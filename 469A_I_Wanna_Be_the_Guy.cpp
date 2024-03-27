// https://codeforces.com/problemset/problem/469/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int n;
    cin >> n;

    int p, q;
    set<int> x;

    cin >> p;

    for(int i=0; i<p; i++){
        int tmp;
        cin >> tmp;
        if(tmp != 0){
            x.insert(tmp);
        }
    }

    cin >> q;

    for(int i=0; i<q; i++){
        int tmp;
        cin >> tmp;
        if(tmp != 0){
            x.insert(tmp);
        }
    }

    if(x.size() == n){
        cout << "I become the guy." << endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }

return 0;
}