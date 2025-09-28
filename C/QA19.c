#include <stdio.h>
void main(){
    int a[5], b[5], c[5], i,j,k;
    for(i=0;i<=4;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    for(j=0;j<=4;j++){
        printf("Enter element: ");
        scanf("%d",&b[j]);
    }
    for(k=0;k<=4;k++){
        c[k] = a[k] + b[k];
    }
    for(k=0;k<=4;k++){
        printf("%d\n", c[k]);
    }
}
