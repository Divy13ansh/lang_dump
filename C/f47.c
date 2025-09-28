#include <stdio.h>
void main(){
        int h3(int,int,int);
        int z,n1,n2,n3;
        printf("Enter three no.s: ");
        scanf("%d%d%d",&n1,&n2,&n3);
        z=h3(n1,n2,n3);
        if(z==n1)
            printf("a is greatest");
        else if(z==n2)
            printf("b is greatest");
        else
            printf("c is greatest");

}
int h3(int n1,int n2,int n3){
if((n1>n2)&&(n1>n3))
    return n1;
else if((n2>n1)&&(n2>n3))
    return n2;
else if((n3>n2)&&(n3>n1))
    return n3;
}
