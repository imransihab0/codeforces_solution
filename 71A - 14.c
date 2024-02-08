// https://codeforces.com/contest/71/problem/A
// @author: imransihab0

#include<stdio.h>
#include<string.h>
int main(){
    
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){

        char str[100];
        scanf("%s", str);
        int len = strlen(str);

        if(len > 10){
            printf("%c%d%c\n", str[0], len-2, str[len-1]);
        }else{
            for(int i=0; i<len; i++){
                printf("%c", str[i]);
            }printf("\n");
        }

    }
    
return 0;
}