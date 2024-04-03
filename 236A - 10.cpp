// https://codeforces.com/contest/236/problem/A
// @handle: imransihab0

#include<stdio.h>
#include<string.h>
int main(){
    
    char str[100];
    scanf("%s", str);
    
    for(int i=0; str[i] != '\0'; i++){
        for(int j=i+1; str[j] != '\0'; j++){
            if(str[i] > str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    int count = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] != str[i+1]){
            count++;
        }
    }

    if(count%2 == 0) printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
        
return 0;
}
