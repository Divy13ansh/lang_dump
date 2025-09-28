#include <stdio.h>
void main(){
    int a[5],i,s,r,z;
    for(i=0;i<=4;i++){
        printf("Enter element");
        scanf("%d", &a[i]);
    }
    for(i=0;i<=4;i++){
        for (z=a[i],s=0;a[i]>0;){
        r = a[i] % 10;
        s = s + r;
        a[i] = a[i] / 10;
        }
        printf("sum of digits of %d is %d\n",z, s);

    }
}

