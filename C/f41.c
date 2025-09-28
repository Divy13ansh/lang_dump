//reverse
#include <stdio.h>
void main(){
        void rev();
        rev();
}
void rev(){
int r,s,n;
printf("Enter any no.");
scanf("%d",&n);
for(s=0;n>0;){
    r=n%10;
    s=s*10+r;
    n=n/10;
}
printf("reverse is %d",s);
}


