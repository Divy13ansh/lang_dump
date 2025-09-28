#include <stdio.h>
void main(){
    int a[5],i,r,s;
    for(i=0;i<=4;i++){
        printf("Enter element");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++){
            for(s=0;a[i]>0;){
        r=a[i]%10;
        s=s*10+r;
        a[i]=a[i]/10;
    }
    printf("%d\n",s);
}
}
