// https://codeforces.com/contest/231/problem/A
// @author: imransihab0

#include<stdio.h>
int main(){
    
    int n, count = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int arr[3];
        
        for(int j=0; j<3; j++){
            scanf("%d", &arr[j]);
        }
        int sum = 0;
        for(int j=0; j<3; j++){
            if(arr[j] == 1){
                sum += arr[j];
            }
        }
        if(sum >= 2){
            count++;
        }

    }

    printf("%d\n", count);
    
return 0;
}