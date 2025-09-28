#include<stdio.h>
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    n=n&n-1;
    printf("n without rightmost set bit = %d",n);
}
