#include <stdio.h>
void main(){
    int a,b,s;
    char c;
    printf("Enter any no.");
    scanf("%d", &a);
    printf("Enter any no.");
    scanf("%d", &b);
    printf("menu\nA.add\nB.sub\nC.multi\nD.divide\nEnter your choice");
    fflush stdin;
    scanf("%c", &c);
    switch(c){
    case 'A':
        s = a + b;
        break;
    case 'B':
        s = a - b;
        break;
    case 'C':
        s = a * b;
        break;
    case 'D':
        s = a / b;
        break;
    default:
        s = 0;

    }
    printf("ans=%d",s);
}

