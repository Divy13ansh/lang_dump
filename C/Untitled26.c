#include<stdio.h>
void main(){
    int a;
    printf("enter a no");
    scanf("%d",&a);
    if(a>0)
        printf("1");
    else if(a<0)
        printf("-1");
    else
        printf("0");
}
