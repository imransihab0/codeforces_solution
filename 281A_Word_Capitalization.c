// https://codeforces.com/contest/281/problem/A
// @handle: imransihab0

#include<stdio.h>
int main(){
    
    char str[1001];
    scanf("%s", str);

    if(str[0] > 90){
        str[0] = str[0] - 32;
    }

    printf("%s\n", str);
    
return 0;
}