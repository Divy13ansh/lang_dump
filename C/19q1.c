#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,d;
    float d1,r1,r2;
    printf("Equation: ax^2 + bx + c \n");
    printf("Enter a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    d1 = sqrt(d);
    if(d<0)
        printf("The roots are imaginary");
    else{
        r1=(-b+d1)/2*a;
        r2=(-b-d1)/2*a;
        printf("First root: %.2f\n",r1);
        printf("Second root: %.2f",r2);
    }
}
