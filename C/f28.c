//Buzz
#include <stdio.h>
void main(){
        char buzz(int);
        int n;
        char z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = buzz(n);
        if(z=='y')
            printf("buzz");
        else
            printf("Not buzz");
}
char buzz(int n){
int r,s,z;
for(s=0,z=n;n>0;){
    r=n%10;
    s=s+r;
    n=n/10;
}
if(s==7||z%10==7||z%7==0)
    return 'y';
else
    return 'n';
}



