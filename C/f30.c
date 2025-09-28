//Buzz
#include <stdio.h>
void main(){
        void buzz();
        buzz();
}
void buzz(){
int r,s,z,n;
printf("Enter any no.");
scanf("%d",&n);
for(s=0,z=n;n>0;){
    r=n%10;
    s=s+r;
    n=n/10;
}
if(s==7||z%10==7||z%7==0)
    printf("buzz");
else
    printf("Not buzz");
}
