//Perfect
#include <stdio.h>
void main(){
        void perfect();
        perfect();
}
void perfect(){
int p,s,n;
printf("Enter any no.");
scanf("%d",&n);
for(s=0,p=1;p<n;p++)
    if(n%p==0)
        s=s+p;
if(s==n)
    printf("perfect");
else
    printf("Not perfect");
}
