//perfectdouble
#include <stdio.h>
void main(){
        void perfect(int,int);
        int n1,n2;
        printf("Enter starting no.");
        scanf("%d",&n1);
        printf("Enter ending no.");
        scanf("%d",&n2);
        perfect(n1,n2);
}
void perfect(int n1,int n2){
int p,s;
for(;n1<=n2;n1++){
    for(s=0,p=1;p<n1;p++){
            if(n1%p==0)
                s=s+p;
    }
        if(s==n1)
            printf("Perfect %d",n1);
    }
}

