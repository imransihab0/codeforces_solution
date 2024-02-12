// https://codeforces.com/contest/158/problem/A
// @author: imransihab0

#include<stdio.h>
int main(){
    
    int a, b, count = 0;
    scanf("%d %d", &a, &b);
    int arr[a];

    for(int i=0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<a; i++){
        if(arr[b-1] == 0){
        if(arr[i] > arr[b-1]){
            count++;
        }
        }else{
            if(arr[i] >= arr[b-1]){
            count++;
        }
        }
    }

    printf("%d\n", count);
    
return 0;
}