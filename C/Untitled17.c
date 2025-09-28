#include <stdio.h>
void main(){
    int i,a;
    for(i = 1, a = 0; i <= 5;i++){
        a = a * 10 + i;
        printf("%d\n", a);
    }
}
