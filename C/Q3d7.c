#include <stdio.h>
void main(){
    int a[3][3],b[3][3],r,c,i,j,z;
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("Enter element of 1st array");
            scanf("%d",&a[r][c]);
        }
    }
    for(c=0;c<=2;c++){
            for(r=0;r<=2;r++){
        for(i=0;i<=2;i++){
                for(j=i+1;j<=2;j++){
                    if(a[i]>a[j]){
                        z=a[i];
                        a[i]=a[j];
                        a[j]=z;
                    }
                }
        }
            }
    }
    for(i=0;i<=4;i++){
        printf("%d\n",a[r][c]);
}
}


