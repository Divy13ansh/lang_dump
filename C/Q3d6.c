#include <stdio.h>
void main(){
    int a[3][3],r,c,s,k;
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("Enter element of 1st array: ");
            scanf("%d",&a[r][c]);
        }
        }
    printf("Enter no. you want to search");
    scanf("%d",&s);
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
                k = 0;
                if(a[r][c]==s){
                        k = 1;
                    printf("Row is %d\n",r);
                    printf("Column is %d",c);
                }
        }

                }
                 if (k == 0)
                printf("Not found");
}

