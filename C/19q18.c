#include<stdio.h>
void main(){
    int i,a,b,k,z;
    printf("Enter first no.: ");
    scanf("%d",&a);
    printf("Enter second no.: ");
    scanf("%d",&b);
    if(a>b)
        z=a;
    else
        z=b;
    k=a*b;
    for(i=z;i<=k;){
        if((a%i==0)&&(b%i==0)){
            break;
        }
        else
            i++;
    }
    printf("LCM is %d",i);

}
