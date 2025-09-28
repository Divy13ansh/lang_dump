//if else 2
#include<stdio.h>
void main(){
    int a,b,*p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter cost price: ");
    scanf("%d",p1);
    printf("Enter selling price: ");
    scanf("%d",p2);
    if(*p1>*p2)
        printf("loss");
    else
        printf("profit");
}


