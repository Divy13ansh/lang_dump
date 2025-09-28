#include <stdio.h>
void main(){
    int n,s,p;
    printf("Enter any no.");
    scanf("%d", &n);
    for(p = 1,s = 0; p < n; p = p + 1){
        if (n % p == 0)
            s = s + p;
    }
    if (s == n)
        printf("Perfect");
    else
        printf("Not perfect");
    }
