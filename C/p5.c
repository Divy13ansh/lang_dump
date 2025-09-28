//merge 2 arrays using pointers
#include<stdio.h>
void main(){
    int a[5],b[5],c[10],i,j,k,*x,*y,*z;
    x=a;
    y=b;
    z=c;
    for(i=0;i<=4;i++){
        printf("Enter array 1: ");
        scanf("%d",x+i);
    }
    for(j=0;j<=4;j++){
        printf("Enter array 2: ");
        scanf("%d",y+j);
    }
    for(i=0,k=0;i<=4;i++,k++){
        *(z+k)=*(x+i);
    }
    for(j=0,k=5;j<=4;j++,k++){
        *(z+k)=*(y+j);
    }
    for(k=0;k<=9;k++){
        printf("%d\n",*(z+k));
    }
}
