//Perfect
#include <stdio.h>
void main(){
        int perfect(int);
        int n,z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = perfect(n);
        if (z==n)
            printf("perfect");
        else
            printf("Not perfect");
}
int perfect(int n){
int p,s;
for(s=0,p=1;p<n;p++)
    if (n%p==0)
        s=s+p;
return s;
}

