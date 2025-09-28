#include <stdio.h>
void main(){
    int n,p,z;
    printf("Enter any no.");
    scanf("%d", &n);
    for(p = 2 ; p <=n; p = p + 1){
        if (n % p == 0)
            break;

    }
        if (p == n)
            printf("Prime");

        else
        printf("Not prime");



}

