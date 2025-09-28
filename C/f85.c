//reversedouble
#include <stdio.h>
void main(){
        void rev(int,int);
        int n1,n2;
        printf("Enter starting no.");
        scanf("%d",&n1);
        printf("Enter ending no.");
        scanf("%d",&n2);
        rev(n1,n2);
}
void rev(int n1,int n2){
int s,r,z;
for(;n1<=n2;n1++){
        s=0;
        z=n1;
    for(;z>0;){
            r=z%10;
            s=s*10+r;
            z=z/10;
    }
        printf("reverse of %d is %d\n",n1,s);
    }
}
