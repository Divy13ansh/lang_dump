#include <stdio.h>
void main(){
    int i,a,p;
    printf("Enter any no.");
    scanf("%d", &a);
    for(i = 1; i <= 10; i = i + 1){
       p = a * i;
       printf("%d\n", p);
    }
    }

