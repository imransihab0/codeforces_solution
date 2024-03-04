// https://codeforces.com/contest/705/problem/A
// @handle: imransihab0

#include<stdio.h>
#include<string.h>
int main(){
    
    char start = 'I';
    char last[] = "it";
    char love[] = "love";
    char hate[] = "hate";
    char that[] = "that";

    int n;
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        if(i%2 != 0){
            printf("%c %s %s ", start, hate, that);
        }else{
            printf("%c %s %s ", start, love, that);
        }
    }
    
    if(n%2 != 0){
        printf("%c %s %s\n", start, hate, last);
    }else{
        printf("%c %s %s\n", start, love, last);
    }
    
return 0;
}