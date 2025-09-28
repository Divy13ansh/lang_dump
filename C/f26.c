//Buzz
#include <stdio.h>
void main(){
        int buzz(int);
        int n,z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = buzz(n);
        if(z==7||n%10==7||n%7==0)
            printf("buzz");
        else
            printf("Not buzz");
}
int buzz(int n){
int r,s;
for(s=0;n>0;){
    r=n%10;
    s=s+r;
    n=n/10;
}
return s;
}


