//Prime
#include <stdio.h>
void main(){
        int prime(int);
        int n,z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = prime(n);
        if (z==1)
            printf("Prime");
        else
            printf("Not prime");
}
int prime(int n){
int p;
for(p=2;p<=n;p++)
    if (n%p==0)
        break;
if(p==n)
    return 1;
else
    return 0;
}

