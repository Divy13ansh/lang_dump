#include <stdio.h>
void main(){
    int i,a,s;
    i = 1;
    s = 0;
    while(i <= 10){
        printf("Enter any no.");
        scanf("%d", &a);
         s = s + a;
         i = i + 1;
    }
    printf("%d", s);
}
