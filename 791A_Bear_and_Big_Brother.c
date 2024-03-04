// https://codeforces.com/contest/791/problem/A
// @handle: imransihab0

#include<stdio.h>
int main(){
    
    int a, b, count = 0;
    scanf("%d%d", &a, &b);

    while( a <= b ){
        a *= 3;
        b *= 2;
        count++;
    }

    printf("%d\n", count);
    
return 0;
}