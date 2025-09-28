#include <stdio.h>
void main(){
    void input(int *[]);
    void disp(int *[]);
    int a[5];
    input(&a[5]);
    disp(&a[5]);
}
void input(int *a[5]){
    int i;
    for(i=0;i<=4;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
}
void disp(int *a[5]){
    int j;
    for(j=0;j<=4;j++)
        printf("%d\t",a[j]);
}
