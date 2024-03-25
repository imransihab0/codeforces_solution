// https://codeforces.com/contest/677/problem/A
// @handle: imransihab0

#include<stdio.h>
int main(){
    
    int n, h;
    scanf("%d%d", &n, &h);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > h){
            sum += 2;
        }else{
            sum += 1;
        }
    }

    printf("%d\n", sum);
    
return 0;
}