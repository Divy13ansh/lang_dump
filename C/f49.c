#include <stdio.h>
void main(){
        char h3(int,int,int);
        int n1,n2,n3;
        char z;
        printf("Enter three no.s: ");
        scanf("%d%d%d",&n1,&n2,&n3);
        z=h3(n1,n2,n3);
        if(z=='A')
            printf("a is greatest");
        else if(z=='B')
            printf("b is greatest");
        else
            printf("c is greatest");

}
char h3(int n1,int n2,int n3){
if((n1>n2)&&(n1>n3))
    return 'A';
else if((n2>n1)&&(n2>n3))
    return 'B';
else if((n3>n2)&&(n3>n1))
    return 'C';
}

