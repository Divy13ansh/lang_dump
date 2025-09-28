#include<stdio.h>
void main(){
    int count,n;
    printf("Enter n: ");
    scanf("%d",&n);
    count = 0;
    while(n){
        n &= n-1;
        count=count+1;
    }
    printf("%d",count);
}
