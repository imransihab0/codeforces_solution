// https://codeforces.com/contest/546/problem/A
// @handle: imransihab0

#include<stdio.h>
int main(){
    
    int k,n,w,sum = 0;
    scanf("%d%d%d", &k, &n, &w);

    for(int i=1; i<=w; i++){
        sum += i*k;
    }

    if(n >= sum){
        printf("0\n");
    }else{
        printf("%d\n", sum - n);
    }
    
return 0;
}