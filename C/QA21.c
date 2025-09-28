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
    for(i=0;i<=4;i++){
            for(j=0;j<=4;j++){
        if(a[i]!=b[j]){
            printf("%d\n",a[i]);
        }
    }
    }
}
