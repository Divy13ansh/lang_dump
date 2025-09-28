//Prime
#include <stdio.h>
void main(){
        char prime(int);
        char z;
        int n;
        printf("Enter any no.");
        scanf("%d",&n);
        z = prime(n);
        if (z=='y')
            printf("Prime");
        else
            printf("Not prime");
}
char prime(int n){
int p;
for(p=2;p<=n;p++)
    if (n%p==0)
        break;
if(p==n)
    return 'y';
else
    return 'n';
}
