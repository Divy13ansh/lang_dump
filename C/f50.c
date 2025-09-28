#include <stdio.h>
void main(){
        void h3(int,int,int);
        int z,n1,n2,n3;
        printf("Enter three no.s: ");
        scanf("%d%d%d",&n1,&n2,&n3);
        h3(n1,n2,n3);
}
void h3(int n1,int n2,int n3){
if((n1>n2)&&(n1>n3))
    printf("a is greatest");
else if((n2>n1)&&(n2>n3))
    printf("b is greatest");
else if((n3>n2)&&(n3>n1))m
    printf("c is greatest");
}
