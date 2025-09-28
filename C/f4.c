#include <stdio.h>
void main(){
        void highest();
        highest();
}
void highest(int x,int y){
    int a,b;
    printf("Enter 2 no.");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("a is highest");
    else
        printf("b is highest");
}

