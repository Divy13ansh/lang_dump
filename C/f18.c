//Perfect
#include <stdio.h>
void main(){
        char perfect(int);
        int n;
        char z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = perfect(n);
        if (z=='y')
            printf("perfect");
        else
            printf("Not perfect");
}
char perfect(int n){
int p,s;
for(s=0,p=1;p<n;p++)
    if(n%p==0)
        s=s+p;
if(s==n)
    return 'y';
else
    return 'n';
}


