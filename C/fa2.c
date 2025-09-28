#include <stdio.h>
void main(){
    int temp (int);
    int n;
    n=100;
    printf("%d\n",n);
    n=temp(n);
    printf("%d\n",n);
}
int temp(int n){
        n=1000;
        return n;
}

