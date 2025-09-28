//make a function sum which recieves 2 no.s and returns their sum.
#include <stdio.h>
void main(){
        int highest(int,int);
        int a,b,z;
        printf("Enter 2 no.");
        scanf("%d %d",&a,&b);
        z = highest(a,b);
        if(z==1)
            printf("a is highest");
        else
            printf("b is highest");
}
int highest(int x,int y){
    if(x>y)
        return 1;
    else
        return 0;
}
