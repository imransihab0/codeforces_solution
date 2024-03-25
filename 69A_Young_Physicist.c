// https://codeforces.com/contest/69/problem/A
// @handle: imransihab0

#include<stdio.h>
int main(){
    
    int n, xi = 0, yi = 0, zi = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        xi += x;
        yi += y;
        zi += z;
    }

    if(xi == 0 && yi == 0 && zi == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
    
return 0;
}