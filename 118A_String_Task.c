// https://codeforces.com/contest/118/problem/A
// @handle: imransihab0

#include<stdio.h>
int main(){
    
    char str[101];
    scanf("%s", str);

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y'){
            continue;
        }else{
            printf(".%c", str[i]);
        }
    }

    printf("\n");
    
return 0;
}   