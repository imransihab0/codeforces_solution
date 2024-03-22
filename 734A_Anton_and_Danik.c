#include<stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);

    char str[n];
    scanf("%s", str);
    
    int anton = 0, danik = 0;

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'A'){
            anton++;
        }else{
            danik++;
        }
    }

    if(anton>danik){
        printf("Anton\n");
    }else if(danik>anton){
        printf("Danik\n");
    }else{
        printf("Friendship\n");
    }
    
return 0;
}