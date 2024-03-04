// https://codeforces.com/contest/112/problem/A
// @handle: imransihab0

#include<stdio.h>
#include<string.h>

int main(){
    
    char str1[101];
    char str2[101];

    scanf("%s", str1);
    scanf("%s", str2);

    for(int i=0; str1[i] != '\0'; i++){
        if(str1[i] >= 'A' && str1[i] <= 'Z'){
            str1[i] = str1[i] + 32;
        }
    }
    for(int i=0; str2[i] != '\0'; i++){
        if(str2[i] >= 'A' && str2[i] <= 'Z'){
            str2[i] = str2[i] + 32;
        }
    }

    printf("%d\n", strcmp(str1, str2));
    
return 0;
}