//Perfect
#include <stdio.h>
void main(){
        void perfect(int);
        int n;
        printf("Enter any no.");
        scanf("%d",&n);
        perfect(n);
}
void perfect(int n){
int p,s;
for(s=0,p=1;p<n;p++)
    if(n%p==0)
        s=s+p;
if(s==n)
    printf("perfect");
else
    printf("Not perfect");
}



