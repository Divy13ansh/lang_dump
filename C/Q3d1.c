#include <stdio.h>
void main(){
    int a[3][3],b[3][3],r,c,s;
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("Enter element");
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("Enter element");
            scanf("%d",&b[r][c]);
        }
    }
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            s = a[r][c] + b[r][c];
            printf("%d ",s);
        }
        printf("\n");
    }
}

