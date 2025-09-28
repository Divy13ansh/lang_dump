#include <stdio.h>
void main(){
    int a,r,s;
    printf("Enter any no.");
    scanf("%d", &a);

    for(s = 0; a > 0 ; a / 10){
        r = a % 10;
        s = s + r;
    }
printf("%d", s);
}
