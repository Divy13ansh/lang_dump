//primedouble
#include <stdio.h>
void main(){
        void prime();
        prime();
}
void prime(){
int p,s,n1,n2;
printf("Enter starting no.");
scanf("%d",&n1);
printf("Enter ending no.");
scanf("%d",&n2);
for(;n1<=n2;n1++){
    for(p=2;p<=n1;p++){
            if(n1%p==0)
                break;
    }
            if(p==n1)
                printf("prime %d\n",n1);
    }
}
