//bubble sort
#include<stdio.h>
void main(){
    int a[5],i,j,k;
    for(i=0;i<=4;i++){
        printf("enter elements");
        scanf("%d",&a[i]);
    }
    printf("\n array before sort\n");
    for(i=0;i<=4;i++){
        printf("%d",a[i]);
    }
    for(i=0;i<=4;i++){
        for(j=0;j<(4-i);j++){
            if(a[j]>a[j+1]){
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    printf("\n array after sort\n");
    for(i=0;i<=4;i++){
        printf("%d",a[i]);
    }
}

