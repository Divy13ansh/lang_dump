//nested if-else 1
#include<stdio.h>
void main(){
    int a,*p1;
    p1=&a;
    printf("Enter your age: ");
    scanf("%d",p1);
    if(*p1<=12)
        printf("child");
    else{
        if(*p1>12&&*p1<18)
            printf("Teenager");
        else{
            if(*p1>=18&&*p1<=65)
                printf("adult");
            else
                printf("Old age");
        }

}
}


