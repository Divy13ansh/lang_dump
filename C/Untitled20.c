#include <stdio.h>
void main(){
    int i,a,b,c,d;
    printf("1\n");
    printf("2\n");
    printf("3\n");
    for(i = 1,a = 1, b = 2, c = 3; i <= 7; a = b, b = c, c = d, i = i + 1){
            d = a + b + c;
    printf("%d\n", d);

    }
}

