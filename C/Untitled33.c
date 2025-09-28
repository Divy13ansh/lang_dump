#include <stdio.h>
void main(){
    int n,r,f;
    printf("Enter any no.");
    scanf("%d", &n);
    for(f = 1; n > 0; n = n - 1){
        f = f * n;
        }
printf("%d", f);
}
