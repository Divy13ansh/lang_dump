#include <stdio.h>
void main(){
    int i,a;
    for(a = 0,i = 1; i <= 5; i = i + 1){
        a = a * 10 + 1;
        printf("%d \n", a);
    }
}
