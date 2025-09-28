#include <stdio.h>
void main(){
    int a[5], b[5], c[5], i,j,k,d,m;
    for(i=0;i<=4;i++){
        printf("Enter element of 1 array: ");
        scanf("%d",&a[i]);
    }
    for(j=0;j<=4;j++){
        printf("Enter element of 2 array: ");
        scanf("%d",&b[j]);
    }
    for(i=0;i<=4;i++){
            for(j=0;j<=4;j++){
                if(a[i]==b[j]){
                        d=0;
                        for(m=0;m<k;m++){
                            if(c[m] == a[i]){
                                d++;
                                break;

                            }
                }
            if(d==0){
                c[k]=a[i];
            k++;
        }
        }
    }
    }
    for(i=0;i<k;i++){
        printf("%d\n",c[i]);
    }
}
