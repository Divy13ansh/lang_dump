#include <stdio.h>
void main(){
        void highest(int,int);
        int a,b;
        printf("Enter 2 no.");
        scanf("%d %d",&a,&b);
        highest(a,b);
}
void highest(int x,int y){
    if(x>y)
        printf("a is highest");
    else
        printf("b is highest");
}

