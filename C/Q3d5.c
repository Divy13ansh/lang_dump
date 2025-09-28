#include <stdio.h>
void main(){
    int a[3][3],r,c,s;
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("Enter element of 1st array: ");
            scanf("%d",&a[r][c]);
        }
        }
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("%d ",a[r][c]);
        }
        printf("| ");
        for(c=2;c>=0;c--){
            printf("%d ",a[r][c]);
        }
        printf("\n");
    }
    for(c=0; c<=12; c++){
        printf("-");
    }
    printf("\n");
    for(r=2;r>=0;r--){
        for(c=0;c<=2;c++){
            printf("%d ",a[r][c]);
        }
        printf("| ");
        for(c=2;c>=0;c--){
            printf("%d ",a[r][c]);
        }
        printf("\n");
    }

}
