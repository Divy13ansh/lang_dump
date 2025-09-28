#include<stdio.h>
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    while (n>1){
        if(n%2!=0){
            n = 3*n+1;
            printf("%d ",n);
    }
        else{
            n=n/2;
            printf("%d ",n);
    }
}
}
