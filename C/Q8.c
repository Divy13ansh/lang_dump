#include <stdio.h>
void main(){
    int a[10],i,o,e;
    for(i=0;i<=9;i++){
        printf("Enter element");
        scanf("%d", &a[i]);
    }
    for(o=0,e=0,i=0;i<=9;i++){
        if(a[i]%2==0)
            e=e+a[i];
        else
            o=o+a[i];
        }
        printf("odd %d\n",o);
        printf("even %d",e);
    }

