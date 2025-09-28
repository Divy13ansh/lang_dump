//reverse
#include <stdio.h>
void main(){
        int rev(int);
        int n,z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = rev(n);
        printf("reverse is %d",z);
}
int rev(int n){
int r,s;
for(s=0;n>0;){
    r=n%10;
    s=s*10+r;
    n=n/10;
}
return s;
}

