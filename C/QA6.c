#include <stdio.h>
void main(){
    int a[5],i,j,k;
    for(i=0;i<=4;i++){
        printf("Enter element");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=2;i++){
        j=4-i;
        printf("%d\n",a[j]);
        if(i < 2)
        printf("%d\n",a[i]);
    }
}
