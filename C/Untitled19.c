#include <stdio.h>
void main(){
    int i,a,b,c;
    printf("0\n");
    printf("1\n");
    for(i = 1,a = 0, b = 1; i <= 8; a = b, b = c, i = i + 1){
            c = a + b;
    printf("%d\n", c);

    }
}
