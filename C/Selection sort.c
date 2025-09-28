//selection sort
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
            for (j=i+1;j<=4;j++){
                if(a[i]>a[j]){
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
                }
            }
    }
    printf("\n array after sort \n");
    for(i=0;i<=4;i++){
        printf("%d\t",a[i]);
    }k
}
