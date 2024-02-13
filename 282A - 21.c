// https://codeforces.com/contest/282/problem/A
// @author: imransihab0

#include<stdio.h>
#include<string.h>
int main(){
    
    int n, charpp = 0, charmm = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        char statement[5];
        scanf("%s", statement);
        
        if(statement[0] == '+' || statement[2] == '+'){
            charpp++;
        }else if(statement[0] == '-' || statement[2] == '-'){
            charmm++;
        }
    }

    printf("%d\n", charpp - charmm);
    
return 0;
}