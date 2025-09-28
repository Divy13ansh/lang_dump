#include <stdio.h>
void main(){
    int i,j,k;
for(i = 1, j = 1,k = 1;i <= 10;i = i + 1,  k = k + 1, j = j + k){
    printf("%d\n", j);
}
}
