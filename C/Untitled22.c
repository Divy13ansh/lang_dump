#include <stdio.h>
void main(){
    int i,a,e,o;
    for(i = 1, e = 0, o = 0; i <= 10; i = i + 1){
            printf("Enter any no.");
            scanf("%d", &a);
            if (a % 2 == 0){
                e = e + 1;
            }
            else{
                o = o + 1;
            }
    }
printf("odd %d\n", o);
printf("even %d", e);
    }
