//reverse
#include <stdio.h>
void main(){
        void rev(int);
        int n;
        printf("Enter any no.");
        scanf("%d",&n);
        rev(n);
}
void rev(int n){
int r,s;
for(s=0;n>0;){
    r=n%10;
    s=s*10+r;
    n=n/10;
}
printf("reverse is %d",s);
}


