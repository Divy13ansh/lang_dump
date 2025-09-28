#include<stdio.h>
void main(){
    char a, b;
    printf("Enter any character ");
    scanf("%c", &a);
    if (a >= 65 && a <= 90)
        printf("UPPERCASE");
    else if(a >= 97 && a <= 122)
        printf("lowercase");
}

