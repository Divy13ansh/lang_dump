#include <stdio.h>
void main(){
    int a[3][3],b[3][3],r,c,c0,c1,c2;
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("Enter element of 1st array");
            scanf("%d",&a[r][c]);
        }
        }
    for(r=0,c0=0,c1=,c2=0;r<=2;r++){
        for(c=0;c<=2;c++){
            if (c == 0){
            c0 = c0 + a[r][0];
            }
            if (c == 1){
            c1 = c1 + a[r][1];
            }
            if (c == 2){
            c2 = c2 + a[r][2];
            }
        printf("%d ",a[r][c]);
        }
        printf("\n");
    }
    printf("%d %d %d",c0, c1, c2);
}
