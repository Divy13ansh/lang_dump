#include <stdio.h>
void main(){
    int a,r,s,z;
    printf("Enter any no.");
    scanf("%d", &a);

    for(s = 0,z=a; a > 0 ; ){
        r= a%10;
        s=s+r;
        a=a/10;
    }
    if(s == 7||z % 7 == 0||z % 10 == 7)
        printf("Buzz");

    else
        printf("not buzz");
}
