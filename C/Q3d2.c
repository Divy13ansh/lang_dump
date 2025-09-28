#include <stdio.h>
void main(){
    int a[3][3],b[3][3],r,c,s;
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("Enter element of 1st array");
            scanf("%d",&a[r][c]);
        }
        }
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            if (r == c){
            s = s + a[r][c];
            }
        printf("%d ",a[r][c]);
        }
        printf("\n");
    }
    printf("     %d", s);
}

