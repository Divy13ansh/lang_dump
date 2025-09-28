#include <stdio.h>
void main(){
        int highest();
        int z;
        z = highest();
        if(z==1)
            printf("a is highest");
        else
            printf("b is highest");
}
int highest(int x,int y){
    int a,b;
    printf("Enter 2 no.");
    scanf("%d %d",&a,&b);
    if(x>y)
        return 1;
    else
        return 0;
}

