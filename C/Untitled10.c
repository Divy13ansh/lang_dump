#include <stdio.h>
void main(){
    int i,j;
for(i = 1, j = 1;i <= 10;i = i + 1, j = j + i){
    printf("%d\n", j);
}
}
