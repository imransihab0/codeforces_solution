// https://codeforces.com/contest/617/problem/A
// handle: @imransihab

#include<stdio.h>
int main(){
    
    int n, count = 0;
    scanf("%d", &n);
    if(n >= 5){
        int temp = n;
        count = temp/5;
        n %= 5;
    }
    if(n == 4){
        count++;
    }
    if(n == 3){
        count++;
    }
    if(n == 2){
        count++;
    }
    if(n == 1){
        count++;
    }
 
    printf("%d\n", count);
    
return 0;
}