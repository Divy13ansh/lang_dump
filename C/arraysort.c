#include<stdio.h>
void main(){
    int a[5],i,j,z;
    for(i=0;i<=4;i++){
        printf("enter element=");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++){
        for(j=i+1;j<=4;j++){
            if(a[i]>a[j]){
                z=a[i];
                a[i]=a[j];
                a[j]=z;

            }
        }
    }
     for(i=0;i<=4;i++){
        printf("%d\n",a[i]);

    }
}
