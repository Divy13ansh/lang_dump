#include<stdio.h>
void main(){
    int a,b,q,r;
    printf("Enter first no.: ");
    scanf("%d",&a);
    printf("Enter 2nd no.: ");
    scanf("%d",&b);
    q=a/b;
    r=a%b;
    printf("quotient is %d\nremainder is %d",q,r);
}
