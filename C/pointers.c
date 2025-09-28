#include<stdio.h>
void main(){
    int a,b,s,*p1,*p2,*p3;
    p1=&a;
    p2=&b;
    p3=&s;
    printf("Enter first no.: ");
    scanf("%d",p1);
    printf("Enter second no.: ");
    scanf("%d",p2);
    *p3=*p1+*p2;
    printf("%d",*p3);
}
