#include <stdio.h>
void main(){
    int a,b,s,c;
    printf("Enter any no.");
    scanf("%d", &a);
    printf("Enter any no.");
    scanf("%d", &b);
    printf("menu\n1.add\n2.sub\n3.multi\n4.divide\nEnter your choice");
    scanf("%d", &c);
    switch(c){
    case 1:
        s = a + b;
        break;
    case 2:
        s = a - b;
        break;
    case 3:
        s = a * b;
        break;
    case 4:
        s = a / b;
        break;
    default:
        s = 0;

    }
    printf("ans=%d",s);
}
