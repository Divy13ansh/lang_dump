//Prime
#include <stdio.h>
void main(){
        void prime(int);
        int n;
        printf("Enter any no.");
        scanf("%d",&n);
        prime(n);
}
void prime(int n){
int p;
for(p=2;p<=n;p++)
    if (n%p==0)
        break;
if(p==n)
    printf("prime");
else
    printf("Not prime");
}

