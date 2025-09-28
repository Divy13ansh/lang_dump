#include<stdio.h>
void main(){
    char a;
    printf("Enter any character");
    scanf("%c, &a");
    if(a >= 65 && a <= 90)
        a = a + 32;
    else
        a = a - 32;
printf("%c", a);
}
