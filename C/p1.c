#include<stdio.h>
void main(){
    int a,b,*p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter first no.: ");
    scanf("%d",p1);
    printf("Enter second no.: ");
    scanf("%d",p2);
    if(*p1>*p2)
        printf("%d is greatest",*p1);
    else
        printf("%d is greatest",*p2);
}

