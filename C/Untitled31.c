#include <stdio.h>
void main(){
    int a,r,s,z;
    printf("Enter any no.");
    scanf("%d", &a);
    z = a;

    for(s = 0; a > 0 ;a = a / 10){
        r = a % 10;
        s = s * 10 + r;
    }
    if(s == z){
        printf("palindrome");
    }
    else{
        printf("Not palindrome");
    }
}
