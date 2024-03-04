// https://codeforces.com/problemset/problem/271/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;

bool isUnique(int a, int b, int c, int d){
    int arr[] = {a, b, c, d};
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i != j && arr[i] == arr[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    
    int n;
    cin >> n;

    for(int i=n+1; i<=9012; i++){

        int tmp = i, arr[4];

        for(int j=0; j<4; j++){
            arr[j] = (tmp%10);
            tmp /= 10;
        }

        if(isUnique(arr[0], arr[1], arr[2], arr[3])){
            cout << i << endl;
            break;
        }

    }
    
return 0;
}