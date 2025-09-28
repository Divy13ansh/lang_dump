#include<stdio.h>
void main(){
    int a[5],i,*p;
    p=&a;
    for(i=0;i<=4;i++){
        printf("Enter element: ");
        scanf("%d",p+i);
    }
    for(i=0;i<=4;i++){
        printf("%d\n",*p+i);
    }
}
