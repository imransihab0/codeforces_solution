//  https://codeforces.com/contest/59/problem/A
// @handle: imransihab0

#include<stdio.h>
int main(){
    
    char str[100];
    scanf("%s", str);
    int up = 0, low = 0;

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            up++;
        }else{
            low++;
        }
    }

    if(up>low){
        for(int i=0; str[i] != '\0'; i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32;
            }
        }
    }else if(low>up){
        for(int i=0; str[i] != '\0'; i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = str[i] + 32;
            }
        }
    }else{
        for(int i=0; str[i] != '\0'; i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = str[i] + 32;
            }
        }
    }

    printf("%s\n", str);
    
return 0;
}