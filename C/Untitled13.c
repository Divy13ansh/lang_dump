#include <stdio.h>
void main(){
    int i,a;
    for(i = 0,a = 11111; i < 5; a = a / 10, i = i + 1){
        printf("%d\n", a);
    }
}
