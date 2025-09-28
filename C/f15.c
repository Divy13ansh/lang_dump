//Prime
#include <stdio.h>
void main(){
        void prime();
        prime();
}
void prime(){
int p,n;
printf("Enter any no.: ");
scanf("%d",&n);
for(p=2;p<=n;p++)
    if (n%p==0)
        break;
if(n==p)
    printf("Prime");
else
    printf("Not prime");
}


