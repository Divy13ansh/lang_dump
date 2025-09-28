#include <stdio.h>
void main(){
    int i,a;
    for(i = 1, a = 1; i <= 10;a++,i++){
        a = i * i;
        printf("%d\n", a);
    }
}
