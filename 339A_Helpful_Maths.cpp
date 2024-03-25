// https://codeforces.com/contest/339/problem/A
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    char str[101], onlyNum[50];
    cin >> str;
    int len = strlen(str);

    for(int i=0, j=0; i<len; i++){
        if(str[i] != '+'){
            onlyNum[j] = str[i];
            j++;
        }
    }

    for(int i=0; i<(len/2)+1; i++){
        for(int j=i+1; j<(len/2)+1; j++){
            if(onlyNum[i] > onlyNum[j]){
                int temp = onlyNum[i];
                onlyNum[i] = onlyNum[j];
                onlyNum[j] = temp;
            }
        }
    }

    for(int i=0; i<(len/2); i++){
        cout << onlyNum[i] << "+";
    }cout << onlyNum[(len/2)] << endl;
    
return 0;
}