#include <stdio.h>
void main(){
    int a[5],i,r,s,z;
    for(i=0;i<=4;i++){
        printf("Enter element");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++){
            z=a[i];
            for(s=0;a[i]>0;){
        r=a[i]%10;
        s=s+r*r*r;
        a[i]=a[i]/10;
    }
    if(s == z){
    printf("armstrong %d\n",z);
}
}
}

