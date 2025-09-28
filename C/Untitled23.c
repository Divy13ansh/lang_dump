#include <stdio.h>
void main(){
    int i,a,se,so;
    for(i = 1, se = 0, so = 0; i <= 10; i = i + 1){
            printf("Enter any no.");
            scanf("%d", &a);
            if (a % 2 == 0){
                se = se + a;
            }
            else{
                so = so + a;
            }
    }
printf("odd %d\n", so);
printf("even %d", se);
    }

