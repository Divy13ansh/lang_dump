//incomplete
#include<stdio.h>
void main(){
    int x,a[4],i,j,k,x1[5],sum1,z;
    printf("Enter the coefficients in the form ax^3 + bx^2 + cx + d\n");
    for(i=0;i<=3;i++){
        printf("Enter coefficient: ");
        scanf("%d",&a[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d",&x);
    z=x;
    sum1 = 0;
    j=2;
    for(i=0;i<=3;i++){
        while(j>0){
                x=z;
            for(k=j;k>0;k--){
                    x=x*x;
                }
                x1[i]=x;
                sum1 = sum1 + (a[i])*(x1[i]);
                j=j-1;
        }
    }
    sum1 = sum1 + a[3];
    printf("The value of polynomial is %d\n", sum1);
    for(i=0;i<=4;i++){
        printf("%d\n",a[i]);
    }
    }
