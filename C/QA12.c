#include <stdio.h>
void main(){
    int a[5],i,r,f,z;
    for(i=0;i<=4;i++){
        printf("Enter element");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++){
            z=a[i];
            for(f=1;a[i]>0;a[i]--){
        f=f*a[i];
    }
    printf("%d\n",f);
}
}


