//array 2
#include<stdio.h>
void main(){
    int a[5],b[5],c[10],i,j,k,*p1,*p2,*p3;
    p1=&a;
    p2=&b;
    p3=&c;
    for(i=0;i<=4;i++){
        printf("Enter element of 1st array: ");
        scanf("%d",p1+i);
    }
    for(i=0;i<=4;i++){
        printf("%d\n",*p1+i);
    }
    for(j=0;j<=4;j++){
        printf("Enter element of 2nd array: ");
        scanf("%d",p2+j);
    }
    for(i=0,k=0;i<=4;i++,k++){
            *(p3+k)=*(p1+i);
    }
    for(j=0;j<=4;j++,k++){
        *(p3+k)=*(p2+j);
    }
    for(k=0;k<=9;k++){
        printf("%d\t",*(p3+k));
    }
}

