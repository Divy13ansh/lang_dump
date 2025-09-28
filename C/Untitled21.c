#include <stdio.h>
void main(){
    int i,a,s;
    for(i = 1, s = 0; i <= 10; i = i + 1){
        printf("Enter any no.");
        scanf("%d" ,&a);
        s = s + a;
    }
    printf("%d", s);
}

