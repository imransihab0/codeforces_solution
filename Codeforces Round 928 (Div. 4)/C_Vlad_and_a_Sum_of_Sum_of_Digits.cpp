// https://codeforces.com/contest/1926/problem/C
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
const int N = 2*1e5+10;
long long sum[N];

void func(){
    for(int i=1; i<=N; i++){

        int num = i;
        long long summ = 0;
        while(num>0){
            summ += num%10;
            num/=10;
        }
        sum[i] = sum[i-1] + summ; 
    }
}

int main(){

    func();
    int t;
    cin >> t;
    while (t--){

        int n;
        cin >> n;
        cout << sum[n] << endl;

    }  
}