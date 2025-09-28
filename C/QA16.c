#include <stdio.h>
void main(){
    int a[5], b[5], c[10], i,j,k;
    for(i=0;i<=4;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    for(j=0;j<=4;j++){
        printf("Enter element: ");
        scanf("%d",&b[j]);
    }
    for(k=0,i=4;k<=4;k++,i--){
        c[k] = a[i];
    }
    for(k=5,j=4;k<=9;k++,j--){
        c[k] = b[j];
    }
    for(k=0;k<=9;k++){
        printf("%d\n", c[k]);
    }
}
