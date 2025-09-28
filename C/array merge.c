#include<stdio.h>
void main(){
    int a[5],b[5],c[10],i,j,k;
    for(i=0;i<=4;i++){
        printf("enter element of 1 array=");
        scanf("%d",&a[i]);
    }
    for(j=0;j<=4;j++){
        printf("enter element of 2 array=");
        scanf("%d",&b[j]);
    }
    printf("1 array\n");
    for(i=0;i<=4;i++){
        printf("%d\n",a[i]);

    }
    printf("2 array\n");
    for(j=0;j<=4;j++){
        printf("%d\n",b[j]);
    }
    for(i=0,k=0;i<=4;i++,k++){
        c[k]=a[i];
    }
    for(j=0,k=5;j<=4;j++,k++){
        c[k]=b[j];
    }
    printf("after merge\n");
    for(k=0;k<=9;k++){
        printf("%d\n",c[k]);

    }
}
